/*
 * XREFs of UnmapChildMmioSpace @ 0x1C00341B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UnmapChildMmioSpace(__int64 a1, void *a2)
{
  VmbChannelUnmapChildMmioSpace(*(_QWORD *)(a1 + 408));
  ExFreePoolWithTag(a2, 0x4B677844u);
}
