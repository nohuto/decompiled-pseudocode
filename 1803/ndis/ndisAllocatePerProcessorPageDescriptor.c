/*
 * XREFs of ndisAllocatePerProcessorPageDescriptor @ 0x1C0014BD0
 * Callers:
 *     ndisAllocatePerProcessorSlot @ 0x1C001C11C (ndisAllocatePerProcessorSlot.c)
 *     NdisAllocateRWLock @ 0x1C00201D0 (NdisAllocateRWLock.c)
 *     ndisInitializePerProcessorSlotAllocator @ 0x1C011C144 (ndisInitializePerProcessorSlotAllocator.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C00B465C (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 */

char *ndisAllocatePerProcessorPageDescriptor()
{
  unsigned int v0; // edi
  char *result; // rax
  _DWORD *v2; // rbx
  unsigned int *v3; // rdx

  v0 = 0;
  if ( KeGetCurrentIrql() )
    result = (char *)ExAllocatePoolWithTag(
                       NonPagedPoolNxCacheAligned,
                       (ndisMaxNumberOfProcessors + 1) << 12,
                       0x6D61444Eu);
  else
    result = (char *)ndisAllocateNumaStripedPages();
  v2 = result;
  if ( result )
  {
    memset(result + 4096, 0, ndisMaxNumberOfProcessors << 12);
    v3 = v2 + 5;
    do
      *v3++ = ++v0 | 0xFE000000;
    while ( v0 < 0x1FF );
    v2[516] = -16777217;
    result = (char *)v2;
    v2[4] = -33554432;
  }
  return result;
}
