/*
 * XREFs of Usbh_SSH_HubSuspended @ 0x1C0009064
 * Callers:
 *     UsbhIncHubBusy @ 0x1C000BC70 (UsbhIncHubBusy.c)
 *     Usbh_SSH_Event @ 0x1C00165B0 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhUnlockSSH @ 0x1C00026DC (UsbhUnlockSSH.c)
 *     UsbhSshResumeDownstream @ 0x1C0002760 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x1C0006698 (UsbhSshResumeUpstream.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C00165B0 (Usbh_SSH_Event.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubSuspended(__int64 a1, int a2, __int64 a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v15; // ebx

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
    v12 = FdoExt(*(_QWORD *)(a3 + 8));
    v13 = 32LL * *(unsigned int *)(v12 + 3456);
    *(_DWORD *)(v12 + 3124) = 4;
    *(_DWORD *)(v13 + v12 + 3468) = 4;
    *(_DWORD *)(a3 + 120) = 1734964085;
    *(_QWORD *)(v12 + 3192) = 0LL;
    KeReleaseSemaphore((PRKSEMAPHORE)(v12 + 3128), 16, 1, 0);
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
  v15 = v10 - 1;
  if ( v15 )
  {
    if ( v15 != 2 )
    {
LABEL_8:
      UsbhUnlockSSH(a3, 4);
      return (unsigned int)-1073741823;
    }
    UsbhUnlockSSH(a3, 5);
    UsbhSshResumeDownstream(a1, a3, 1);
    return 0;
  }
  UsbhUnlockSSH(a3, 5);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_START, 0, 0);
  v11 = UsbhSshResumeUpstream(a1, a3);
  if ( v11 < 0 )
    Usbh_SSH_Event(*(_QWORD *)(a3 + 8), 9LL, a3);
  return (unsigned int)v11;
}
