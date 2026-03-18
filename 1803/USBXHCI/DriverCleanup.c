/*
 * XREFs of DriverCleanup @ 0x1C0057760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     McGenEventUnregister @ 0x1C000FEA0 (McGenEventUnregister.c)
 *     WppCleanupKm @ 0x1C0057B10 (WppCleanupKm.c)
 */

void __fastcall DriverCleanup(__int64 a1)
{
  __int64 v1; // rax
  PREGHANDLE v2; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 944))(WdfDriverGlobals, a1);
  WppCleanupKm(v1);
  McGenEventUnregister(v2);
  if ( *(_BYTE *)(WPP_MAIN_CB.DeviceQueue.Lock + 28) )
  {
    PcwUnregister(*(PPCW_REGISTRATION *)&WPP_MAIN_CB.DeviceQueue.Type);
    PcwUnregister((PPCW_REGISTRATION)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
    PcwUnregister((PPCW_REGISTRATION)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink);
  }
}
