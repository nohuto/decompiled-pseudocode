/*
 * XREFs of ?GetMonitorInternal@CImmersiveApp@@UEAAXPEAPEAUIImmersiveMonitor@@@Z @ 0x1800540B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::GetMonitorInternal(CImmersiveApp *this, struct IImmersiveMonitor **a2)
{
  __int64 v4; // rcx
  struct IImmersiveMonitor *v5; // rax
  __int64 v6; // rcx

  if ( *((_QWORD *)this + 78) )
  {
    v6 = *((_QWORD *)this + 78);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v5 = (struct IImmersiveMonitor *)*((_QWORD *)this + 78);
  }
  else
  {
    v4 = *((_QWORD *)this + 77);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v5 = (struct IImmersiveMonitor *)*((_QWORD *)this + 77);
  }
  *a2 = v5;
}
