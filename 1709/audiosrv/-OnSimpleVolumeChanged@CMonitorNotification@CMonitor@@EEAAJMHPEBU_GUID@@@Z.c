/*
 * XREFs of ?OnSimpleVolumeChanged@CMonitorNotification@CMonitor@@EEAAJMHPEBU_GUID@@@Z @ 0x1800A62A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMonitor::CMonitorNotification::OnSimpleVolumeChanged(
        CMonitor::CMonitorNotification *this,
        float a2,
        __int64 a3,
        const struct _GUID *a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( !*((_DWORD *)this + 4) )
  {
    v5 = *((_QWORD *)this + 1);
    if ( v5 )
      (*(void (__fastcall **)(__int64, __int64, __int64, const struct _GUID *))(*(_QWORD *)v5 + 72LL))(v5, v4, a3, a4);
  }
  return 0LL;
}
