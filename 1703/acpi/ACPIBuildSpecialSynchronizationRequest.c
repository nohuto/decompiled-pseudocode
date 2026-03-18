/*
 * XREFs of ACPIBuildSpecialSynchronizationRequest @ 0x1C0008800
 * Callers:
 *     ACPITableLoad @ 0x1C001D690 (ACPITableLoad.c)
 *     ACPITableLoadNotifyPnp @ 0x1C002AED0 (ACPITableLoadNotifyPnp.c)
 *     ACPIFlushQueuesUnload @ 0x1C0045050 (ACPIFlushQueuesUnload.c)
 *     ACPITableUnload @ 0x1C0057CD0 (ACPITableUnload.c)
 *     ACPIBuildFlushQueue @ 0x1C008DF74 (ACPIBuildFlushQueue.c)
 *     ACPIInitStartACPI @ 0x1C00AA248 (ACPIInitStartACPI.c)
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x1C000DFA8 (ACPIBuildScheduleDpc.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C00131D8 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0020A70 (ExFreeToNPagedLookasideList.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIBuildSpecialSynchronizationRequest(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _QWORD *v9; // rbx
  KIRQL v10; // si
  KIRQL v11; // al
  __int64 v12; // rdx
  KIRQL v13; // di

  v9 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
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
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v9);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
    return 3221226166LL;
  }
}
