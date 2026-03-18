/*
 * XREFs of UsbhFdoDevicePowerState @ 0x1C00044D4
 * Callers:
 *     UsbhFdoPower_SetPower @ 0x1C0004120 (UsbhFdoPower_SetPower.c)
 * Callees:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CC4 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoSetPowerD0_Action @ 0x1C00030F4 (UsbhFdoSetPowerD0_Action.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0003190 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004944 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C0004A78 (UsbhSetFdoPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0004B00 (UsbhEtwLogHubPowerEvent.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

NTSTATUS __fastcall UsbhFdoDevicePowerState(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v5; // r15
  int LowPart; // ebp
  int v7; // r9d
  ULONG v8; // r12d
  NTSTATUS v9; // ebx
  __int64 v10; // r14
  __int64 v11; // rbx
  KIRQL v12; // al
  int v13; // ecx
  __int64 v14; // rdx
  _IO_STACK_LOCATION *v16; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = FdoExt(a1);
  Log((_DWORD)a1, 16, 1348756854, 0, (__int64)a2);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v8 = v7 + 1;
  if ( LowPart != v7 + 1
    && (v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), a2, File, v8, 0x20u), (v9 & 0xC0000000) == 0xC0000000) )
  {
    a2->IoStatus.Status = v9;
    UsbhPoStartNextPowerIrp_Fdo((__int64)a1, a2, 2881);
    Log((_DWORD)a1, 16, 1348761121, v9, (__int64)a2);
    IofCompleteRequest(a2, 0);
    return v9;
  }
  else
  {
    v10 = FdoExt(a1) + 1384;
    v11 = FdoExt(a1);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 5056));
    v13 = *(_DWORD *)(v11 + 4172);
    *(_BYTE *)(v11 + 5064) = v12;
    *(_DWORD *)(v10 + 40) = v13;
    *(_DWORD *)(v10 + 44) = 102;
    *(_DWORD *)(v10 + 32) = 844055622;
    *(_DWORD *)(v10 + 36) = 1937139044;
    *(_QWORD *)(v10 + 24) = KeGetCurrentThread();
    *(_QWORD *)(v11 + 1344) = v10;
    if ( LowPart == v8 )
    {
      Log((_DWORD)a1, 16, 1348420656, 0, (__int64)a2);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v8,
          23,
          (__int64)&WPP_5959a78b850834ce071a1dc82810c49d_Traceguids);
      UsbhEtwLogHubPowerEvent(a1, a2, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_DISPATCH, LowPart, 0);
      UsbhSetFdoPowerState(a1, 0LL, 211LL);
      UsbhReleaseFdoPwrLock(a1, v10);
      return UsbhFdoSetPowerD0_Action((__int64)a1, v10, a2);
    }
    else
    {
      if ( LowPart > (int)v8 )
      {
        if ( LowPart <= 3 )
        {
          Log((_DWORD)a1, 16, 1348420728, LowPart, (__int64)a2);
          UsbhEtwLogHubPowerEvent(a1, a2, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_DISPATCH, LowPart, 0);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              v8,
              24,
              (__int64)&WPP_5959a78b850834ce071a1dc82810c49d_Traceguids,
              LowPart);
          v14 = v8;
          goto LABEL_10;
        }
        if ( LowPart == 4 )
        {
          Log((_DWORD)a1, 16, 1348420728, 4, (__int64)a2);
          UsbhEtwLogHubPowerEvent(a1, a2, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_DISPATCH, 4, 0);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              v8,
              25,
              (__int64)&WPP_5959a78b850834ce071a1dc82810c49d_Traceguids,
              4);
          v14 = 0LL;
LABEL_10:
          UsbhSetFdoPowerState(a1, v14, 204LL);
          UsbhReleaseFdoPwrLock(a1, v10);
          return UsbhFdoSetPowerDx_Action(a1, *(_QWORD *)(v5 + 912), a2);
        }
      }
      UsbhReleaseFdoPwrLock(a1, v10);
      UsbhPoStartNextPowerIrp_Fdo((__int64)a1, a2, 2945);
      v16 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
      *(_OWORD *)&v16[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v16->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v16[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v16->Parameters.SetQuota + 6);
      v16[-1].FileObject = v16->FileObject;
      v16[-1].Control = 0;
      return PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), a2);
    }
  }
}
