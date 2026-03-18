/*
 * XREFs of UsbhFdoSystemPowerState @ 0x1C00041F4
 * Callers:
 *     UsbhFdoPower_SetPower @ 0x1C0004120 (UsbhFdoPower_SetPower.c)
 * Callees:
 *     UsbhFdoSetPowerSx_Action @ 0x1C0001A6C (UsbhFdoSetPowerSx_Action.c)
 *     UsbhFdoSetPowerS0_Action @ 0x1C0001F90 (UsbhFdoSetPowerS0_Action.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0003190 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004944 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00049D0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C0004A78 (UsbhSetFdoPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0004B00 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhAcquirePowerContext @ 0x1C0004CEC (UsbhAcquirePowerContext.c)
 *     UsbhEtwGetActivityId @ 0x1C0004F74 (UsbhEtwGetActivityId.c)
 *     GET_FDO_POWER_STATE @ 0x1C0004FA4 (GET_FDO_POWER_STATE.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C0007FB8 (Usbh_HubRootHubInitNotification.c)
 *     Usbh_FDO_Pnp_State @ 0x1C00085E0 (Usbh_FDO_Pnp_State.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C00087D8 (UsbhReleaseFdoPnpLock.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C001CC00 (UsbhDisableTimerObject.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D2D8 (WPP_RECORDER_SF_dd.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C003F788 (UsbhAcquireFdoPnpLock.c)
 */

__int64 __fastcall UsbhFdoSystemPowerState(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int LowPart; // r14d
  __int64 v5; // r13
  unsigned int inited; // r15d
  void *v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // ecx
  __int64 v11; // rcx
  bool v12; // zf
  _QWORD *v13; // r15
  unsigned int v15; // ebx
  int v16; // eax
  void *v17; // r9
  __int64 v18; // r8
  int v19; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v21; // ebx
  void *v22; // r9
  _BYTE *v23; // r8
  int v24; // edi
  void *v25; // r9
  __int64 v26; // rdx
  int ActivityId; // edi
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rax
  _BYTE v31[16]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v32[16]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v33[16]; // [rsp+60h] [rbp-58h] BYREF

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v5 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1349745011, 0, (__int64)Irp);
  inited = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, File, 1u, 0x20u);
  v7 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_DISPATCH;
  if ( LowPart != 1 )
    v7 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_DISPATCH;
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v7, LowPart, 0);
  if ( (inited & 0xC0000000) != 0xC0000000 )
  {
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
    if ( *(_DWORD *)(FdoExt(*(_QWORD *)(v8 + 8)) + 1360) == 5 )
    {
      UsbhReleaseFdoPnpLock(DeviceObject, v8);
      UsbhAcquireFdoPwrLock(DeviceObject, v8, 101LL, 846428531LL);
      FdoExt(*(_QWORD *)(v8 + 8));
      if ( *(_DWORD *)(FdoExt(*(_QWORD *)(v8 + 8)) + 4172) == 213 )
      {
        if ( LowPart == 1 )
          v26 = 1LL;
        else
          v26 = LowPart;
        UsbhSetFdoPowerState(DeviceObject, v26, 213LL);
        UsbhReleaseFdoPwrLock(DeviceObject, v8);
        ActivityId = UsbhEtwGetActivityId(Irp, v32);
        UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2680);
        ++Irp->CurrentLocation;
        ++Irp->Tail.Overlay.CurrentStackLocation;
        v21 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
        v22 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
        if ( LowPart != 1 )
          v22 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
        v23 = v32;
        if ( ActivityId < 0 )
          v23 = 0LL;
      }
      else
      {
        v12 = LowPart == 1;
        if ( LowPart != 1 )
        {
LABEL_10:
          v13 = (_QWORD *)UsbhAcquirePowerContext(
                            (_DWORD)DeviceObject,
                            v8,
                            (_DWORD)DeviceObject,
                            (_DWORD)Irp,
                            0LL,
                            11,
                            !v12);
          if ( v13 )
          {
            if ( LowPart == 1 )
            {
              *(_QWORD *)(v5 + 5072) = MEMORY[0xFFFFF78000000014];
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                v30 = FdoExt(DeviceObject);
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1,
                  22,
                  (__int64)&WPP_5959a78b850834ce071a1dc82810c49d_Traceguids,
                  *(_DWORD *)(v30 + 4208));
              }
              v15 = GET_FDO_POWER_STATE(v8);
              v16 = GET_FDO_POWER_STATE(v8) - 205;
              if ( !v16 )
                return UsbhFdoSetPowerS0_Action(DeviceObject, Irp, v13);
              if ( v16 == 1 )
                v15 = 201;
              *(_DWORD *)(FdoExt(DeviceObject) + 4212) = 1;
              UsbhSetFdoPowerState(DeviceObject, 0LL, v15);
              UsbhReleaseFdoPwrLock(DeviceObject, v8);
            }
            else if ( LowPart - 2 <= 4 )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                v28 = FdoExt(DeviceObject);
                WPP_RECORDER_SF_dd(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v29,
                  1,
                  21,
                  (__int64)&WPP_5959a78b850834ce071a1dc82810c49d_Traceguids,
                  LowPart,
                  *(_DWORD *)(v28 + 4208));
              }
              return UsbhFdoSetPowerSx_Action(DeviceObject, Irp, v13);
            }
            UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2821);
            ++Irp->CurrentLocation;
            ++Irp->Tail.Overlay.CurrentStackLocation;
            v21 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
          }
          else
          {
            UsbhReleaseFdoPwrLock(DeviceObject, v8);
            v21 = -1073741670;
            Irp->IoStatus.Status = -1073741670;
            Log((_DWORD)DeviceObject, 16, 829651315, -1073741670, (__int64)Irp);
            UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2740);
            v25 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
            if ( LowPart != 1 )
              v25 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
            UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v25, LowPart, -1073741670);
            IofCompleteRequest(Irp, 0);
          }
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
          return v21;
        }
        if ( *(_DWORD *)(FdoExt(DeviceObject) + 4212) != 1 )
        {
          v12 = 1;
          goto LABEL_10;
        }
        UsbhReleaseFdoPwrLock(DeviceObject, v8);
        v24 = UsbhEtwGetActivityId(Irp, v33);
        UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2708);
        ++Irp->CurrentLocation;
        ++Irp->Tail.Overlay.CurrentStackLocation;
        v21 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
        v23 = v33;
        v22 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
        if ( v24 < 0 )
          v23 = 0LL;
      }
    }
    else
    {
      UsbhReleaseFdoPnpLock(DeviceObject, v8);
      Log((_DWORD)DeviceObject, 16, 846428531, inited, (__int64)Irp);
      UsbhAcquireFdoPwrLock(DeviceObject, v8, 101LL, 829651315LL);
      if ( LowPart == 1 )
        v18 = 201LL;
      else
        v18 = 205LL;
      UsbhSetFdoPowerState(DeviceObject, 0LL, v18);
      UsbhReleaseFdoPwrLock(DeviceObject, v8);
      v19 = UsbhEtwGetActivityId(Irp, v31);
      UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2647);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v21 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
      v22 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
      if ( LowPart != 1 )
        v22 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
      v23 = v31;
      if ( v19 < 0 )
        v23 = 0LL;
    }
    UsbhEtwLogHubPowerEvent(DeviceObject, 0LL, v23, v22, LowPart, v21);
    return v21;
  }
  Irp->IoStatus.Status = inited;
  Log((_DWORD)DeviceObject, 16, 829651315, inited, (__int64)Irp);
  UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2585);
  v17 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
  if ( LowPart != 1 )
    v17 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v17, LowPart, inited);
  IofCompleteRequest(Irp, 0);
  return inited;
}
