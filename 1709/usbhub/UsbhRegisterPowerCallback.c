/*
 * XREFs of UsbhRegisterPowerCallback @ 0x1C001F550
 * Callers:
 *     UsbhInitialize @ 0x1C0015CC0 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhRegisterPowerCallback(PDEVICE_OBJECT DeviceObject)
{
  PVOID *v2; // rbx
  NTSTATUS result; // eax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      21,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v2 = (PVOID *)FdoExt((__int64)DeviceObject);
  result = PoRegisterPowerSettingCallback(
             DeviceObject,
             &GUID_USB_SETTING_SELECTIVE_SUSPEND,
             (PPOWER_SETTING_CALLBACK)UsbhPowerCallback,
             v2,
             v2 + 656);
  if ( result >= 0 )
    *((_DWORD *)v2 + 1310) = 1;
  return result;
}
