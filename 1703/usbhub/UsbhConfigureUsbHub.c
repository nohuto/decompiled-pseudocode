/*
 * XREFs of UsbhConfigureUsbHub @ 0x1C001AE40
 * Callers:
 *     UsbhInitialize @ 0x1C0017340 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x1C003B514 (UsbhReinitialize.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C001A710 (UsbhSyncSendInternalIoctl.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C001B090 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C0026538 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetMaxPowerPerPort @ 0x1C00269E0 (UsbhGetMaxPowerPerPort.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C0026BEC (UsbhCreateConfigurationRequestEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhConfigureUsbHub(__int64 a1)
{
  __int64 HubConfigurationDescriptor; // rbp

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
  HubConfigurationDescriptor = (int)UsbhGetHubConfigurationDescriptor(a1);
  if ( (HubConfigurationDescriptor & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 8, 1667655729, HubConfigurationDescriptor, 0LL);
    return (unsigned int)HubConfigurationDescriptor;
  }
  else
  {
    Log(a1, 8, 1667655730, -1073741670LL, 0LL);
    return 3221225626LL;
  }
}
