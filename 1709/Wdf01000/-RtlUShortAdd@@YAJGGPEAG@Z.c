/*
 * XREFs of ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C00743B0
 * Callers:
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0073E20 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C008FD38 (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUShortAdd(unsigned __int16 usAugend, unsigned __int16 usAddend, unsigned __int16 *pusResult)
{
  unsigned __int16 v3; // ax

  v3 = usAddend + usAugend;
  if ( (unsigned __int16)(usAddend + usAugend) < usAugend )
    *pusResult = -1;
  else
    *pusResult = v3;
  return v3 < usAugend ? 0xC0000095 : 0;
}
