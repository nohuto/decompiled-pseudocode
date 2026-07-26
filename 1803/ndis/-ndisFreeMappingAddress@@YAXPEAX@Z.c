/*
 * XREFs of ?ndisFreeMappingAddress@@YAXPEAX@Z @ 0x1C00669BC
 * Callers:
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C00B465C (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeMappingAddress(void *a1)
{
  MmFreeMappingAddress(a1, 0x6C53444Eu);
}
