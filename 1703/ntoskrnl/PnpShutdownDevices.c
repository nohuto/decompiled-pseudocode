/*
 * XREFs of PnpShutdownDevices @ 0x140691F78
 * Callers:
 *     IoShutdownSystem @ 0x140415678 (IoShutdownSystem.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PnpCreateDeviceEventEntry @ 0x1404DA388 (PnpCreateDeviceEventEntry.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x14056E564 (PnpInitializeTargetDeviceRemoveEvent.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 *     PipSetDevNodeUserFlags @ 0x1405CC2B8 (PipSetDevNodeUserFlags.c)
 */

__int64 PnpShutdownDevices()
{
  unsigned int v0; // esi
  _DWORD *DeviceEventEntry; // rdi
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  __int64 v6; // rax
  PVOID P; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v9[2]; // [rsp+80h] [rbp-C8h] BYREF
  char v10; // [rsp+90h] [rbp-B8h] BYREF

  KeSetEvent(&PnpShutdownEvent, 0, 0);
  v0 = 0;
  if ( !PnpTearDownPnpStacksOnShutdown && (PopShutdownCleanly & 0x20) == 0 )
    return v0;
  DeviceEventEntry = PnpCreateDeviceEventEntry(0x181uLL);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
  KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
  v3 = IopRootDeviceNode;
  v9[1] = (__int64)&v10;
  LODWORD(v9[0]) = 10485760;
  PipSetDevNodeUserFlags(IopRootDeviceNode, 16);
  while ( 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v3 = *(_QWORD *)(v3 + 8);
    while ( v3 )
    {
      v5 = *(_DWORD *)(v3 + 400);
      if ( (v5 & 0x20) != 0 )
      {
        if ( v3 == IopRootDeviceNode )
        {
          v3 = 0LL;
          break;
        }
LABEL_17:
        v6 = *(_QWORD *)v3;
        if ( *(_QWORD *)v3 )
          goto LABEL_19;
        v3 = *(_QWORD *)(v3 + 16);
        PipSetDevNodeUserFlags(v3, 32);
      }
      else
      {
        if ( (v5 & 0x10) == 0 )
          break;
        v6 = *(_QWORD *)(v3 + 8);
        if ( !v6 )
        {
          PipSetDevNodeUserFlags(v3, 32);
          goto LABEL_17;
        }
LABEL_19:
        v3 = v6;
      }
    }
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v3 )
    {
      PnpInitializeTargetDeviceRemoveEvent(
        (char *)DeviceEventEntry,
        0x181uLL,
        *(PVOID *)(v3 + 32),
        0,
        1,
        0,
        0,
        46,
        0,
        0LL,
        0LL,
        (__int64)&v8,
        (__int64)v9);
      P = DeviceEventEntry;
      v0 = PnpProcessQueryRemoveAndEject((__int64 *)&P);
      if ( P != DeviceEventEntry && _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag(P, 0x4B706E50u);
      continue;
    }
    break;
  }
  if ( _InterlockedExchangeAdd(DeviceEventEntry + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(DeviceEventEntry, 0x4B706E50u);
  return v0;
}
