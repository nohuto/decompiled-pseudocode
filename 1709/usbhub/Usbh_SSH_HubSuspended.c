/*
 * XREFs of Usbh_SSH_HubSuspended @ 0x1C00267A8
 * Callers:
 *     UsbhIncHubBusy @ 0x1C0013140 (UsbhIncHubBusy.c)
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhSshResumeDownstream @ 0x1C000266C (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x1C00059F4 (UsbhSshResumeUpstream.c)
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhUnlockSSH @ 0x1C0026884 (UsbhUnlockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubSuspended(struct _DEVICE_OBJECT *a1, int a2, __int64 a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v13; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v6 = a2 - 1;
  if ( !v6 )
  {
    UsbhUnlockSSH(a3, 4LL);
    return 0;
  }
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_8;
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_8;
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_8;
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_8;
  v13 = v10 - 1;
  if ( v13 )
  {
    if ( v13 != 2 )
    {
LABEL_8:
      UsbhUnlockSSH(a3, 4LL);
      return (unsigned int)-1073741823;
    }
    UsbhUnlockSSH(a3, 5LL);
    UsbhSshResumeDownstream(a1, a3, 1);
    return 0;
  }
  UsbhUnlockSSH(a3, 5LL);
  UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, (const EVENT_DESCRIPTOR *)"<");
  v11 = UsbhSshResumeUpstream(a1, a3);
  if ( v11 < 0 )
    Usbh_SSH_Event(*(PDEVICE_OBJECT *)(a3 + 8), 9u, a3);
  return (unsigned int)v11;
}
