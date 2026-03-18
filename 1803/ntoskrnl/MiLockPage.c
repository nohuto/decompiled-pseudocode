/*
 * XREFs of MiLockPage @ 0x140264C28
 * Callers:
 *     MiScanPagefileSpace @ 0x14074EC90 (MiScanPagefileSpace.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 *     MmAreMdlPagesLocked @ 0x140812AA4 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPage(__int64 a1)
{
  return MiLockPageInline(a1);
}
