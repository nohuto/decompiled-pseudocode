/*
 * XREFs of ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0123F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Closed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 131);
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    v2 = *((_QWORD *)this + 131);
  }
  *((_QWORD *)this + 131) = v2 - 1;
  return (*(__int64 (__fastcall **)(CBaseInput *, char *))(*(_QWORD *)this + 88LL))(this, (char *)a2 + 80);
}
