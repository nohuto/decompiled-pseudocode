/*
 * XREFs of ?SendDeviceCommand@ISMHeatFrameworkHost@@UEAAJKPEBUHeatDeviceCommandMessage@@@Z @ 0x1800485B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::SendDeviceCommand(
        ISMHeatFrameworkHost *this,
        __int64 a2,
        const struct HeatDeviceCommandMessage *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp-28h] BYREF
  const struct HeatDeviceCommandMessage *v9; // [rsp+38h] [rbp-20h]

  v3 = *((_QWORD *)this + 4);
  v4 = 0;
  if ( v3 )
  {
    v9 = a3;
    v8 = 2;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v3 + 72LL))(v3, a2, &v8);
    v4 = v5;
    if ( v5 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 128, v5);
  }
  return v4;
}
