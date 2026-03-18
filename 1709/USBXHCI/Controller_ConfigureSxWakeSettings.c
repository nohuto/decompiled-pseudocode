/*
 * XREFs of Controller_ConfigureSxWakeSettings @ 0x1C0055AD4
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0059AB0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_ConfigureSxWakeSettings(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, __int64 *); // rax
  __int64 result; // rax
  int v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+40h] [rbp-18h]

  v1 = *a1;
  v7 = 0LL;
  v6 = 0x500000014LL;
  v8 = 257;
  v3 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 376);
  LODWORD(v7) = 1;
  result = v3(WdfDriverGlobals, v1, &v6);
  if ( (int)result < 0 )
  {
    v5 = result;
    return WPP_RECORDER_SF_d(a1[9], 2u, 4u, 0x20u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v5);
  }
  return result;
}
