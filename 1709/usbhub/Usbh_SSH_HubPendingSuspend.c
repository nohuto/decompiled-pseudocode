/*
 * XREFs of Usbh_SSH_HubPendingSuspend @ 0x1C0027068
 * Callers:
 *     UsbhIncHubBusy @ 0x1C0013140 (UsbhIncHubBusy.c)
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhUnlockSSH @ 0x1C0026884 (UsbhUnlockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     UsbhLockSSH @ 0x1C0057B58 (UsbhLockSSH.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingSuspend(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD *v7; // r14
  int v8; // edi
  int v9; // edi
  _DWORD *v10; // rax
  int v12; // edi
  int v13; // edx
  int v14; // eax

  v6 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v7 = FdoExt(a1);
  v8 = a2 - 1;
  if ( !v8 )
  {
    v13 = 2;
    goto LABEL_15;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v12 = v9 - 1;
    if ( v12 )
    {
      if ( v12 != 3 )
      {
        UsbhUnlockSSH(a3, 2);
        return (unsigned int)-1073741823;
      }
      UsbhUnlockSSH(a3, 3);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, (const EVENT_DESCRIPTOR *)"<");
      KeWaitForSingleObject(v7 + 846, Executive, 0, 0, 0LL);
      v13 = UsbhLockSSH(a3, 6LL);
      v14 = 0;
      if ( v13 == 6 )
        v14 = -1073741823;
      v6 = v14;
    }
    else
    {
      v13 = 1;
    }
LABEL_15:
    UsbhUnlockSSH(a3, v13);
    return v6;
  }
  v10 = FdoExt(*(_QWORD *)(a3 + 8));
  v10[781] = 4;
  v10[8 * v10[864] + 867] = 4;
  *(_DWORD *)(a3 + 120) = 1734964085;
  *((_QWORD *)v10 + 399) = 0LL;
  KeReleaseSemaphore((PRKSEMAPHORE)(v10 + 782), 16, 1, 0);
  return v6;
}
