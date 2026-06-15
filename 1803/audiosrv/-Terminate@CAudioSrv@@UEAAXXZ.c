/*
 * XREFs of ?Terminate@CAudioSrv@@UEAAXXZ @ 0x18009E830
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180007B78 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x18009CA08 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x18009E964 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ?MME_ServiceStop@@YAXXZ @ 0x1800DC338 (-MME_ServiceStop@@YAXXZ.c)
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x1800F1600 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x180107B40 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 */

void __fastcall CAudioSrv::Terminate(CAudioSrv *this)
{
  CPowerReferenceManager *v2; // rbx
  CAudioDGProcess *v3; // rcx
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  void *v5; // rcx
  _QWORD *v6; // rax
  CKsNotificationsMonitor *v7; // rbx

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
    v6 = *(_QWORD **)g_lstKsNotificationMonitors;
    v7 = (CKsNotificationsMonitor *)*((_QWORD *)g_lstKsNotificationMonitors + 2);
    g_lstKsNotificationMonitors = v6;
    if ( v6 )
      v6[1] = 0LL;
    else
      qword_18018B090 = 0LL;
    operator delete(v5);
    --dword_18018B098;
    CKsNotificationsMonitor::Dispose(v7);
    (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( g_bKsNotificationLockInitialized )
    DeleteCriticalSection(&g_csKsNotificationMonitors);
  if ( (char *)g_hCanAcceptMMCClientEvent - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_hCanAcceptMMCClientEvent);
    g_hCanAcceptMMCClientEvent = 0LL;
  }
}
