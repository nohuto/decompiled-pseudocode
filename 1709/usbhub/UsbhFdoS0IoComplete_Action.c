/*
 * XREFs of UsbhFdoS0IoComplete_Action @ 0x1C0004700
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0003190 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004944 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00049D0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C0004A78 (UsbhSetFdoPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0004B00 (UsbhEtwLogHubPowerEvent.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D59C (WPP_RECORDER_SF_q.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C00468E4 (UsbhFdoPower_PowerFailureEntry.c)
 */

__int64 __fastcall UsbhFdoS0IoComplete_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 Status; // rsi
  int v9; // edx
  NTSTATUS v10; // eax
  int v11; // ecx
  NTSTATUS v12; // esi

  v6 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1932544323, (_DWORD)Irp, Irp->IoStatus.Status);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_5959a78b850834ce071a1dc82810c49d_Traceguids);
  v7 = Context[9];
  UsbhAcquireFdoPwrLock(DeviceObject, v7, 113LL, 825258857LL);
  Status = Irp->IoStatus.Status;
  *(_DWORD *)(FdoExt(DeviceObject) + 4212) = 1;
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    Log((_DWORD)DeviceObject, 16, 1346646049, 0, Status);
    v11 = (int)DeviceObject;
LABEL_14:
    UsbhFdoPower_PowerFailureEntry(v11);
    goto LABEL_11;
  }
  *((_DWORD *)Context + 7) = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      1,
      19,
      (__int64)&WPP_5959a78b850834ce071a1dc82810c49d_Traceguids,
      (char)DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1349665840, 0, Status);
  UsbhSetFdoPowerState(DeviceObject, 0LL, 209LL);
  UsbhReleaseFdoPwrLock(DeviceObject, v7);
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_START, 1, 0);
  v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 1224), Context, File, 1u, 0x20u);
  v11 = (int)DeviceObject;
  if ( v10 < 0 )
  {
    LODWORD(Status) = 0;
    goto LABEL_14;
  }
  v12 = PoRequestPowerIrp(
          DeviceObject,
          2u,
          (POWER_STATE)1,
          (PREQUEST_POWER_COMPLETE)UsbhFdoD0PoComplete_Action,
          Context,
          0LL);
  Log((_DWORD)DeviceObject, 16, 1345406000, 0, v12);
  UsbhAcquireFdoPwrLock(DeviceObject, v7, 113LL, 842036073LL);
  if ( v12 >= 0 && !dword_1C006A63C )
  {
    Log((_DWORD)DeviceObject, 16, 1131245651, (_DWORD)Irp, v12);
    UsbhReleaseFdoPwrLock(DeviceObject, v7);
LABEL_10:
    LODWORD(Status) = 0;
LABEL_11:
    UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2265);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 1224), Irp, 0x20u);
    Log((_DWORD)DeviceObject, 16, 1349669460, (_DWORD)Irp, (int)Status);
    return (unsigned int)Status;
  }
  if ( v12 != 259 )
  {
    UsbhFdoPower_PowerFailureEntry((_DWORD)DeviceObject);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 1224), Context, 0x20u);
    goto LABEL_10;
  }
  Log((_DWORD)DeviceObject, 16, 1349411923, (_DWORD)Irp, 259LL);
  UsbhReleaseFdoPwrLock(DeviceObject, v7);
  return 3221225494LL;
}
