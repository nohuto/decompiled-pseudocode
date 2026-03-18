/*
 * XREFs of UsbhFdoSystemPowerState @ 0x1C0004680
 * Callers:
 *     UsbhFdoPower_SetPower @ 0x1C0004590 (UsbhFdoPower_SetPower.c)
 * Callees:
 *     UsbhFdoSetPowerSx_Action @ 0x1C00019BC (UsbhFdoSetPowerSx_Action.c)
 *     UsbhFdoSetPowerS0_Action @ 0x1C0001FF8 (UsbhFdoSetPowerS0_Action.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C00034D0 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004E50 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0004EE0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C0004F88 (UsbhSetFdoPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0005130 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhAcquirePowerContext @ 0x1C00053EC (UsbhAcquirePowerContext.c)
 *     GET_FDO_POWER_STATE @ 0x1C0005578 (GET_FDO_POWER_STATE.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C00097A8 (UsbhReleaseFdoPnpLock.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh_FDO_Pnp_State @ 0x1C001B7E0 (Usbh_FDO_Pnp_State.c)
 *     UsbhDisableTimerObject @ 0x1C0025130 (UsbhDisableTimerObject.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C0028290 (Usbh_HubRootHubInitNotification.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003C01C (WPP_RECORDER_SF_dd.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C003E8D4 (UsbhAcquireFdoPnpLock.c)
 *     UsbhEtwGetActivityId @ 0x1C005903C (UsbhEtwGetActivityId.c)
 */

__int64 __fastcall UsbhFdoSystemPowerState(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int LowPart; // ebp
  __int64 v5; // r13
  unsigned int inited; // r15d
  void *v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // ecx
  __int64 v11; // rcx
  struct _KSEMAPHORE *v12; // rdi
  __int64 v13; // rdi
  KIRQL v14; // al
  int v15; // ecx
  char v16; // al
  _QWORD *v17; // rdi
  unsigned int v19; // r15d
  int v20; // eax
  void *v21; // r9
  __int64 v22; // r8
  int ActivityId; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v25; // ebx
  void *v26; // r9
  _BYTE *v27; // r8
  __int64 v28; // rdx
  int v29; // edi
  int v30; // ebx
  unsigned int v31; // edi
  _BYTE *v32; // r8
  void *v33; // r9
  __int64 v34; // rax
  int v35; // edx
  __int64 v36; // rax
  unsigned int v37; // ebx
  _BYTE v38[16]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v39[16]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v40[16]; // [rsp+60h] [rbp-58h] BYREF

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v5 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1349745011, 0, (__int64)Irp);
  inited = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, File, 1u, 0x20u);
  v7 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_DISPATCH;
  if ( LowPart != 1 )
    v7 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_DISPATCH;
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v7, LowPart, 0);
  if ( (inited & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = inited;
    Log((_DWORD)DeviceObject, 16, 829651315, inited, (__int64)Irp);
    UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2585);
    v21 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v21 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v21, LowPart, inited);
    IofCompleteRequest(Irp, 0);
    return inited;
  }
  v8 = FdoExt(DeviceObject) + 1384;
  v9 = FdoExt(DeviceObject);
  KeWaitForSingleObject((PVOID)(v9 + 4960), Executive, 0, 0, 0LL);
  *(_DWORD *)(v8 + 56) = *(_DWORD *)(v9 + 1360);
  *(_DWORD *)(v8 + 60) = 101;
  *(_DWORD *)(v8 + 48) = 827278406;
  *(_QWORD *)(v8 + 24) = KeGetCurrentThread();
  v10 = *(_DWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 1328) = v8;
  v11 = ((_BYTE)v10 + 1) & 7;
  *(_DWORD *)(v9 + 24) = v11;
  v11 *= 32LL;
  *(_DWORD *)(v11 + v9 + 28) = 101;
  *(_DWORD *)(v11 + v9 + 32) = *(_DWORD *)(v9 + 1360);
  *(_DWORD *)(v11 + v9 + 36) = *(_DWORD *)(v9 + 1360);
  *(_DWORD *)(v11 + v9 + 40) = 812874099;
  FdoExt(*(_QWORD *)(v8 + 8));
  if ( *(_DWORD *)(FdoExt(*(_QWORD *)(v8 + 8)) + 1360) == 6 )
  {
    UsbhReleaseFdoPnpLock(DeviceObject, v8);
    UsbhDisableTimerObject(DeviceObject, *(_QWORD *)(v5 + 2768));
    inited = Usbh_HubRootHubInitNotification(DeviceObject, 0LL, 0LL);
    if ( inited == -1073741536 )
      Usbh_FDO_Pnp_State(v8, 8LL);
    else
      KeWaitForSingleObject((PVOID)(v5 + 2576), Executive, 0, 0, 0LL);
    UsbhAcquireFdoPnpLock((_DWORD)DeviceObject, v8, 101, 863205747, 1);
  }
  FdoExt(*(_QWORD *)(v8 + 8));
  if ( *(_DWORD *)(FdoExt(*(_QWORD *)(v8 + 8)) + 1360) != 5 )
  {
    UsbhReleaseFdoPnpLock(DeviceObject, v8);
    Log((_DWORD)DeviceObject, 16, 846428531, inited, (__int64)Irp);
    UsbhAcquireFdoPwrLock(DeviceObject, v8, 101LL, 829651315LL);
    if ( LowPart == 1 )
      v22 = 201LL;
    else
      v22 = 205LL;
    UsbhSetFdoPowerState(DeviceObject, 0LL, v22);
    UsbhReleaseFdoPwrLock(DeviceObject, v8);
    ActivityId = UsbhEtwGetActivityId(Irp, v38);
    UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2647);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                           + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v25 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
    v26 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v26 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    v27 = v38;
    if ( ActivityId < 0 )
      v27 = 0LL;
    goto LABEL_43;
  }
  v12 = (struct _KSEMAPHORE *)FdoExt(DeviceObject);
  FdoExt(*(_QWORD *)(v8 + 8));
  *(_DWORD *)(v8 + 48) = 1734964085;
  v12[41].Header.WaitListHead.Blink = 0LL;
  KeReleaseSemaphore(v12 + 155, 16, 1, 0);
  v13 = FdoExt(DeviceObject);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 5056));
  v15 = *(_DWORD *)(v13 + 4172);
  *(_BYTE *)(v13 + 5064) = v14;
  *(_DWORD *)(v8 + 40) = v15;
  *(_DWORD *)(v8 + 44) = 101;
  *(_DWORD *)(v8 + 32) = 844055622;
  *(_DWORD *)(v8 + 36) = 846428531;
  *(_QWORD *)(v8 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v13 + 1344) = v8;
  FdoExt(*(_QWORD *)(v8 + 8));
  if ( *(_DWORD *)(FdoExt(*(_QWORD *)(v8 + 8)) + 4172) == 213 )
  {
    if ( LowPart == 1 )
      v28 = 1LL;
    else
      v28 = LowPart;
    UsbhSetFdoPowerState(DeviceObject, v28, 213LL);
    UsbhReleaseFdoPwrLock(DeviceObject, v8);
    v29 = UsbhEtwGetActivityId(Irp, v39);
    UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2680);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v25 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
    v26 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v26 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    v27 = v39;
    if ( v29 < 0 )
      v27 = 0LL;
LABEL_43:
    UsbhEtwLogHubPowerEvent(DeviceObject, 0LL, v27, v26, LowPart, v25);
    return v25;
  }
  if ( LowPart == 1 )
  {
    if ( *(_DWORD *)(FdoExt(DeviceObject) + 4212) == 1 )
    {
      UsbhReleaseFdoPwrLock(DeviceObject, v8);
      v30 = UsbhEtwGetActivityId(Irp, v40);
      UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2708);
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      v31 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
      v32 = v40;
      if ( v30 < 0 )
        v32 = 0LL;
      UsbhEtwLogHubPowerEvent(DeviceObject, 0LL, v32, &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE, LowPart, v31);
      return v31;
    }
    v16 = 0;
  }
  else
  {
    v16 = 1;
  }
  v17 = (_QWORD *)UsbhAcquirePowerContext((_DWORD)DeviceObject, v8, (_DWORD)DeviceObject, (_DWORD)Irp, 0LL, 11, v16);
  if ( v17 )
  {
    if ( LowPart == 1 )
    {
      *(_QWORD *)(v5 + 5072) = MEMORY[0xFFFFF78000000014];
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v36 = FdoExt(DeviceObject);
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          22,
          (__int64)&WPP_f5dcad1b2f1f36217147d899caa6f39e_Traceguids,
          *(_DWORD *)(v36 + 4208));
      }
      v19 = GET_FDO_POWER_STATE(v8);
      v20 = GET_FDO_POWER_STATE(v8) - 205;
      if ( !v20 )
        return UsbhFdoSetPowerS0_Action(DeviceObject, Irp, v17);
      if ( v20 == 1 )
        v19 = 201;
      *(_DWORD *)(FdoExt(DeviceObject) + 4212) = 1;
      UsbhSetFdoPowerState(DeviceObject, 0LL, v19);
      UsbhReleaseFdoPwrLock(DeviceObject, v8);
    }
    else if ( LowPart == 5 || LowPart - 2 <= 4 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v34 = FdoExt(DeviceObject);
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v35,
          1,
          21,
          (__int64)&WPP_f5dcad1b2f1f36217147d899caa6f39e_Traceguids,
          LowPart,
          *(_DWORD *)(v34 + 4208));
      }
      return UsbhFdoSetPowerSx_Action(DeviceObject, Irp, v17);
    }
    UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2821);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v37 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
    return v37;
  }
  UsbhReleaseFdoPwrLock(DeviceObject, v8);
  Irp->IoStatus.Status = -1073741670;
  Log((_DWORD)DeviceObject, 16, 829651315, -1073741670, (__int64)Irp);
  UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2740);
  v33 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
  if ( LowPart != 1 )
    v33 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v33, LowPart, -1073741670);
  IofCompleteRequest(Irp, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
  return 3221225626LL;
}
