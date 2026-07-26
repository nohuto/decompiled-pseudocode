/*
 * XREFs of NdisNblTrackerRegisterComponent @ 0x1C001C010
 * Callers:
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00BE8CC (ndisUpdateNoPauseOnSuspend.c)
 *     ndisAllocateOpenBlock @ 0x1C00BFFC4 (ndisAllocateOpenBlock.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00F5884 (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01036D4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisAllocatePerProcessorSlot @ 0x1C001C11C (ndisAllocatePerProcessorSlot.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C006714C (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 */

__int64 __fastcall NdisNblTrackerRegisterComponent(__int16 a1, __int64 a2, __int64 a3)
{
  PVOID PoolWithTag; // rax
  __int64 v8; // rdi
  __int64 *v9; // r14
  unsigned int v10; // esi
  __int64 PerProcessorSlot; // rax
  KIRQL v12; // al
  __int64 *v13; // rcx

  if ( ndisNblTrackerMode < NdisTrackNblRuntimeCheck )
    return a2 | 2;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x6B74444Eu);
  v8 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return a2 | 2;
  memset(PoolWithTag, 0, 0x48uLL);
  *(_QWORD *)(v8 + 32) = a3;
  v9 = (__int64 *)(v8 + 40);
  *(_WORD *)(v8 + 16) = a1;
  v10 = 0;
  *(_QWORD *)(v8 + 24) = a2;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)v8 = v8;
  do
  {
    PerProcessorSlot = ndisAllocatePerProcessorSlot(1802781774LL);
    if ( !PerProcessorSlot )
    {
      ndisNblTrackerDeleteTracker((PVOID)v8);
      return a2 | 2;
    }
    *v9 = PerProcessorSlot;
    ++v10;
    v9 += 2;
  }
  while ( v10 < 2 );
  v12 = KeAcquireSpinLockRaiseToDpc(&ndisNblTrackerListLock);
  v13 = (__int64 *)qword_1C0099828;
  if ( *(struct _NDIS_NBL_TRACKER ***)qword_1C0099828 != &ndisNblTrackerList )
    __fastfail(3u);
  *(_QWORD *)v8 = &ndisNblTrackerList;
  *(_QWORD *)(v8 + 8) = v13;
  *v13 = v8;
  qword_1C0099828 = v8;
  KeReleaseSpinLock(&ndisNblTrackerListLock, v12);
  return v8 | 1;
}
