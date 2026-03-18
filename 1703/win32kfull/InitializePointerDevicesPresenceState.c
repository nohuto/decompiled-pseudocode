/*
 * XREFs of InitializePointerDevicesPresenceState @ 0x1C00FE8D0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00FD8FC (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C00FEB60 (AddRemovePointerDeviceSystemMetricKey.c)
 *     AddRemovePointerDevicePresence @ 0x1C00FEC88 (AddRemovePointerDevicePresence.c)
 */

void __fastcall InitializePointerDevicesPresenceState(int a1)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v2; // rsi
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  if ( a1 )
  {
    qword_1C032EDE0 = (__int64)&gPointerDeviceClients;
    qword_1C032EDB0 = (__int64)&gActivePointerDeviceList;
    gActivePointerDeviceList = &gActivePointerDeviceList;
    gPointerDeviceClients.Flink = &gPointerDeviceClients;
    qword_1C032EDD0 = (__int64)&gPointerDeviceInfoList;
    gPointerDeviceInfoList.Flink = &gPointerDeviceInfoList;
    AddRemovePointerDeviceSystemMetricKey(0LL, 1LL);
    AddRemovePointerDeviceSystemMetricKey(0LL, 0LL);
    AddRemovePointerDevicePresence(0LL);
  }
  else
  {
    Flink = gPointerDeviceClients.Flink;
    while ( Flink != &gPointerDeviceClients )
    {
      v2 = Flink - 1;
      HMAssignmentUnlock(&Flink[-1]);
      Flink = Flink->Flink;
      v3 = v2[1].Flink;
      Blink = v2[1].Blink;
      if ( v3->Blink != &v2[1] || Blink->Flink != &v2[1] )
        __fastfail(3u);
      Blink->Flink = v3;
      v3->Blink = Blink;
      Win32FreePool(v2);
    }
    if ( ghPntrProcRunningEvent )
      NtClose(ghPntrProcRunningEvent);
    if ( ghPntrProcRequestEvent )
      NtClose(ghPntrProcRequestEvent);
  }
}
