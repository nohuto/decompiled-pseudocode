/*
 * XREFs of RtlFindNextForwardRunClearEx @ 0x14013ECF0
 * Callers:
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140416D50 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140416ED0 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiDeleteLeakedSessionPool @ 0x14057AA70 (MiDeleteLeakedSessionPool.c)
 *     MiCleanPhysicalProcessPages @ 0x1406B87E4 (MiCleanPhysicalProcessPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindNextForwardRunClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return RtlFindNextForwardRunClearCappedEx(a1, a2, (__int64)a3, a3);
}
