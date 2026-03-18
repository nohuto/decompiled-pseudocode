/*
 * XREFs of MiDeletePerSessionProtos @ 0x140221048
 * Callers:
 *     MiDeleteSessionDriverProtos @ 0x140585040 (MiDeleteSessionDriverProtos.c)
 *     MiFreeSubsectionProtos @ 0x1406BE328 (MiFreeSubsectionProtos.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x14007A23C (MiDeleteTransitionPte.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     KeSetPagePrivilege @ 0x1401FC9E8 (KeSetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(unsigned __int64 *a1)
{
  unsigned int *v1; // r8
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  unsigned __int8 v4; // di
  __int64 v5; // r14
  struct _KEVENT *v6; // r12
  unsigned __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 DemandZeroPte; // rax
  __int64 v12; // rdx
  __int128 v14[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 v15; // [rsp+60h] [rbp+8h] BYREF

  v1 = (unsigned int *)a1[3];
  v2 = 0LL;
  v3 = a1[4];
  v4 = 17;
  v15 = 17;
  v5 = v1[11];
  v6 = *(struct _KEVENT **)(qword_14036C8F8 + 8LL * (*(_WORD *)(*(_QWORD *)v1 + 60LL) & 0x3FF));
  v14[0] = *a1;
  v7 = v3 + 8LL * v1[11];
  if ( v3 < v7 )
  {
    do
    {
      if ( (v3 & 0xFFF) == 0 || v4 == 17 )
      {
        if ( v4 != 17 )
          MiUnlockProtoPoolPage(v2, v4);
        while ( 1 )
        {
          v2 = MiLockProtoPoolPage(v3, &v15);
          if ( v2 )
            break;
          MmAccessFault(2uLL, v3, 0, 0LL);
        }
        v4 = v15;
      }
      v8 = MiLockLeafPage(v3, 0);
      v9 = MI_READ_PTE_LOCK_FREE(v3);
      if ( v8 )
      {
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v8 + 40) >> 54) & 7) == 3 )
        {
          MiRemoveLockedPageChargeAndDecRef(v8);
          KeSetPagePrivilege((v8 + 0x58000000000LL) / 48, v14, 16);
          MiClearPfnImageVerified(v8, 4);
        }
        LOBYTE(v10) = 17;
        if ( (unsigned int)MiDeleteTransitionPte((__int64 *)v3, v8, v10, 1LL) == 3 )
          --v5;
      }
      else
      {
        if ( !v9 )
          break;
        if ( (v9 & 0x400) == 0 )
        {
          DemandZeroPte = MiMakeDemandZeroPte(24);
          if ( v12 != DemandZeroPte )
            MiReleasePageFileSpace(v6, v12, 1);
        }
      }
      *(_QWORD *)&v14[0] += 4096LL;
      v3 += 8LL;
    }
    while ( v3 < v7 );
    if ( v4 != 17 )
      MiUnlockProtoPoolPage(v2, v4);
  }
  return v5;
}
