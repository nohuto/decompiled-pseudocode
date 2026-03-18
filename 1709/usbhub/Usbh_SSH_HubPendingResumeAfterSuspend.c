/*
 * XREFs of Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0057DE8
 * Callers:
 *     UsbhFdoReturnPortStatus @ 0x1C0010FC0 (UsbhFdoReturnPortStatus.c)
 *     UsbhIncHubBusy @ 0x1C0013140 (UsbhIncHubBusy.c)
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhSshResumeDownstream @ 0x1C000266C (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x1C00059F4 (UsbhSshResumeUpstream.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhUnlockSSH @ 0x1C0026884 (UsbhUnlockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     UsbhLockSSH @ 0x1C0057B58 (UsbhLockSSH.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingResumeAfterSuspend(struct _DEVICE_OBJECT *a1, int a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD *v7; // r14
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edx
  int v12; // eax

  v6 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xDu,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v7 = FdoExt((__int64)a1);
  v8 = a2 - 1;
  if ( !v8 )
  {
    v11 = 3;
    goto LABEL_15;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    UsbhUnlockSSH(a3, 5);
    UsbhSshResumeUpstream(a1, a3);
    return v6;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 != 3 )
    {
      UsbhUnlockSSH(a3, 3);
      return (unsigned int)-1073741823;
    }
    UsbhUnlockSSH(a3, 3);
    KeWaitForSingleObject(v7 + 846, Executive, 0, 0, 0LL);
    v11 = UsbhLockSSH(a3, 6);
    v12 = 0;
    if ( v11 == 6 )
      v12 = -1073741823;
    v6 = v12;
LABEL_15:
    UsbhUnlockSSH(a3, v11);
    return v6;
  }
  UsbhUnlockSSH(a3, 1);
  if ( !*((_BYTE *)v7 + 3416) )
    UsbhSshResumeDownstream(a1, a3, 0);
  return v6;
}
