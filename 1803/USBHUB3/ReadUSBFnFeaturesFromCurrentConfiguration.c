/*
 * XREFs of ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0038118
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C003827C (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C002C928 (WPP_RECORDER_SF_S.c)
 *     CheckUSBFnConfiguration @ 0x1C0037EF8 (CheckUSBFnConfiguration.c)
 *     MyRegOpenKeyForRead @ 0x1C00384C4 (MyRegOpenKeyForRead.c)
 *     MyRegQueryString @ 0x1C0038520 (MyRegQueryString.c)
 */

__int64 __fastcall ReadUSBFnFeaturesFromCurrentConfiguration(_DWORD *a1, char a2)
{
  bool v3; // zf
  const wchar_t *v4; // rdx
  int v5; // ebx
  int String; // eax
  wchar_t *v7; // rdi
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h]

  Handle = 0LL;
  P = 0LL;
  v3 = a2 == 0;
  v4 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN";
  if ( !v3 )
    v4 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Default";
  v5 = MyRegOpenKeyForRead(a1, v4, &Handle);
  if ( v5 >= 0 )
  {
    String = MyRegQueryString(Handle);
    v7 = (wchar_t *)P;
    v5 = String;
    if ( String >= 0 )
    {
      WPP_RECORDER_SF_S(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        1u,
        0x1Cu,
        (__int64)&WPP_9cce5eef9b87323d59081bfb01133c40_Traceguids,
        (const wchar_t *)P);
      ZwClose(Handle);
      Handle = 0LL;
      v5 = CheckUSBFnConfiguration(a1, v7);
    }
    else
    {
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        1u,
        0x1Bu,
        (__int64)&WPP_9cce5eef9b87323d59081bfb01133c40_Traceguids,
        String);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x19u,
      (__int64)&WPP_9cce5eef9b87323d59081bfb01133c40_Traceguids,
      v5);
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
