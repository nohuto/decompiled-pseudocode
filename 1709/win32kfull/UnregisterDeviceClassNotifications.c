/*
 * XREFs of UnregisterDeviceClassNotifications @ 0x1C0143F90
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00D63E0 (xxxRemoteDisconnect.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00D7298 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteReconnect @ 0x1C0140AE0 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 UnregisterDeviceClassNotifications()
{
  PDRIVER_CONTROL DeviceRoutine; // rbx
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v6; // rax

  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
  {
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    IoUnregisterPlugPlayNotification(DeviceRoutine);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  }
  while ( 1 )
  {
    Flink = gCDROMNotifyList.Flink;
    v6 = gCDROMNotifyList.Flink->Flink;
    if ( gCDROMNotifyList.Flink->Blink != &gCDROMNotifyList || v6->Blink != gCDROMNotifyList.Flink )
      __fastfail(3u);
    v1 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
    gCDROMNotifyList.Flink = gCDROMNotifyList.Flink->Flink;
    v6->Blink = &gCDROMNotifyList;
    result = ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v1);
    if ( Flink == &gCDROMNotifyList )
      break;
    IoUnregisterPlugPlayNotification(Flink[1].Blink);
    Win32FreePool(Flink, v3, v4);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  }
  return result;
}
