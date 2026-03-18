/*
 * XREFs of MiUnlockPage @ 0x14021EF0C
 * Callers:
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x1406B6770 (MiFillPagedPoolLockedDown.c)
 *     MiScanPagefileSpace @ 0x1406B7C30 (MiScanPagefileSpace.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 *     MmAreMdlPagesLocked @ 0x140763D78 (MmAreMdlPagesLocked.c)
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
