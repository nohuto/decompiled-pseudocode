/*
 * XREFs of ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0124130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Opened(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)this;
  ++*((_QWORD *)this + 131);
  return (*(__int64 (__fastcall **)(CBaseInput *, char *))(v2 + 80))(this, (char *)a2 + 80);
}
