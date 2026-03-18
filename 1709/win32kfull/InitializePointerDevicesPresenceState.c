/*
 * XREFs of InitializePointerDevicesPresenceState @ 0x1C00D6B00
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00D7298 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C00D6D90 (AddRemovePointerDeviceSystemMetricKey.c)
 *     AddRemovePointerDevicePresence @ 0x1C00D6EB4 (AddRemovePointerDevicePresence.c)
 */

void __fastcall InitializePointerDevicesPresenceState(int a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v2; // rsi
  __int64 v3; // r8
  struct _LIST_ENTRY *v4; // rdx
  struct _LIST_ENTRY *Blink; // rcx

  if ( a1 )
  {
    qword_1C032A948 = (__int64)&gPointerDeviceClients;
    qword_1C032A918 = (__int64)&gActivePointerDeviceList;
    gActivePointerDeviceList = &gActivePointerDeviceList;
    gPointerDeviceClients.Flink = &gPointerDeviceClients;
    qword_1C032A938 = (__int64)&gPointerDeviceInfoList;
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
      v4 = v2[1].Flink;
      if ( v4->Blink != &v2[1] || (Blink = v2[1].Blink, Blink->Flink != &v2[1]) )
        __fastfail(3u);
      Blink->Flink = v4;
      v4->Blink = Blink;
      Win32FreePool(v2, v4, v3);
    }
    if ( ghPntrProcRunningEvent )
      NtClose(ghPntrProcRunningEvent);
    if ( ghPntrProcRequestEvent )
      NtClose(ghPntrProcRequestEvent);
  }
}
