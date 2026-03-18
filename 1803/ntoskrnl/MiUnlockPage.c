/*
 * XREFs of MiUnlockPage @ 0x140264C50
 * Callers:
 *     MiUnlinkBadPages @ 0x140252F68 (MiUnlinkBadPages.c)
 *     MiScanPagefileSpace @ 0x14074EC90 (MiScanPagefileSpace.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 *     MmAreMdlPagesLocked @ 0x140812AA4 (MmAreMdlPagesLocked.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUnlockPage(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = a2;
  __writecr8(a2);
  return result;
}
