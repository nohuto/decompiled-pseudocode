/*
 * XREFs of MiRelockWorkingSetExclusive @ 0x1400661C0
 * Callers:
 *     MiOutSwapWorkingSetCallback @ 0x140002340 (MiOutSwapWorkingSetCallback.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140009DA8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 *     NtUnlockVirtualMemory @ 0x1400EB680 (NtUnlockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400EBE20 (MiWalkVaRange.c)
 *     MiDeleteSystemPageTables @ 0x1400F6F60 (MiDeleteSystemPageTables.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiInsertViewOfPhysicalSection @ 0x1401519F8 (MiInsertViewOfPhysicalSection.c)
 *     MiReleaseCommitForResetPageCallback @ 0x140212FA0 (MiReleaseCommitForResetPageCallback.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x140215640 (MiEmptyWsPrivatePagesCallback.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 */

KIRQL __fastcall MiRelockWorkingSetExclusive(__int64 a1, unsigned __int8 a2)
{
  LONG *v4; // rbx
  int v5; // ebp
  int v6; // edi
  unsigned int v7; // edi
  KIRQL result; // al

  MiPreUnlockWorkingSetExclusive(a1, a2);
  if ( (*(_BYTE *)(a1 + 192) & 7) == 2 )
    v4 = &dword_140389780;
  else
    v4 = (LONG *)(a1 + 200);
  v5 = 0;
  v6 = *v4 & 0x40000000;
  if ( v6 )
    v4[1] = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  __writecr8(a2);
  if ( v6 )
  {
    v7 = 0;
    while ( v4[1] )
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
      if ( (v7 & 0x3F) == 0 )
      {
        v5 = 1;
        break;
      }
    }
  }
  result = ExAcquireSpinLockExclusive(v4);
  if ( !v5 )
    v4[1] = 0;
  return result;
}
