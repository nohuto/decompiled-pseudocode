/*
 * XREFs of CsTerminate @ 0x1C0009F94
 * Callers:
 *     CiDriverUnload @ 0x1C0009E70 (CiDriverUnload.c)
 *     DriverEntry @ 0x1C000C320 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00012D0 (_guard_dispatch_icall_nop.c)
 *     CiFreeMemory @ 0x1C0002854 (CiFreeMemory.c)
 *     CiNdisCleanupThrottle @ 0x1C0009008 (CiNdisCleanupThrottle.c)
 *     CiSystemTerminate @ 0x1C000B340 (CiSystemTerminate.c)
 *     CiSchedulerTerminate @ 0x1C000B36C (CiSchedulerTerminate.c)
 */

void CsTerminate()
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v1; // rax
  PDEVICE_OBJECT v2; // rbx

  if ( CiThreadCallbackRegistered )
  {
    PsRemoveCreateThreadNotifyRoutine((PCREATE_THREAD_NOTIFY_ROUTINE)CiThreadNotification);
    CiThreadCallbackRegistered = 0;
  }
  CiSchedulerTerminate();
  if ( CiKernelExtensionRegistration )
    ExUnregisterExtension();
  while ( 1 )
  {
    Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink == &WPP_MAIN_CB.DeviceLock.Header.WaitListHead )
      break;
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Blink != &WPP_MAIN_CB.DeviceLock.Header.WaitListHead
      || (v1 = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink,
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink->Blink != WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    {
      __fastfail(3u);
    }
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink;
    v1->Blink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
    CiFreeMemory(Flink[1].Flink);
    CiFreeMemory(&Flink[-1].Blink);
  }
  CiSystemTerminate();
  CiNdisCleanupThrottle();
  if ( CiLoggerContext )
  {
    EtwUnregister(CiLoggerContext);
    CiLoggerContext = 0LL;
  }
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( WPPTraceSuite == 4 )
    {
      if ( WPP_GLOBAL_Control )
      {
        do
        {
          if ( v2->Vpb )
            ((void (*)(void))pfnEtwUnregister)();
          v2 = v2->NextDevice;
        }
        while ( v2 );
        WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
        return;
      }
    }
    else if ( WPPTraceSuite == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
}
