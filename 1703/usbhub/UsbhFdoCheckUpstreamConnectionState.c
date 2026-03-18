/*
 * XREFs of UsbhFdoCheckUpstreamConnectionState @ 0x1C0025AA4
 * Callers:
 *     UsbhSshResumePort @ 0x1C0002B00 (UsbhSshResumePort.c)
 *     UsbhCheckHubPowerStatus @ 0x1C0005E5C (UsbhCheckHubPowerStatus.c)
 *     UsbhSshResumeUpstream @ 0x1C0006698 (UsbhSshResumeUpstream.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0006AC0 (UsbhSyncSendCommandToDevice.c)
 *     UsbhReset2Complete @ 0x1C0015860 (UsbhReset2Complete.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C78 (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C00468C4 (UsbhHardReset_Action.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C004B330 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BE90 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhFdoCheckUpstreamConnectionState(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rdi
  PIRP v5; // rax
  IRP *v6; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // r10d
  unsigned int v9; // r10d
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v5 = IoBuildDeviceIoControlRequest(
         0x220013u,
         *(PDEVICE_OBJECT *)(v4 + 1208),
         0LL,
         0,
         0LL,
         0,
         1u,
         &Event,
         &IoStatusBlock);
  v6 = v5;
  if ( v5 )
  {
    CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)a2;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 1208), v6);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  Log(a1, 8, 1970303827, *a2, Status);
  return v9;
}
