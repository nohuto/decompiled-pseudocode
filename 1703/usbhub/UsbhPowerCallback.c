/*
 * XREFs of UsbhPowerCallback @ 0x1C001EC70
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSshEnableDisable @ 0x1C001B24C (UsbhSshEnableDisable.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhPowerCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, _QWORD *Context)
{
  unsigned int v8; // ebx
  __int64 v9; // rsi
  int v10; // edx

  v8 = -1073741811;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      23,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v9 = Context[150];
  if ( RtlCompareMemory(SettingGuid, &GUID_USB_SETTING_SELECTIVE_SUSPEND, 0x10uLL) == 16 && ValueLength == 4 && Value )
  {
    if ( *Value )
      *((_DWORD *)Context + 1309) = 1;
    else
      *((_DWORD *)Context + 1309) = 2;
    v8 = 0;
    v10 = 3;
    if ( *((_DWORD *)Context + 1309) == 1 )
      v10 = 2;
    UsbhSshEnableDisable(v9, v10);
  }
  return v8;
}
