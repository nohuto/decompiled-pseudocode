/*
 * XREFs of imp_WdfUsbTargetDeviceQueryUsbCapability @ 0x1C008C770
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?QueryUsbCapability@FxUsbDevice@@QEAAJPEBU_GUID@@KPEAXPEAK@Z @ 0x1C00947EC (-QueryUsbCapability@FxUsbDevice@@QEAAJPEBU_GUID@@KPEAXPEAK@Z.c)
 */

int __fastcall imp_WdfUsbTargetDeviceQueryUsbCapability(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        const _GUID *CapabilityType,
        unsigned int CapabilityBufferLength,
        void *CapabilityBuffer,
        unsigned int *ResultLength)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+40h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  if ( CapabilityBufferLength && !CapabilityBuffer )
    FxVerifierNullBugCheck(pUsbDevice->m_Globals, retaddr);
  return FxUsbDevice::QueryUsbCapability(
           pUsbDevice,
           CapabilityType,
           CapabilityBufferLength,
           CapabilityBuffer,
           ResultLength);
}
