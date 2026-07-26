/*
 * XREFs of ndisFreePerProcessorSlot @ 0x1C0021C18
 * Callers:
 *     NdisFreeRWLock @ 0x1C0021BE0 (NdisFreeRWLock.c)
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C006714C (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00B1FFC (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisFreeOpenBlock @ 0x1C00B2688 (ndisFreeOpenBlock.c)
 *     ndisAllocateOpenBlock @ 0x1C00BFFC4 (ndisAllocateOpenBlock.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 */

void __fastcall ndisFreePerProcessorSlot(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rdi
  __int64 v4; // rbx
  unsigned int v5; // edx
  unsigned int i; // ecx
  unsigned int v7; // eax
  KIRQL v8; // al

  v2 = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL;
  v4 = (__int64)(BugCheckParameter2 - (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL)) >> 3;
  if ( *(_DWORD *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 4LL * (unsigned int)v4 - 4076) != (_DWORD)BugCheckParameter4 )
    ndisBugCheckEx(
      0x2CuLL,
      BugCheckParameter2,
      *(unsigned int *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 4LL * (unsigned int)v4 - 4076),
      (unsigned int)BugCheckParameter4);
  v5 = ndisMaxNumberOfProcessors;
  for ( i = 0; i < v5; *(_QWORD *)((v7 << 12) + BugCheckParameter2) = 0LL )
    v7 = i++;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
  *(_DWORD *)(v2 + 4LL * (unsigned int)v4 - 4076) = *(_DWORD *)(v2 - 4080);
  *(_DWORD *)(v2 - 4080) = v4 | 0xFE000000;
  KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v8);
}
