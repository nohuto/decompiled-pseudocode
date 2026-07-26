/*
 * XREFs of ndisFreePerProcessorSlot @ 0x1C00254E0
 * Callers:
 *     NdisFreeRWLock @ 0x1C00254B0 (NdisFreeRWLock.c)
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0065EA8 (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ndisAllocateOpenBlock @ 0x1C00B65F8 (ndisAllocateOpenBlock.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00BEB48 (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisFreeOpenBlock @ 0x1C00BF1E8 (ndisFreeOpenBlock.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreePerProcessorSlot(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  KIRQL v4; // al

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = (__int64)(a1 - (a1 & 0xFFFFFFFFFFFFF000uLL)) >> 3;
  if ( *(_DWORD *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 4LL * (unsigned int)v3 - 4076) == a2 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
    *(_DWORD *)(v2 + 4LL * (unsigned int)v3 - 4076) = *(_DWORD *)(v2 - 4080);
    *(_DWORD *)(v2 - 4080) = v3 | 0xFE000000;
    KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v4);
  }
}
