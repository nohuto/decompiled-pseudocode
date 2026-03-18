/*
 * XREFs of MiLockPage @ 0x14022A294
 * Callers:
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x1406E3220 (MiFillPagedPoolLockedDown.c)
 *     MiScanPagefileSpace @ 0x1406E4870 (MiScanPagefileSpace.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 *     MmAreMdlPagesLocked @ 0x1407A5AD4 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPage(__int64 a1)
{
  return MiLockPageInline(a1);
}
