/*
 * XREFs of MiDeletePerSessionProtos @ 0x14022DCD4
 * Callers:
 *     MiDeleteSessionDriverProtos @ 0x1405ED4B4 (MiDeleteSessionDriverProtos.c)
 *     MiFreeSubsectionProtos @ 0x1406EB778 (MiFreeSubsectionProtos.c)
 * Callees:
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiDeleteTransitionPte @ 0x1400317D0 (MiDeleteTransitionPte.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     KeSetPagePrivilege @ 0x14015130C (KeSetPagePrivilege.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int8 v7; // di
  __int64 v8; // r14
  struct _KEVENT *v9; // r12
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 PteShadow; // rdx
  ULONG_PTR v13; // rbp
  __int64 DemandZeroPte; // rax
  __int64 v15; // rdx
  __int128 v17[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = (unsigned int *)a1[3];
  v5 = 0LL;
  v6 = a1[4];
  v7 = 17;
  v18 = 17;
  v8 = v4[11];
  v9 = *(struct _KEVENT **)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF));
  v17[0] = *a1;
  v10 = v6 + 8LL * v4[11];
  if ( v6 < v10 )
  {
    do
    {
      if ( (v6 & 0xFFF) == 0 || v7 == 17 )
      {
        if ( v7 != 17 )
          MiUnlockProtoPoolPage(v5, v7);
        while ( 1 )
        {
          v5 = MiLockProtoPoolPage(v6, &v18);
          if ( v5 )
            break;
          MmAccessFault(2uLL, v6, 0LL, 0LL);
        }
        v7 = v18;
      }
      v11 = MiLockLeafPage((__int64 *)v6, 0LL, (__int64)v4, a4);
      PteShadow = *(_QWORD *)v6;
      v13 = v11;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      if ( v13 )
      {
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v13 + 40) >> 54) & 7) == 3 )
        {
          MiRemoveLockedPageChargeAndDecRef(v13);
          KeSetPagePrivilege((__int64)(v13 + 0x58000000000LL) / 48, v17, 16);
          MiClearPfnImageVerified(v13, 4);
        }
        if ( (unsigned int)MiDeleteTransitionPte((ULONG_PTR *)v6, v13, 0x11u, 1) == 3 )
          --v8;
      }
      else
      {
        if ( !PteShadow )
          break;
        if ( (PteShadow & 0x400) == 0 )
        {
          DemandZeroPte = MiMakeDemandZeroPte(24);
          if ( v15 != DemandZeroPte )
            MiReleasePageFileSpace(v9, v15);
        }
      }
      *(_QWORD *)&v17[0] += 4096LL;
      v6 += 8LL;
    }
    while ( v6 < v10 );
    if ( v7 != 17 )
      MiUnlockProtoPoolPage(v5, v7);
  }
  return v8;
}
