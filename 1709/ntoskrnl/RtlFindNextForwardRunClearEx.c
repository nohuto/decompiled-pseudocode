/*
 * XREFs of RtlFindNextForwardRunClearEx @ 0x140252A10
 * Callers:
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x14042BD80 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x14042BF00 (IopLiveDumpPopulateBitmapForDump.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 *     MiDeleteLeakedSessionPool @ 0x1406E3110 (MiDeleteLeakedSessionPool.c)
 *     MiCleanPhysicalProcessPages @ 0x1406E54AC (MiCleanPhysicalProcessPages.c)
 * Callees:
 *     RtlFindNextForwardRunClearCappedEx @ 0x1400C1DB0 (RtlFindNextForwardRunClearCappedEx.c)
 */

unsigned __int64 __fastcall RtlFindNextForwardRunClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return RtlFindNextForwardRunClearCappedEx(a1, a2, (__int64)a3, a3);
}
