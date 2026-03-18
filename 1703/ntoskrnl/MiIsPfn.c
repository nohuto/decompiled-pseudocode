/*
 * XREFs of MiIsPfn @ 0x1400DC8A0
 * Callers:
 *     MiInvalidateHiberPhasePages @ 0x14040A880 (MiInvalidateHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x14040D7C0 (MiMarkHiberNotCachedPages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x14040DBB0 (MiMarkNonPagedHiberPhasePages.c)
 *     PfpPfnPrioRequest @ 0x1405206B0 (PfpPfnPrioRequest.c)
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x14056C3D8 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 *     MmIsExtentDangling @ 0x1406B7754 (MmIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x1406BF984 (MmRelocatePfnList.c)
 *     MmAreMdlPagesLocked @ 0x140763D78 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x140763EF4 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140763FF4 (MmCheckMapIoSpace.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfn(unsigned __int64 a1)
{
  if ( a1 > qword_14036C290 )
    return 0LL;
  if ( MmPhysicalMemoryBlock )
    return (*(_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0;
  return 1LL;
}
