/*
 * XREFs of MiChargeForLockedPage @ 0x140032500
 * Callers:
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiFinishMdlForMappedFileFault @ 0x14002AE10 (MiFinishMdlForMappedFileFault.c)
 *     MiRelockProtoPoolPage @ 0x14002E068 (MiRelockProtoPoolPage.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140032610 (MiCheckProtoPtePageState.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x140078050 (MiIsPfnCommitNotCharged.c)
 *     MiChargePartitionResidentAvailable @ 0x1400C0428 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2)
{
  unsigned __int64 v2; // r10
  int v3; // edx
  int v4; // eax
  __int64 v5; // rdx
  char v6; // si
  unsigned int v7; // r11d
  __int64 v8; // r10
  ULONG_PTR *v9; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v12; // ett
  unsigned int v13; // ebx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2 & 1;
  v4 = v3 ^ 1;
  v5 = (unsigned int)-v3;
  v6 = 0;
  v7 = 4 * v4 + 4;
  if ( (v2 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
    || (unsigned int)MiIsPfnCommitNotCharged(a1, v5) )
  {
    v6 = 1;
  }
  v8 = (v2 >> 40) & 0x3FF;
  v9 = *(ULONG_PTR **)(qword_140388AF0 + 8 * v8);
  if ( !v6 || (result = MiChargeCommit(*(_QWORD *)(qword_140388AF0 + 8 * v8), 1LL, v7), (_DWORD)result) )
  {
    if ( v9 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( CachedResidentAvailable )
      {
        while ( CachedResidentAvailable != -1 )
        {
          v12 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v12 == CachedResidentAvailable )
            return 1;
          if ( !CachedResidentAvailable )
            break;
        }
      }
    }
    v13 = MiChargePartitionResidentAvailable(v9);
    if ( !v13 )
    {
      if ( v6 )
        MiReturnCommit(v9, 1LL);
    }
    return v13;
  }
  return result;
}
