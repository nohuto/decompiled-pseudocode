/*
 * XREFs of ?OnSessionDisconnected@CMonitorNotification@CMonitor@@EEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800B40E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMonitor::CMonitorNotification::OnSessionDisconnected(
        CMonitor::CMonitorNotification *this,
        __int64 a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL))(v2, a2);
  return 0LL;
}
