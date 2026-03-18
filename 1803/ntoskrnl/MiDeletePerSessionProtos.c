/*
 * XREFs of MiDeletePerSessionProtos @ 0x140267E68
 * Callers:
 *     MiDeleteSessionDriverProtos @ 0x1405EE6C0 (MiDeleteSessionDriverProtos.c)
 *     MiFreeSubsectionProtos @ 0x140754FD8 (MiFreeSubsectionProtos.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14004B350 (MiUpdateSystemProtoPtesTree.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     MiDeleteTransitionPte @ 0x140052AA8 (MiDeleteTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     KeSetPagePrivilege @ 0x14023FCB0 (KeSetPagePrivilege.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiDeletePerSessionProtos(PVOID *P, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  ULONG_PTR v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int8 v7; // di
  PVOID *v8; // r14
  char *v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r14
  ULONG_PTR v15; // r15
  __int64 v16; // rax
  __int64 DemandZeroPte; // rax
  __int128 v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 v21; // [rsp+78h] [rbp+10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h]

  v4 = (__int64)P[8];
  v5 = 0LL;
  v6 = (unsigned __int64)P[9];
  v7 = 17;
  *((_QWORD *)&v19 + 1) = 0LL;
  v8 = P;
  v9 = (char *)*P;
  v10 = *(_QWORD *)v4;
  v11 = *(unsigned int *)(v4 + 44);
  *(_QWORD *)&v19 = *P;
  v21 = 17;
  v12 = v6 + 8 * v11;
  v13 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v10 + 60) & 0x3FF));
  v22 = v13;
  if ( v6 < v12 )
  {
    v14 = v13;
    do
    {
      if ( (v6 & 0xFFF) == 0 || v7 == 17 )
      {
        if ( v7 != 17 )
        {
          LOBYTE(v13) = v7;
          MiUnlockProtoPoolPage(v5, v13, v4, a4);
        }
        while ( 1 )
        {
          v5 = MiLockProtoPoolPage(v6, &v21);
          if ( v5 )
            break;
          MmAccessFault(2uLL, v6, 0, 0LL);
        }
        v7 = v21;
      }
      v15 = MiLockLeafPage(v6, 0);
      v16 = MI_READ_PTE_LOCK_FREE(v6);
      v13 = v16;
      if ( v15 )
      {
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v15 + 40) >> 54) & 7) == 3 )
        {
          MiRemoveLockedPageChargeAndDecRef(v15, v16, v4, a4);
          KeSetPagePrivilege((__int64)(v15 + 0x58000000000LL) / 48, &v19, 16);
          MiClearPfnImageVerified(v15, 4);
          v9 = (char *)v19;
        }
        if ( (unsigned int)MiDeleteTransitionPte((__int64 *)v6, v15, 0x11u, 1) == 3 )
          --v11;
      }
      else
      {
        if ( !v16 )
          break;
        if ( (v16 & 0x400) == 0 )
        {
          DemandZeroPte = MiMakeDemandZeroPte(24);
          if ( v13 != DemandZeroPte )
            MiReleasePageFileSpace(v14, v13);
        }
      }
      v9 += 4096;
      v6 += 8LL;
      *(_QWORD *)&v19 = v9;
    }
    while ( v6 < v12 );
    v8 = P;
    if ( v7 != 17 )
    {
      LOBYTE(v13) = v7;
      MiUnlockProtoPoolPage(v5, v13, v4, a4);
    }
  }
  MiReturnCommit(v22, v11);
  MiUpdateSystemProtoPtesTree((__int64)(v8 + 3), 0);
  ExFreePoolWithTag(v8[9], 0);
  ExFreePoolWithTag(v8, 0);
  return v11;
}
