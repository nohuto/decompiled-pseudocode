/*
 * XREFs of Controller_EvtDeviceFileClose @ 0x1C0007060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0005F70 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0012488 (Controller_StopTimeTrackingForHandle.c)
 */

__int64 __fastcall Controller_EvtDeviceFileClose(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C004E3E0);
  if ( *(_BYTE *)(result + 40) )
  {
    v3 = *(_QWORD *)(result + 32);
    result = Controller_StopTimeTrackingForHandle(v3, a1, 0LL);
    if ( (int)result < 0 )
      return WPP_RECORDER_SF_qd(
               *(_QWORD *)(v3 + 72),
               2u,
               4u,
               0x10Du,
               (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
               a1,
               result);
  }
  return result;
}
