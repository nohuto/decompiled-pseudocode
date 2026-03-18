/*
 * XREFs of ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C001A1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Opened(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)this;
  ++*((_QWORD *)this + 115);
  return (*(__int64 (__fastcall **)(CBaseInput *, char *))(v2 + 64))(this, (char *)a2 + 64);
}
