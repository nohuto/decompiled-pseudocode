/*
 * XREFs of Controller_IdleTimeoutUpdateWorker @ 0x1C0008240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Controller_UpdateIdleTimeout @ 0x1C0056760 (Controller_UpdateIdleTimeout.c)
 */

__int64 __fastcall Controller_IdleTimeoutUpdateWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // edx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C004B430);
  Controller_UpdateIdleTimeout(v2, 1LL);
  LOBYTE(v3) = 2;
  return WPP_RECORDER_SF_d(
           *(_QWORD *)(v2 + 72),
           v3,
           4,
           29,
           (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
           1);
}
