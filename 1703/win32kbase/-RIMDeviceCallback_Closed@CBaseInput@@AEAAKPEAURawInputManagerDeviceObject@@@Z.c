/*
 * XREFs of ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004EF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Closed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)this;
  --*((_QWORD *)this + 75);
  return (*(__int64 (__fastcall **)(CBaseInput *, char *))(v2 + 72))(this, (char *)a2 + 64);
}
