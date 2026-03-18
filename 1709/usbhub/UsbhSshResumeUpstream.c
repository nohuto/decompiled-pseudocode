/*
 * XREFs of UsbhSshResumeUpstream @ 0x1C00059F4
 * Callers:
 *     Usbh_SSH_HubSuspended @ 0x1C00267A8 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0057DE8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0005B44 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0013140 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhSshResumeUpstream(struct _DEVICE_OBJECT *a1, int a2)
{
  __int64 v4; // r15
  int v5; // ebp
  __int64 v6; // r14
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rdx
  int v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+90h] [rbp+18h] BYREF

  v12 = 0;
  v4 = FdoExt(a1);
  Log((_DWORD)a1, 0x10000, 1383290224, a2, 0LL);
  v5 = UsbhFdoCheckUpstreamConnectionState(a1, &v12);
  v6 = UsbhIncHubBusy((_DWORD)a1, a2, (_DWORD)a1, 1347777128, 0);
  if ( v5 >= 0 )
  {
    v7 = FdoExt(a1);
    if ( *(_QWORD *)(v7 + 4728) )
      v5 = (*(__int64 (__fastcall **)(_QWORD))(v7 + 4728))(*(_QWORD *)(v7 + 1192));
    else
      v5 = -1073741637;
  }
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_UPSTREAM, 0, v5);
  KeWaitForSingleObject((PVOID)(v4 + 3128), Executive, 0, 0, 0LL);
  v8 = *(_DWORD *)(v4 + 3124);
  KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 3128), 16, 1, 0);
  if ( v8 == 5 )
  {
    Usbh_SSH_Event(a1);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, 0, v5);
    KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
    LOBYTE(v11) = 0;
    UsbhException((int)a1, 0, 137, 0, 0, v5, 0, usbfile_sshub_c, 2306, v11);
  }
  if ( v6 )
    UsbhDecHubBusy(a1, v9, v6);
  Log((_DWORD)a1, 0x10000, 1383290232, 0, v5);
  return (unsigned int)v5;
}
