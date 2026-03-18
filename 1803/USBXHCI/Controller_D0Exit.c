/*
 * XREFs of Controller_D0Exit @ 0x1C00074F4
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000C380 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Register_ControllerStop @ 0x1C0018D10 (Register_ControllerStop.c)
 */

__int64 __fastcall Controller_D0Exit(__int64 *a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v6; // edx
  int v7; // [rsp+30h] [rbp-18h]

  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2560))(
    WdfDriverGlobals,
    a1[37],
    a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = a2;
    WPP_RECORDER_SF_qd(a1[9], 5u, 4u, 0x76u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, a1, v7);
  }
  result = Register_ControllerStop(a1[11]);
  if ( (int)result < 0 )
  {
    LOBYTE(v6) = 2;
    return WPP_RECORDER_SF_d(a1[9], v6, 4, 119, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, result);
  }
  return result;
}
