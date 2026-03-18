/*
 * XREFs of imp_WdfDeviceWdmGetAttachedDevice @ 0x1C003A970
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

_DEVICE_OBJECT *__fastcall imp_WdfDeviceWdmGetAttachedDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxDeviceBase *pDevice; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1030u,
    (void **)&pDevice);
  return pDevice->m_AttachedDevice.m_DeviceObject;
}
