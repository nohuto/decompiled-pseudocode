/*
 * XREFs of NdisNblTrackerRegisterComponent @ 0x1C00100B0
 * Callers:
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00BDD30 (ndisUpdateNoPauseOnSuspend.c)
 *     ndisAllocateOpenBlock @ 0x1C00BDF1C (ndisAllocateOpenBlock.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00F2CD0 (ndisSelectiveSuspendInitialize.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0002374 (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ndisAllocateFreeSlot @ 0x1C0010298 (ndisAllocateFreeSlot.c)
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C0022AC4 (ndisAllocatePerProcessorPageDescriptor.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ndisAllocateFreeSlotFromDescriptor @ 0x1C0065EAC (ndisAllocateFreeSlotFromDescriptor.c)
 */

__int64 __fastcall NdisNblTrackerRegisterComponent(__int16 a1, __int64 a2, __int64 a3)
{
  PVOID PoolWithTag; // rax
  __int64 v8; // rdi
  unsigned int v9; // ebp
  KIRQL v10; // r14
  __int64 FreeSlot; // rsi
  unsigned int v12; // edx
  unsigned int i; // ecx
  unsigned int v14; // eax
  __int64 v15; // rax
  KIRQL v16; // al
  __int64 *v17; // rcx
  __int64 PerProcessorPageDescriptor; // rcx
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *Flink; // rax

  if ( ndisNblTrackerMode < NdisTrackNblRuntimeCheck )
    return a2 | 2;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x6B74444Eu);
  v8 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return a2 | 2;
  memset(PoolWithTag, 0, 0x48uLL);
  *(_WORD *)(v8 + 16) = a1;
  *(_QWORD *)(v8 + 24) = a2;
  v9 = 0;
  *(_QWORD *)(v8 + 32) = a3;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)v8 = v8;
  do
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
    FreeSlot = ndisAllocateFreeSlot(1802781774LL);
    if ( !FreeSlot )
    {
      PerProcessorPageDescriptor = ndisAllocatePerProcessorPageDescriptor();
      if ( PerProcessorPageDescriptor )
      {
        FreeSlot = ndisAllocateFreeSlotFromDescriptor(PerProcessorPageDescriptor, 1802781774LL);
        Flink = ndisPerProcessorDescriptorList.Flink;
        if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
          __fastfail(3u);
        v19->Flink = ndisPerProcessorDescriptorList.Flink;
        v19->Blink = &ndisPerProcessorDescriptorList;
        Flink->Blink = v19;
        ndisPerProcessorDescriptorList.Flink = v19;
      }
    }
    KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v10);
    if ( !FreeSlot )
    {
      ndisNblTrackerDeleteTracker((char *)v8);
      return a2 | 2;
    }
    v12 = ndisMaxNumberOfProcessors;
    for ( i = 0; i < v12; *(_QWORD *)((v14 << 12) + FreeSlot) = 0LL )
      v14 = i++;
    v15 = v9++;
    *(_QWORD *)(v8 + 16 * v15 + 40) = FreeSlot;
  }
  while ( v9 < 2 );
  v16 = KeAcquireSpinLockRaiseToDpc(&ndisNblTrackerListLock);
  v17 = (__int64 *)qword_1C0098AD0;
  if ( *(struct _NDIS_NBL_TRACKER ***)qword_1C0098AD0 != &ndisNblTrackerList )
    __fastfail(3u);
  *(_QWORD *)v8 = &ndisNblTrackerList;
  *(_QWORD *)(v8 + 8) = v17;
  *v17 = v8;
  qword_1C0098AD0 = v8;
  KeReleaseSpinLock(&ndisNblTrackerListLock, v16);
  return v8 | 1;
}
