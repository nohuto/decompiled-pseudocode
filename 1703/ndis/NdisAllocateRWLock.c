/*
 * XREFs of NdisAllocateRWLock @ 0x1C0014180
 * Callers:
 *     EthCreateFilter @ 0x1C00A900C (EthCreateFilter.c)
 *     nullCreateFilter @ 0x1C00E0DEC (nullCreateFilter.c)
 *     ndisInitializePeriodicReceives @ 0x1C0113E38 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C00137C4 (ndisAllocatePerProcessorPageDescriptor.c)
 *     ndisAllocateFreeSlotFromDescriptor @ 0x1C001BC2C (ndisAllocateFreeSlotFromDescriptor.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

PNDIS_RW_LOCK_EX __stdcall NdisAllocateRWLock(NDIS_HANDLE NdisHandle)
{
  SIZE_T v2; // rsi
  struct _NDIS_RW_LOCK_EX *PoolWithTag; // rax
  unsigned int v4; // ebx
  struct _NDIS_RW_LOCK_EX *v5; // rdi
  KIRQL v6; // al
  _LIST_ENTRY *Flink; // rcx
  KIRQL v8; // bp
  int v9; // edx
  __int64 v10; // rdx
  __int64 FreeSlotFromDescriptor; // rsi
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int **RefCount; // r8
  unsigned int v16; // ecx
  _DWORD *PerProcessorPageDescriptor; // rcx
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *v20; // rax

  v2 = 8LL * (ndisMaxNumberOfProcessors - 1) + 40;
  PoolWithTag = (struct _NDIS_RW_LOCK_EX *)ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x7772444Eu);
  v4 = 0;
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v2);
    KeInitializeSpinLock(&v5->WriteLock);
    v5->SourceHandle = NdisHandle;
    v6 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
    Flink = ndisPerProcessorDescriptorList.Flink;
    v8 = v6;
    while ( Flink != &ndisPerProcessorDescriptorList )
    {
      v9 = (int)Flink[1].Flink;
      if ( v9 != -16777217 )
      {
        v10 = v9 & 0x1FFFFFF;
        FreeSlotFromDescriptor = (__int64)&Flink[256] + 8 * v10;
        LODWORD(Flink[1].Flink) = *((_DWORD *)&Flink[1].Flink + v10 + 1);
        *((_DWORD *)&Flink[1].Flink + v10 + 1) = 2003977294;
        if ( FreeSlotFromDescriptor )
          goto LABEL_6;
      }
      Flink = Flink->Flink;
    }
    FreeSlotFromDescriptor = 0LL;
    PerProcessorPageDescriptor = ndisAllocatePerProcessorPageDescriptor();
    if ( PerProcessorPageDescriptor )
    {
      FreeSlotFromDescriptor = ndisAllocateFreeSlotFromDescriptor(PerProcessorPageDescriptor, 2003977294LL);
      v20 = ndisPerProcessorDescriptorList.Flink;
      if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
        __fastfail(3u);
      v19->Flink = ndisPerProcessorDescriptorList.Flink;
      v19->Blink = &ndisPerProcessorDescriptorList;
      v20->Blink = v19;
      ndisPerProcessorDescriptorList.Flink = v19;
    }
LABEL_6:
    KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v8);
    v12 = ndisMaxNumberOfProcessors;
    if ( FreeSlotFromDescriptor )
    {
      v13 = 0;
      if ( ndisMaxNumberOfProcessors )
      {
        do
        {
          v14 = v13++;
          *(_QWORD *)((v14 << 12) + FreeSlotFromDescriptor) = 0LL;
        }
        while ( v13 < v12 );
      }
    }
    v5->RefCountSlot = (PNDIS_PER_PROCESSOR_SLOT__ *)FreeSlotFromDescriptor;
    if ( FreeSlotFromDescriptor )
    {
      if ( v12 )
      {
        RefCount = v5->RefCount;
        do
        {
          v16 = v4++;
          *RefCount++ = (unsigned int *)(v5->RefCountSlot + 1024 * v16);
        }
        while ( v4 < v12 );
      }
    }
    else
    {
      ExFreePoolWithTag(v5, 0);
      return 0LL;
    }
  }
  return v5;
}
