/*
 * XREFs of MiIsPfn @ 0x140101790
 * Callers:
 *     MiInvalidateHiberPhasePages @ 0x14042F0B0 (MiInvalidateHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x14042F1F0 (MiMarkHiberNotCachedPages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x14042F440 (MiMarkNonPagedHiberPhasePages.c)
 *     PfpPfnPrioRequest @ 0x14043D960 (PfpPfnPrioRequest.c)
 *     MiMapLockedPagesInUserSpace @ 0x140448658 (MiMapLockedPagesInUserSpace.c)
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 *     MiMapViewOfPhysicalSection @ 0x1405D96D4 (MiMapViewOfPhysicalSection.c)
 *     MmIsExtentDangling @ 0x1406E4398 (MmIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x1406ED4E8 (MmRelocatePfnList.c)
 *     MmAreMdlPagesLocked @ 0x1407A5AD4 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x1407A5C04 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x1407A5D04 (MmCheckMapIoSpace.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfn(unsigned __int64 a1)
{
  if ( a1 > qword_1403885E0 )
    return 0LL;
  if ( MmPhysicalMemoryBlock )
    return (*(_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0;
  return 1LL;
}
