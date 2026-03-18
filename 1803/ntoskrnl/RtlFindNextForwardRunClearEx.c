/*
 * XREFs of RtlFindNextForwardRunClearEx @ 0x1402882D0
 * Callers:
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1404828A0 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140482A34 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiDeleteLeakedSessionPool @ 0x1405ED150 (MiDeleteLeakedSessionPool.c)
 *     MiCleanPhysicalProcessPages @ 0x14074F9E0 (MiCleanPhysicalProcessPages.c)
 * Callees:
 *     RtlFindNextForwardRunClearCappedEx @ 0x1400D7BF0 (RtlFindNextForwardRunClearCappedEx.c)
 */

unsigned __int64 __fastcall RtlFindNextForwardRunClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return RtlFindNextForwardRunClearCappedEx(a1, a2, (__int64)a3, a3);
}
