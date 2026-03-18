/*
 * XREFs of RtlClearAllBitsEx @ 0x14010C850
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x14042B67C (IopLiveDumpEstimateMemoryPages.c)
 *     MiCreateVadEventBitmap @ 0x14056A9D8 (MiCreateVadEventBitmap.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1406BA400 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406BB5EC (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     MiResizeAweBitMap @ 0x1406E5A4C (MiResizeAweBitMap.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset(*(void **)(a1 + 8), 0, 4 * ((*(_QWORD *)a1 >> 5) + ((*(_QWORD *)a1 & 0x1F) != 0)));
}
