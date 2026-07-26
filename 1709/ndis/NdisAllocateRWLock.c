/*
 * XREFs of NdisAllocateRWLock @ 0x1C00033B0
 * Callers:
 *     EthCreateFilter @ 0x1C00AE108 (EthCreateFilter.c)
 *     nullCreateFilter @ 0x1C00EAC8C (nullCreateFilter.c)
 *     ndisInitializePeriodicReceives @ 0x1C011C448 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C0022AC4 (ndisAllocatePerProcessorPageDescriptor.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ndisAllocateFreeSlotFromDescriptor @ 0x1C0065EAC (ndisAllocateFreeSlotFromDescriptor.c)
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
  unsigned int i; // ecx
  unsigned int v14; // eax
  unsigned int v15; // r8d
  unsigned int **RefCount; // rdx
  unsigned int v17; // ecx
  __int64 PerProcessorPageDescriptor; // rcx
  _LIST_ENTRY *v20; // rcx
  _LIST_ENTRY *v21; // rax

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
      v21 = ndisPerProcessorDescriptorList.Flink;
      if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
        __fastfail(3u);
      v20->Flink = ndisPerProcessorDescriptorList.Flink;
      v20->Blink = &ndisPerProcessorDescriptorList;
      v21->Blink = v20;
      ndisPerProcessorDescriptorList.Flink = v20;
    }
LABEL_6:
    KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v8);
    if ( FreeSlotFromDescriptor )
    {
      v12 = ndisMaxNumberOfProcessors;
      for ( i = 0; i < v12; *(_QWORD *)((v14 << 12) + FreeSlotFromDescriptor) = 0LL )
        v14 = i++;
    }
    v5->RefCountSlot = (PNDIS_PER_PROCESSOR_SLOT__ *)FreeSlotFromDescriptor;
    if ( FreeSlotFromDescriptor )
    {
      v15 = ndisMaxNumberOfProcessors;
      if ( ndisMaxNumberOfProcessors )
      {
        RefCount = v5->RefCount;
        do
        {
          v17 = v4++;
          *RefCount++ = (unsigned int *)(v5->RefCountSlot + 1024 * v17);
        }
        while ( v4 < v15 );
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
