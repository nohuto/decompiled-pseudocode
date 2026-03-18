/*
 * XREFs of MiLockPage @ 0x14021EF00
 * Callers:
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x1406B6770 (MiFillPagedPoolLockedDown.c)
 *     MiScanPagefileSpace @ 0x1406B7C30 (MiScanPagefileSpace.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 *     MmAreMdlPagesLocked @ 0x140763D78 (MmAreMdlPagesLocked.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MiLockPage(__int64 a1)
{
  return MiLockPageInline(a1);
}
