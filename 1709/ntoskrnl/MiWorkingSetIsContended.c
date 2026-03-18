/*
 * XREFs of MiWorkingSetIsContended @ 0x1400EBDF0
 * Callers:
 *     MiOutSwapWorkingSetCallback @ 0x140002340 (MiOutSwapWorkingSetCallback.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140009DA8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     NtUnlockVirtualMemory @ 0x1400EB680 (NtUnlockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400EBE20 (MiWalkVaRange.c)
 *     MiDeleteSystemPageTables @ 0x1400F6F60 (MiDeleteSystemPageTables.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MiInsertViewOfPhysicalSection @ 0x1401519F8 (MiInsertViewOfPhysicalSection.c)
 *     MiReleaseCommitForResetPageCallback @ 0x140212FA0 (MiReleaseCommitForResetPageCallback.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x140215640 (MiEmptyWsPrivatePagesCallback.c)
 *     MiScrubLargeMappedPage @ 0x1402387C4 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWorkingSetIsContended(__int64 a1)
{
  LONG *v1; // rax

  v1 = &dword_140389780;
  if ( (*(_BYTE *)(a1 + 192) & 7) != 2 )
    v1 = (LONG *)(a1 + 200);
  return ((unsigned int)*v1 >> 30) & 1;
}
