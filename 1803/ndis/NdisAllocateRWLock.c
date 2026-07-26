/*
 * XREFs of NdisAllocateRWLock @ 0x1C00201D0
 * Callers:
 *     EthCreateFilter @ 0x1C00C4F10 (EthCreateFilter.c)
 *     nullCreateFilter @ 0x1C00ED830 (nullCreateFilter.c)
 *     ndisInitializePeriodicReceives @ 0x1C011EDC8 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C0014BD0 (ndisAllocatePerProcessorPageDescriptor.c)
 *     ndisAllocateFreeSlotFromDescriptor @ 0x1C001C1B8 (ndisAllocateFreeSlotFromDescriptor.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

PNDIS_RW_LOCK_EX __stdcall NdisAllocateRWLock(NDIS_HANDLE NdisHandle)
{
  KSPIN_LOCK *PoolWithTag; // rax
  KSPIN_LOCK *v3; // rdi
  KSPIN_LOCK *v4; // rbx
  KIRQL v5; // al
  _LIST_ENTRY *Flink; // rcx
  KIRQL v7; // r14
  int v8; // edx
  __int64 v9; // rdx
  __int64 FreeSlotFromDescriptor; // rsi
  char *PerProcessorPageDescriptor; // rcx
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *v14; // rax

  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x7772444Eu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    *(_DWORD *)v3 = 827086674;
    v4 = v3;
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
    Flink = ndisPerProcessorDescriptorList.Flink;
    v7 = v5;
    while ( Flink != &ndisPerProcessorDescriptorList )
    {
      v8 = (int)Flink[1].Flink;
      if ( v8 != -16777217 )
      {
        v9 = v8 & 0x1FFFFFF;
        FreeSlotFromDescriptor = (__int64)&Flink[256] + 8 * v9;
        LODWORD(Flink[1].Flink) = *((_DWORD *)&Flink[1].Flink + v9 + 1);
        *((_DWORD *)&Flink[1].Flink + v9 + 1) = 2003977294;
        if ( FreeSlotFromDescriptor )
          goto LABEL_6;
      }
      Flink = Flink->Flink;
    }
    FreeSlotFromDescriptor = 0LL;
    PerProcessorPageDescriptor = ndisAllocatePerProcessorPageDescriptor();
    if ( PerProcessorPageDescriptor )
    {
      FreeSlotFromDescriptor = ndisAllocateFreeSlotFromDescriptor((__int64)PerProcessorPageDescriptor, 2003977294);
      v14 = ndisPerProcessorDescriptorList.Flink;
      if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
        __fastfail(3u);
      v13->Flink = ndisPerProcessorDescriptorList.Flink;
      v13->Blink = &ndisPerProcessorDescriptorList;
      v14->Blink = v13;
      ndisPerProcessorDescriptorList.Flink = v13;
    }
LABEL_6:
    KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v7);
    v3[4] = FreeSlotFromDescriptor;
    if ( FreeSlotFromDescriptor )
    {
      v3[1] = (KSPIN_LOCK)NdisHandle;
      KeInitializeSpinLock(v3 + 2);
      v4 = 0LL;
      goto LABEL_8;
    }
  }
  else
  {
    v4 = 0LL;
  }
  v3 = 0LL;
LABEL_8:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (PNDIS_RW_LOCK_EX)v3;
}
