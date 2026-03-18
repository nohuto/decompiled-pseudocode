/*
 * XREFs of imp_WdfDeviceInitSetPowerPolicyEventCallbacks @ 0x1C003A5B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1C003D680 (memmove.c)
 *     WPP_IFR_SF_dd @ 0x1C0065BD8 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetPowerPolicyEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_POWER_POLICY_EVENT_CALLBACKS *PowerPolicyEventCallbacks)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  unsigned int _a1; // ecx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v3 = DeviceInit->DriverGlobals;
  if ( !PowerPolicyEventCallbacks )
    FxVerifierNullBugCheck(v3, retaddr);
  _a1 = PowerPolicyEventCallbacks->Size;
  if ( ((PowerPolicyEventCallbacks->Size - 56) & 0xFFFFFFF7) != 0 )
  {
    WPP_IFR_SF_dd(v3, 2u, 0x12u, 0x13u, WPP_FxDeviceInitApi_cpp_Traceguids, _a1, 64);
  }
  else
  {
    if ( _a1 <= 0x38
      || !PowerPolicyEventCallbacks->EvtDeviceArmWakeFromSx
      || !PowerPolicyEventCallbacks->EvtDeviceArmWakeFromSxWithReason )
    {
      memmove(&DeviceInit->PnpPower.PolicyEventCallbacks, PowerPolicyEventCallbacks, PowerPolicyEventCallbacks->Size);
      return;
    }
    WPP_IFR_SF_(v3, 2u, 0x12u, 0x14u, WPP_FxDeviceInitApi_cpp_Traceguids);
  }
  FxVerifierDbgBreakPoint(v3);
}
