/*
 * XREFs of MiUnlockPage @ 0x14022A2A8
 * Callers:
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x1406E3220 (MiFillPagedPoolLockedDown.c)
 *     MiScanPagefileSpace @ 0x1406E4870 (MiScanPagefileSpace.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 *     MmAreMdlPagesLocked @ 0x1407A5AD4 (MmAreMdlPagesLocked.c)
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
