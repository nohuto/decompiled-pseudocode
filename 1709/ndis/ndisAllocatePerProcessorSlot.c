/*
 * XREFs of ndisAllocatePerProcessorSlot @ 0x1C0010208
 * Callers:
 *     ndisAllocateOpenBlock @ 0x1C00BDF1C (ndisAllocateOpenBlock.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisAllocateFreeSlot @ 0x1C0010298 (ndisAllocateFreeSlot.c)
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C0022AC4 (ndisAllocatePerProcessorPageDescriptor.c)
 *     ndisAllocateFreeSlotFromDescriptor @ 0x1C0065EAC (ndisAllocateFreeSlotFromDescriptor.c)
 */

__int64 __fastcall ndisAllocatePerProcessorSlot(unsigned int a1)
{
  KIRQL v2; // si
  __int64 FreeSlot; // rbx
  unsigned int v4; // edx
  unsigned int i; // ecx
  unsigned int v6; // eax
  __int64 PerProcessorPageDescriptor; // rcx
  _LIST_ENTRY *v9; // rcx
  _LIST_ENTRY *Flink; // rax

  if ( (a1 & 0xFE000000) == 0xFE000000 )
    return 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
  FreeSlot = ndisAllocateFreeSlot(a1);
  if ( !FreeSlot )
  {
    PerProcessorPageDescriptor = ndisAllocatePerProcessorPageDescriptor();
    if ( PerProcessorPageDescriptor )
    {
      FreeSlot = ndisAllocateFreeSlotFromDescriptor(PerProcessorPageDescriptor, a1);
      Flink = ndisPerProcessorDescriptorList.Flink;
      if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
        __fastfail(3u);
      v9->Flink = ndisPerProcessorDescriptorList.Flink;
      v9->Blink = &ndisPerProcessorDescriptorList;
      Flink->Blink = v9;
      ndisPerProcessorDescriptorList.Flink = v9;
    }
  }
  KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v2);
  if ( FreeSlot )
  {
    v4 = ndisMaxNumberOfProcessors;
    for ( i = 0; i < v4; *(_QWORD *)((v6 << 12) + FreeSlot) = 0LL )
      v6 = i++;
  }
  return FreeSlot;
}
