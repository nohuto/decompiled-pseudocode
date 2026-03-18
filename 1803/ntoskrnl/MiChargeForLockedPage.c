/*
 * XREFs of MiChargeForLockedPage @ 0x140033DD0
 * Callers:
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x140059A10 (MiRelockProtoPoolPage.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x140032060 (MiIsPfnCommitNotCharged.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x140134FF4 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r10
  int v5; // edx
  char v6; // si
  unsigned int v7; // r11d
  __int64 v8; // rbx
  __int64 v9; // r10
  ULONG_PTR *v10; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v13; // ett
  unsigned int v14; // ebx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 40);
  v5 = a2 & 1;
  v6 = 0;
  v7 = 4 * (v5 ^ 1) + 4;
  v8 = (unsigned int)-(v5 != 0);
  if ( (v4 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
    || (unsigned int)MiIsPfnCommitNotCharged(a1) )
  {
    v6 = 1;
  }
  v9 = (v4 >> 40) & 0x3FF;
  v10 = *(ULONG_PTR **)(qword_1403CBD88 + 8 * v9);
  if ( !v6 || (result = MiChargeCommit(*(_QWORD *)(qword_1403CBD88 + 8 * v9), 1LL, v7, a4), (_DWORD)result) )
  {
    if ( v10 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( CachedResidentAvailable )
      {
        while ( CachedResidentAvailable != -1 )
        {
          v13 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v13 == CachedResidentAvailable )
            return 1;
          if ( !CachedResidentAvailable )
            break;
        }
      }
    }
    v14 = MiChargePartitionResidentAvailable(v10, 1LL, v8, a4);
    if ( !v14 )
    {
      if ( v6 )
        MiReturnCommit((__int64)v10, 1uLL);
    }
    return v14;
  }
  return result;
}
