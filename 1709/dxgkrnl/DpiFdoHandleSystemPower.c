/*
 * XREFs of DpiFdoHandleSystemPower @ 0x1C01011E8
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C01011C0 (DpiFdoDispatchPower.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C000BFA0 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     DpiCorrectPowerAction @ 0x1C0010F88 (DpiCorrectPowerAction.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C01015CC (DpiDxgkDdiSetPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C01019A0 (DpiFdoStopMiracastSession.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0118F60 (DpiFdoInvalidateChildRelations.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C011C364 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

NTSTATUS __fastcall DpiFdoHandleSystemPower(PDEVICE_OBJECT DeviceObject, IRP *Context)
{
  char *DeviceExtension; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  IRP *v5; // r13
  char v6; // di
  struct _IO_REMOVE_LOCK *v7; // rbx
  struct _IO_STACK_LOCATION *v8; // rax
  struct _IO_STACK_LOCATION *v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r14
  unsigned int LowPart; // eax
  __int64 v16; // rdx
  POWER_STATE v17; // ebx
  char v18; // di
  __int64 v19; // rcx
  NTSTATUS v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int RemlockSize; // [rsp+20h] [rbp-D8h]
  int EaLength; // [rsp+34h] [rbp-C4h]
  __int64 v28; // [rsp+38h] [rbp-C0h] BYREF
  PIO_REMOVE_LOCK RemoveLock; // [rsp+40h] [rbp-B8h]
  struct _KEVENT Event; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v31[10]; // [rsp+60h] [rbp-98h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Context->Tail.Overlay.CurrentStackLocation;
  v5 = Context;
  v6 = 0;
  if ( CurrentStackLocation->MinorFunction == 2 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 6 && byte_1C0060CD8 )
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_KsrDisplay__private_propertyCache,
        12075496LL,
        (__int64)&unk_1C0045DF0,
        0,
        RemlockSize);
  }
  else
  {
    if ( CurrentStackLocation->MinorFunction != 3 )
    {
      ++Context->CurrentLocation;
      Context->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Context);
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
    {
      v28 = -300000000LL;
      LOBYTE(Context) = 1;
      DpiFdoStopMiracastSession(DeviceObject, Context, &v28, 131LL);
    }
  }
  v7 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
  RemoveLock = (PIO_REMOVE_LOCK)(DeviceExtension + 64);
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, v5, File, 1u, 0x20u);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v8 = v5->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
  *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
  v8[-1].FileObject = v8->FileObject;
  v8[-1].Control = 0;
  v9 = v5->Tail.Overlay.CurrentStackLocation;
  v9[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
  v9[-1].Context = &Event;
  v9[-1].Control = -32;
  PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), v5);
  v10 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v14 = v10;
  if ( v10 )
  {
    v23 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v23 + 24) = v14;
    WdLogEvent5_WdError(v23);
  }
  else
  {
    LODWORD(v14) = v5->IoStatus.Status;
    if ( (int)v14 < 0 )
    {
      v24 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v24 + 24) = CurrentStackLocation->MinorFunction;
      WdLogEvent5_WdWarning(v24);
    }
    else
    {
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( CurrentStackLocation->MinorFunction == 2 )
      {
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( LowPart > 1 )
          *((_DWORD *)DeviceExtension + 70) = LowPart;
      }
      v16 = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v17.SystemState = *(SYSTEM_POWER_STATE *)&DeviceExtension[4 * v16 + 1176];
      if ( !DeviceExtension[1143] )
      {
        if ( DeviceExtension[480] )
        {
          LODWORD(v14) = 0;
          if ( *((_DWORD *)DeviceExtension + 4) == 1953656900
            && *((_DWORD *)DeviceExtension + 5) == 2
            && *((_DWORD *)DeviceExtension + 59) == 2
            && CurrentStackLocation->MinorFunction == 2 )
          {
            EaLength = CurrentStackLocation->Parameters.Create.EaLength;
            if ( !DeviceExtension[1139] || (v18 = 1, (unsigned int)(dword_1C0060B30 - 4) > 1) )
              v18 = 0;
            if ( v17.SystemState == PowerSystemWorking )
              EaLength = DpiCorrectPowerAction(
                           (__int64)DeviceObject,
                           v16,
                           CurrentStackLocation->Parameters.Create.EaLength);
            if ( v18 && v17.SystemState < *((_DWORD *)DeviceExtension + 71) && byte_1C0060B50 )
            {
              DpiAcquirePostDisplayInfoFromBgfx(&dword_1C0060A90);
              byte_1C0060B50 = 0;
              dword_1C0060B7C = 1;
              qword_1C0060B38 = (__int64)KeGetCurrentThread();
              qword_1C0060B40 = (__int64)DeviceObject;
            }
            ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
              *((_QWORD *)DeviceExtension + 5),
              *((_QWORD *)DeviceExtension + 6),
              -1,
              (POWER_STATE)v17.SystemState,
              EaLength);
            if ( v18 )
            {
              if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 5 )
              {
                byte_1C0060B50 = 1;
                LOBYTE(v19) = 1;
                InbvNotifyDisplayOwnershipChange(v19, DpiEnterSystemDisplay);
              }
              else if ( v17.SystemState < *((_DWORD *)DeviceExtension + 71) )
              {
                memset(&dword_1C0060A90, 0, 0x20uLL);
                dword_1C0060AA8 = -1;
                memset(&xmmword_1C0060AB0, 0, 0x80uLL);
                qword_1C0060B40 = 0LL;
                qword_1C0060B38 = (__int64)KeGetCurrentThread();
              }
            }
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3624), 1u);
            *((POWER_STATE *)DeviceExtension + 71) = v17;
            ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3624));
            KeLeaveCriticalRegion();
            if ( v17.SystemState == PowerSystemWorking )
            {
              memset(v31, 0, 0x48uLL);
              EtwActivityIdControl(3u, (LPGUID)&v31[1]);
              v31[8] = MEMORY[0xFFFFF78000000014];
              LODWORD(v31[3]) = 11;
              LOBYTE(v31[6]) = -1;
              DpiFdoInvalidateChildRelations(DeviceObject, 6LL, v31);
            }
            v6 = 0;
          }
          *((_DWORD *)DeviceExtension + 70) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        }
        else
        {
          v6 = 1;
          v5->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          v21 = PoRequestPowerIrp(
                  DeviceObject,
                  CurrentStackLocation->MinorFunction,
                  v17,
                  (PREQUEST_POWER_COMPLETE)DpiFdoDevicePowerCompletionCallback,
                  v5,
                  0LL);
          v14 = v21;
          if ( v21 != 259 )
          {
            v25 = WdLogNewEntry5_WdError(v22);
            *(_QWORD *)(v25 + 24) = v14;
            WdLogEvent5_WdError(v25);
          }
        }
      }
      if ( DeviceExtension[483] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      v7 = RemoveLock;
    }
  }
  if ( (_DWORD)v14 != 259 )
  {
    PoStartNextPowerIrp(v5);
    v5->IoStatus.Status = v14;
    IofCompleteRequest(v5, 0);
    IoReleaseRemoveLockEx(v7, v5, 0x20u);
    if ( v6 )
      LODWORD(v14) = 259;
  }
  return v14;
}
