/*
 * XREFs of ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180063EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18005B7C8 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180060F74 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800644F4 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ?MME_ServiceStop@@YAXXZ @ 0x1800A15D0 (-MME_ServiceStop@@YAXXZ.c)
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x1800BE300 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x1800D9A04 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::Terminate(CAudioSrv *this)
{
  CPowerReferenceManager *v2; // rbx
  CAudioDGProcess *v3; // rcx
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  void *v5; // rcx
  CKsNotificationsMonitor *v6; // rbx
  _QWORD *v7; // rax

  if ( g_ADGProcess )
    CAudioDGProcess::CancelADGTerminationTimer(g_ADGProcess);
  CAudioSrv::VAD_AudiosrvServiceStop(this);
  v2 = g_powerReferenceManager;
  g_powerReferenceManager = 0LL;
  if ( v2 )
  {
    CPowerReferenceManager::~CPowerReferenceManager(v2);
    operator delete(v2, (const struct std::nothrow_t *)0x198);
  }
  MME_ServiceStop();
  if ( g_ADGProcess )
  {
    CAudioDGProcess::TerminateADG(v3);
    v4 = g_ADGProcess;
    if ( g_ADGProcess )
    {
      DeleteCriticalSection((LPCRITICAL_SECTION)((char *)g_ADGProcess + 48));
      DeleteCriticalSection(v4);
      operator delete(v4, (const struct std::nothrow_t *)0x98);
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
      qword_18014C448 = 0LL;
    operator delete(v5);
    --dword_18014C450;
    CKsNotificationsMonitor::Dispose(v6);
    (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( g_bKsNotificationLockInitialized )
    DeleteCriticalSection(&g_csKsNotificationMonitors);
}
