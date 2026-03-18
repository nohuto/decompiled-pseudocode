/*
 * XREFs of MiWorkingSetIsContended @ 0x14007A1C0
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiOutSwapWorkingSetCallback @ 0x140079C70 (MiOutSwapWorkingSetCallback.c)
 *     MiWalkVaRange @ 0x14007B280 (MiWalkVaRange.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x14007C430 (MiEmptyWsPrivatePagesCallback.c)
 *     MiDeleteSystemPageTables @ 0x14008283C (MiDeleteSystemPageTables.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiGetPageChain @ 0x1400BB6F0 (MiGetPageChain.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     NtUnlockVirtualMemory @ 0x1400FA8B0 (NtUnlockVirtualMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140123508 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140162EEC (MiInsertViewOfPhysicalSection.c)
 *     MiReleaseCommitForResetPageCallback @ 0x14020C030 (MiReleaseCommitForResetPageCallback.c)
 *     MiScrubLargeMappedPage @ 0x14022617C (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWorkingSetIsContended(__int64 a1)
{
  LONG *v1; // rax

  v1 = &dword_14036D4C0;
  if ( (*(_BYTE *)(a1 + 192) & 7) != 2 )
    v1 = (LONG *)(a1 + 200);
  return ((unsigned int)*v1 >> 30) & 1;
}
