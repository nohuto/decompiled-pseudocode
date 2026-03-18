/*
 * XREFs of Usbh_SSH_HubFailedResume @ 0x1C0057E4C
 * Callers:
 *     Usbh_SSH_Event @ 0x1C00165B0 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhUnlockSSH @ 0x1C00026DC (UsbhUnlockSSH.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubFailedResume(__int64 a1, __int64 a2, __int64 a3)
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  FdoExt(a1);
  UsbhUnlockSSH(a3, 6);
  return 3221225473LL;
}
