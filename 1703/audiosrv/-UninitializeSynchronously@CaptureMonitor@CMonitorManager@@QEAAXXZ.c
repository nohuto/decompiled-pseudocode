/*
 * XREFs of ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1800B508C
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x1800349B4 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x1800B4E20 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800B80E0 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::CaptureMonitor::UninitializeSynchronously(CMonitorManager::CaptureMonitor *this)
{
  __int64 v2; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(*((_QWORD *)this + 8) + 264LL) = 0LL;
  v2 = *((_QWORD *)this + 8);
  lpCriticalSection = (LPCRITICAL_SECTION)(v2 + 16);
  v4 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *(_DWORD *)(v2 + 56) != 6 )
  {
    *(_QWORD *)(v2 + 264) = 0LL;
    CMonitor::Terminate((CMonitor *)v2, 0, 0LL);
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
  (*(void (__fastcall **)(_QWORD, CMonitorManager::CaptureMonitor *))(**((_QWORD **)this + 5) + 32LL))(
    *((_QWORD *)this + 5),
    this);
  *((_BYTE *)this + 48) = 0;
}
