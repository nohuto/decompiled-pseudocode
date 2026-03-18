/*
 * XREFs of imp_WdfDeviceInitSetCharacteristics @ 0x1C003A530
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetCharacteristics(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        unsigned int DeviceCharacteristics,
        unsigned __int8 OrInValues)
{
  unsigned int v5; // eax
  FxString *DeviceName; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v5 = DeviceCharacteristics | 0x100;
  if ( OrInValues )
    DeviceInit->Characteristics |= v5;
  else
    DeviceInit->Characteristics = v5;
  if ( (DeviceCharacteristics & 0x80u) != 0 )
  {
    DeviceName = DeviceInit->DeviceName;
    if ( DeviceName )
    {
      DeviceName->Release(DeviceName, 0LL, 381, "minkernel\\wdf\\framework\\shared\\core\\fxdeviceinitapi.cpp");
      DeviceInit->DeviceName = 0LL;
    }
  }
}
