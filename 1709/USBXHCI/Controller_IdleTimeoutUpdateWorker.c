/*
 * XREFs of Controller_IdleTimeoutUpdateWorker @ 0x1C0010FE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_UpdateIdleTimeout @ 0x1C00597D0 (Controller_UpdateIdleTimeout.c)
 */

__int64 __fastcall Controller_IdleTimeoutUpdateWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v4; // [rsp+28h] [rbp-10h]

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C004E430);
  Controller_UpdateIdleTimeout(v2, 1LL);
  v4 = 1;
  return WPP_RECORDER_SF_d(
           *(_QWORD *)(v2 + 72),
           2u,
           4u,
           0x1Du,
           (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
           v4);
}
