/*
 * XREFs of ACPIBuildSpecialSynchronizationRequest @ 0x1C00110B0
 * Callers:
 *     ACPITableLoad @ 0x1C00132C0 (ACPITableLoad.c)
 *     ACPITableLoadNotifyPnp @ 0x1C002B980 (ACPITableLoadNotifyPnp.c)
 *     ACPIFlushQueuesUnload @ 0x1C0044A18 (ACPIFlushQueuesUnload.c)
 *     ACPITableUnload @ 0x1C00588D0 (ACPITableUnload.c)
 *     ACPIBuildFlushQueue @ 0x1C008D454 (ACPIBuildFlushQueue.c)
 *     ACPIInitStartACPI @ 0x1C00AC2D8 (ACPIInitStartACPI.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C000FC60 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C00111E4 (ExAllocateFromNPagedLookasideList.c)
 *     ACPIBuildScheduleDpc @ 0x1C0011220 (ACPIBuildScheduleDpc.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIBuildSpecialSynchronizationRequest(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _QWORD *v9; // rbx
  KIRQL v10; // si
  KIRQL v11; // al
  __int64 v12; // rdx
  KIRQL v13; // di

  v9 = ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&BuildRequestLookAsideList);
  if ( !v9 )
    return 3221225626LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( *(_DWORD *)(a1 + 684) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 684));
    memset(v9, 0, 0x88uLL);
    *((_DWORD *)v9 + 8) = 0;
    *((_DWORD *)v9 + 12) = 0;
    v9[16] = &AcpiBuildSpecialSynchronizationList;
    *((_DWORD *)v9 + 4) = 1599293264;
    *((_DWORD *)v9 + 6) = 3;
    v9[8] = a2;
    v9[9] = a3;
    v9[5] = a1;
    *((_DWORD *)v9 + 20) = a4;
    *((_DWORD *)v9 + 5) = 4120;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v12 = AcpiBuildQueueList;
    v13 = v11;
    if ( *(__int64 **)(AcpiBuildQueueList + 8) != &AcpiBuildQueueList )
      __fastfail(3u);
    *v9 = AcpiBuildQueueList;
    v9[1] = &AcpiBuildQueueList;
    *(_QWORD *)(v12 + 8) = v9;
    AcpiBuildQueueList = (__int64)v9;
    if ( a5 )
      ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v13);
    return 259LL;
  }
  else
  {
    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&BuildRequestLookAsideList, v9);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
    return 3221226166LL;
  }
}
