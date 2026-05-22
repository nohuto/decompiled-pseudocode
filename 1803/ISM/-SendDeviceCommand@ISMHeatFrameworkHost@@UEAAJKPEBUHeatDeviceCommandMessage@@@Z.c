/*
 * XREFs of ?SendDeviceCommand@ISMHeatFrameworkHost@@UEAAJKPEBUHeatDeviceCommandMessage@@@Z @ 0x180039BD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::SendDeviceCommand(
        ISMHeatFrameworkHost *this,
        __int64 a2,
        const struct HeatDeviceCommandMessage *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  const struct HeatDeviceCommandMessage *v6; // [rsp+28h] [rbp-20h]

  v3 = *((_QWORD *)this + 4);
  result = 0LL;
  if ( v3 )
  {
    v6 = a3;
    v5 = 2;
    return (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v3 + 72LL))(v3, a2, &v5);
  }
  return result;
}
