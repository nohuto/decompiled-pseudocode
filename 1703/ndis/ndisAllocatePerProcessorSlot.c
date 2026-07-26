/*
 * XREFs of ndisAllocatePerProcessorSlot @ 0x1C001BB6C
 * Callers:
 *     NdisNblTrackerRegisterComponent @ 0x1C001BA60 (NdisNblTrackerRegisterComponent.c)
 *     ndisAllocateOpenBlock @ 0x1C00B65F8 (ndisAllocateOpenBlock.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C00137C4 (ndisAllocatePerProcessorPageDescriptor.c)
 *     ndisAllocateFreeSlotFromDescriptor @ 0x1C001BC2C (ndisAllocateFreeSlotFromDescriptor.c)
 */

__int64 __fastcall ndisAllocatePerProcessorSlot(unsigned int a1)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // rcx
  KIRQL v4; // si
  struct _LIST_ENTRY **v5; // rcx
  __int64 FreeSlotFromDescriptor; // rbx
  unsigned int v7; // edx
  unsigned int i; // ecx
  unsigned int v9; // eax
  _DWORD *PerProcessorPageDescriptor; // rcx
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *v13; // rax

  if ( (a1 & 0xFE000000) == 0xFE000000 )
    return 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
  Flink = ndisPerProcessorDescriptorList.Flink;
  v4 = v2;
  while ( Flink != &ndisPerProcessorDescriptorList )
  {
    FreeSlotFromDescriptor = ndisAllocateFreeSlotFromDescriptor(Flink, a1);
    if ( FreeSlotFromDescriptor )
      goto LABEL_5;
    Flink = *v5;
  }
  FreeSlotFromDescriptor = 0LL;
LABEL_5:
  if ( !FreeSlotFromDescriptor )
  {
    PerProcessorPageDescriptor = ndisAllocatePerProcessorPageDescriptor();
    if ( PerProcessorPageDescriptor )
    {
      FreeSlotFromDescriptor = ndisAllocateFreeSlotFromDescriptor(PerProcessorPageDescriptor, a1);
      v13 = ndisPerProcessorDescriptorList.Flink;
      if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
        __fastfail(3u);
      v12->Flink = ndisPerProcessorDescriptorList.Flink;
      v12->Blink = &ndisPerProcessorDescriptorList;
      v13->Blink = v12;
      ndisPerProcessorDescriptorList.Flink = v12;
    }
  }
  KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v4);
  if ( FreeSlotFromDescriptor )
  {
    v7 = ndisMaxNumberOfProcessors;
    for ( i = 0; i < v7; *(_QWORD *)((v9 << 12) + FreeSlotFromDescriptor) = 0LL )
      v9 = i++;
  }
  return FreeSlotFromDescriptor;
}
