/*
 * XREFs of Controller_EvtDeviceFileClose @ 0x1C0007AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0009B90 (Controller_StopTimeTrackingForHandle.c)
 */

__int64 __fastcall Controller_EvtDeviceFileClose(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C004B3E0);
  if ( *(_BYTE *)(result + 40) )
  {
    v3 = *(_QWORD *)(result + 32);
    result = Controller_StopTimeTrackingForHandle(v3, a1, 0LL);
    if ( (int)result < 0 )
      return WPP_RECORDER_SF_qd(
               *(_QWORD *)(v3 + 72),
               2u,
               4u,
               0x10Fu,
               (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
               a1,
               result);
  }
  return result;
}
