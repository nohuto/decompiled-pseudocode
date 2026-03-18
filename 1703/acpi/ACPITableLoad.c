/*
 * XREFs of ACPITableLoad @ 0x1C001D690
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C00AC378 (ACPIInitializeDDBs.c)
 * Callees:
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0008800 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildScheduleDpc @ 0x1C000DFA8 (ACPIBuildScheduleDpc.c)
 *     ACPIBuildRunMethodRequest @ 0x1C001DEF8 (ACPIBuildRunMethodRequest.c)
 *     ACPIQueryDeviceLockMutexSupport @ 0x1C001E760 (ACPIQueryDeviceLockMutexSupport.c)
 *     ACPIGpeClearEventMasks @ 0x1C001EA54 (ACPIGpeClearEventMasks.c)
 *     ACPIGpeBuildEventMasks @ 0x1C001F900 (ACPIGpeBuildEventMasks.c)
 *     EnableDisableCMOSRegions @ 0x1C0024B70 (EnableDisableCMOSRegions.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C002AB00 (ACPIEcInitOpRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C008A29C (ACPIRootInitialize.c)
 */

__int64 __fastcall ACPITableLoad(__int64 a1, int a2, __int64 a3)
{
  KIRQL v4; // al
  int v5; // ebx
  KIRQL v7; // al
  bool v8; // zf
  int v9; // esi
  KIRQL v10; // bp
  int v11; // esi
  __int64 v12; // rdx
  KIRQL v13; // bl
  __int64 i; // rcx
  int v15; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 == 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v5 = ++AcpiTableLoadDelta;
    KeReleaseSpinLock(&AcpiBuildQueueLock, v4);
    if ( v5 == 1 && !*((_BYTE *)AcpiInformation + 133) )
      ACPIGpeClearEventMasks();
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v8 = AcpiTableLoadDelta-- == 1;
    v9 = AcpiTableLoadDelta;
    if ( v8 )
    {
      for ( i = AcpiBuildQueueList; (__int64 *)i != &AcpiBuildQueueList; i = *(_QWORD *)i )
        *(_DWORD *)(i + 20) &= ~0x40u;
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v7);
    if ( !v9 )
    {
      if ( !*((_BYTE *)AcpiInformation + 133) )
        ACPIGpeBuildEventMasks();
      if ( (gOverrideFlags & 2) == 0 )
        ACPIEcInitOpRegionHandler();
      if ( !*(_QWORD *)(RootDeviceExtension + 712) )
        ACPIRootInitialize();
      v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v11 = ACPIBuildRunMethodRequest(RootDeviceExtension, 0, 0, 1229867359, 7, 0);
      ACPIQueryDeviceLockMutexSupport(&v15);
      if ( v15 )
        v11 = ACPIBuildRunMethodRequest(RootDeviceExtension, 0, 0, 1296843871, 388, 0);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
      if ( v11 < 0
        || (LOBYTE(v12) = 1,
            EnableDisableCMOSRegions(*(_QWORD *)(RootDeviceExtension + 712), v12),
            (int)ACPIBuildSpecialSynchronizationRequest(
                   RootDeviceExtension,
                   (__int64)ACPITableLoadCallBack,
                   a3 == 0,
                   127,
                   0) < 0) )
      {
        KeBugCheckEx(0xA3u, 1uLL, 0x110292uLL, 0LL, 0LL);
      }
      v13 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      ACPIBuildScheduleDpc();
      KeReleaseSpinLock(&AcpiBuildQueueLock, v13);
    }
  }
  return 0LL;
}
