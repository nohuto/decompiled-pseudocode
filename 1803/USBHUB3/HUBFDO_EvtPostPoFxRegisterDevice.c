/*
 * XREFs of HUBFDO_EvtPostPoFxRegisterDevice @ 0x1C000C360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtPostPoFxRegisterDevice(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  PWDF_DRIVER_GLOBALS v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B0C0);
  v4 = WdfDriverGlobals;
  *(_QWORD *)(v3 + 2600) = a2;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *))(WdfFunctions_01015 + 944))(v4, v4->Driver);
  LOBYTE(v6) = 1;
  PoFxRegisterDripsWatchdogCallback(a2, HUBPDO_PoFxDripsWatchdogCallback, v6, v5);
  return 0LL;
}
