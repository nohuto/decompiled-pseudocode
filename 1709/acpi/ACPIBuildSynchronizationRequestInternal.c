/*
 * XREFs of ACPIBuildSynchronizationRequestInternal @ 0x1C00291E4
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C00022B0 (ACPIBuildDeviceDpc.c)
 *     ACPIGetWorkerForInteger @ 0x1C00074D0 (ACPIGetWorkerForInteger.c)
 *     ACPIBuildSynchronizationRequest @ 0x1C00446E0 (ACPIBuildSynchronizationRequest.c)
 *     OSNotifyDeviceCheck @ 0x1C0051F9C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C0052108 (OSNotifyDeviceEject.c)
 *     OSNotifyDeviceEnum @ 0x1C005218C (OSNotifyDeviceEnum.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C000FC60 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C00111E4 (ExAllocateFromNPagedLookasideList.c)
 *     ACPIBuildScheduleDpc @ 0x1C0011220 (ACPIBuildScheduleDpc.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIBuildSynchronizationRequestInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v8; // rbx
  KIRQL v9; // si
  KIRQL v10; // al
  __int64 v11; // rdx
  KIRQL v12; // di

  v8 = ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&BuildRequestLookAsideList);
  if ( !v8 )
    return 3221225626LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( *(_DWORD *)(a1 + 684) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 684));
    memset(v8, 0, 0x88uLL);
    *((_DWORD *)v8 + 8) = 0;
    *((_DWORD *)v8 + 12) = 0;
    v8[16] = &AcpiBuildSynchronizationList;
    *((_DWORD *)v8 + 4) = 1599293264;
    v8[10] = &AcpiBuildDeviceList;
    *((_DWORD *)v8 + 6) = 3;
    v8[8] = a2;
    v8[9] = a3;
    v8[5] = a1;
    *((_DWORD *)v8 + 5) = 4106;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
    v10 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v11 = AcpiBuildQueueList;
    v12 = v10;
    if ( *(__int64 **)(AcpiBuildQueueList + 8) != &AcpiBuildQueueList )
      __fastfail(3u);
    *v8 = AcpiBuildQueueList;
    v8[1] = &AcpiBuildQueueList;
    *(_QWORD *)(v11 + 8) = v8;
    AcpiBuildQueueList = (__int64)v8;
    if ( a5 )
      ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v12);
    return 259LL;
  }
  else
  {
    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&BuildRequestLookAsideList, v8);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
    return 3221226166LL;
  }
}
