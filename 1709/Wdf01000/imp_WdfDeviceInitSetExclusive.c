/*
 * XREFs of imp_WdfDeviceInitSetExclusive @ 0x1C003AC80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetExclusive(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        unsigned __int8 Exclusive)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  DeviceInit->Exclusive = Exclusive;
}
