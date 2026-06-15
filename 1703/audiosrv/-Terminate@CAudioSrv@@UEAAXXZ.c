/*
 * XREFs of ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180082200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18007BFE8 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ??_GCPowerReferenceManager@@QEAAPEAXI@Z @ 0x1800805FC (--_GCPowerReferenceManager@@QEAAPEAXI@Z.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x18008230C (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ?MME_ServiceStop@@YAXXZ @ 0x1800B026C (-MME_ServiceStop@@YAXXZ.c)
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x1800C1690 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x1800CD960 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::Terminate(CAudioSrv *this)
{
  PTP_TIMER *v2; // rcx
  CAudioDGProcess *v3; // rcx
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  void *v5; // rcx
  CKsNotificationsMonitor *v6; // rbx
  _QWORD *v7; // rax

  if ( g_ADGProcess )
    CAudioDGProcess::CancelADGTerminationTimer(g_ADGProcess);
  CAudioSrv::VAD_AudiosrvServiceStop(this);
  v2 = (PTP_TIMER *)g_powerReferenceManager;
  g_powerReferenceManager = 0LL;
  if ( v2 )
    CPowerReferenceManager::`scalar deleting destructor'(v2);
  MME_ServiceStop();
  if ( g_ADGProcess )
  {
    CAudioDGProcess::TerminateADG(v3);
    v4 = g_ADGProcess;
    if ( g_ADGProcess )
    {
      DeleteCriticalSection((LPCRITICAL_SECTION)((char *)g_ADGProcess + 48));
      DeleteCriticalSection(v4);
      operator delete(v4, (const struct std::nothrow_t *)0x90);
    }
    g_ADGProcess = 0LL;
  }
  while ( 1 )
  {
    v5 = g_lstKsNotificationMonitors;
    if ( !g_lstKsNotificationMonitors )
      break;
    v6 = (CKsNotificationsMonitor *)*((_QWORD *)g_lstKsNotificationMonitors + 2);
    v7 = *(_QWORD **)g_lstKsNotificationMonitors;
    g_lstKsNotificationMonitors = v7;
    if ( v7 )
      v7[1] = 0LL;
    else
      qword_18012C430 = 0LL;
    operator delete(v5);
    --dword_18012C438;
    CKsNotificationsMonitor::Dispose(v6);
    (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( g_bKsNotificationLockInitialized )
    DeleteCriticalSection(&g_csKsNotificationMonitors);
}
