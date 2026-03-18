/*
 * XREFs of UnregisterDeviceClassNotifications @ 0x1C013DC04
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00FD8FC (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteDisconnect @ 0x1C00FE0C0 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0139E30 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 UnregisterDeviceClassNotifications()
{
  void *v0; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v4; // rax

  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(WPP_MAIN_CB.Queue.ListEntry.Blink);
  v0 = *(void **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(WPP_MAIN_CB.Queue.ListEntry.Blink);
    IoUnregisterPlugPlayNotification(v0);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(WPP_MAIN_CB.Queue.ListEntry.Blink);
  }
  while ( 1 )
  {
    Flink = gCDROMNotifyList.Flink;
    v4 = gCDROMNotifyList.Flink->Flink;
    if ( gCDROMNotifyList.Flink->Blink != &gCDROMNotifyList || v4->Blink != gCDROMNotifyList.Flink )
      __fastfail(3u);
    Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
    gCDROMNotifyList.Flink = gCDROMNotifyList.Flink->Flink;
    v4->Blink = &gCDROMNotifyList;
    result = ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(Blink);
    if ( Flink == &gCDROMNotifyList )
      break;
    IoUnregisterPlugPlayNotification(Flink[1].Blink);
    Win32FreePool(Flink);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(WPP_MAIN_CB.Queue.ListEntry.Blink);
  }
  return result;
}
