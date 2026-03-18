/*
 * XREFs of DpiFdoHandleSystemPower @ 0x1C01F0CCC
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C01F0570 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiCorrectPowerAction @ 0x1C003A738 (DpiCorrectPowerAction.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01F7D20 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoStopMiracastSession @ 0x1C01FB3E0 (DpiFdoStopMiracastSession.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C01FC9CC (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C020ABE0 (DpiDxgkDdiSetPowerState.c)
 */

NTSTATUS __fastcall DpiFdoHandleSystemPower(PDEVICE_OBJECT DeviceObject, IRP *Context)
{
  char *DeviceExtension; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  IRP *v5; // r15
  int v6; // ebx
  char v7; // di
  struct _IO_REMOVE_LOCK *v8; // rbx
  struct _IO_STACK_LOCATION *v9; // rax
  struct _IO_STACK_LOCATION *v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v18; // rax
  unsigned int LowPart; // eax
  __int64 v20; // rdx
  POWER_STATE v21; // ebx
  char v22; // di
  __int64 v23; // rcx
  NTSTATUS v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  int RemlockSize; // [rsp+20h] [rbp-D8h]
  int EaLength; // [rsp+34h] [rbp-C4h]
  __int64 v29; // [rsp+38h] [rbp-C0h] BYREF
  struct _IO_REMOVE_LOCK *v30; // [rsp+40h] [rbp-B8h]
  struct _KEVENT Event; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v32[10]; // [rsp+60h] [rbp-98h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Context->Tail.Overlay.CurrentStackLocation;
  v5 = Context;
  v6 = 0;
  v7 = 0;
  if ( CurrentStackLocation->MinorFunction == 2 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 6 && byte_1C007AC30 )
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_KsrDisplay__private_propertyCache,
        12075496LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C005F8AC,
        0,
        RemlockSize);
  }
  else
  {
    if ( CurrentStackLocation->MinorFunction == 3 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
      {
        v29 = -300000000LL;
        LOBYTE(Context) = 1;
        DpiFdoStopMiracastSession(DeviceObject, Context, &v29, 131LL);
      }
      goto LABEL_6;
    }
    v6 = -1073741637;
  }
  if ( v6 == -1073741637 )
  {
    ++v5->CurrentLocation;
    ++v5->Tail.Overlay.CurrentStackLocation;
    return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), v5);
  }
LABEL_6:
  v8 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
  v30 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, v5, File, 1u, 0x20u);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v9 = v5->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v9[-1].MajorFunction = *(_OWORD *)&v9->MajorFunction;
  *(_OWORD *)&v9[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v9->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v9[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v9->Parameters.SetQuota + 6);
  v9[-1].FileObject = v9->FileObject;
  v9[-1].Control = 0;
  v10 = v5->Tail.Overlay.CurrentStackLocation;
  v10[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
  v10[-1].Context = &Event;
  v10[-1].Control = -32;
  PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), v5);
  v11 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v15 = v11;
  if ( v11 )
  {
    v16 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v16 + 24) = v15;
    WdLogEvent5_WdError(v16);
  }
  else
  {
    LODWORD(v15) = v5->IoStatus.Status;
    if ( (int)v15 >= 0 )
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
      v20 = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v21.SystemState = *(SYSTEM_POWER_STATE *)&DeviceExtension[4 * v20 + 1176];
      if ( !DeviceExtension[1143] )
      {
        if ( DeviceExtension[480] )
        {
          LODWORD(v15) = 0;
          if ( *((_DWORD *)DeviceExtension + 4) == 1953656900
            && *((_DWORD *)DeviceExtension + 5) == 2
            && *((_DWORD *)DeviceExtension + 59) == 2
            && CurrentStackLocation->MinorFunction == 2 )
          {
            EaLength = CurrentStackLocation->Parameters.Create.EaLength;
            if ( !DeviceExtension[1139] || (v22 = 1, (unsigned int)(dword_1C007AA88 - 4) > 1) )
              v22 = 0;
            if ( v21.SystemState == PowerSystemWorking )
              EaLength = DpiCorrectPowerAction(
                           (__int64)DeviceObject,
                           v20,
                           CurrentStackLocation->Parameters.Create.EaLength);
            if ( v22 && v21.SystemState < *((_DWORD *)DeviceExtension + 71) && byte_1C007AAA8 )
            {
              DpiAcquirePostDisplayInfoFromBgfx(&dword_1C007A9E8);
              byte_1C007AAA8 = 0;
              dword_1C007AAD4 = 1;
              qword_1C007AA90 = (__int64)KeGetCurrentThread();
              qword_1C007AA98 = (__int64)DeviceObject;
            }
            ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
              *((_QWORD *)DeviceExtension + 5),
              *((_QWORD *)DeviceExtension + 6),
              -1,
              (POWER_STATE)v21.SystemState,
              EaLength);
            if ( v22 )
            {
              if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 5 )
              {
                byte_1C007AAA8 = 1;
                LOBYTE(v23) = 1;
                InbvNotifyDisplayOwnershipChange(v23, DpiEnterSystemDisplay);
              }
              else if ( v21.SystemState < *((_DWORD *)DeviceExtension + 71) )
              {
                memset(&dword_1C007A9E8, 0, 0x20uLL);
                dword_1C007AA00 = -1;
                memset(&xmmword_1C007AA08, 0, 0x80uLL);
                qword_1C007AA98 = 0LL;
                qword_1C007AA90 = (__int64)KeGetCurrentThread();
              }
            }
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3624), 1u);
            *((POWER_STATE *)DeviceExtension + 71) = v21;
            ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3624));
            KeLeaveCriticalRegion();
            if ( v21.SystemState == PowerSystemWorking )
            {
              memset(v32, 0, 0x48uLL);
              EtwActivityIdControl(3u, (LPGUID)&v32[1]);
              v32[8] = MEMORY[0xFFFFF78000000014];
              LODWORD(v32[3]) = 11;
              LOBYTE(v32[6]) = -1;
              DpiFdoInvalidateChildRelations(DeviceObject, 6LL, v32);
            }
            v7 = 0;
          }
          *((_DWORD *)DeviceExtension + 70) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        }
        else
        {
          v7 = 1;
          v5->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          v24 = PoRequestPowerIrp(
                  DeviceObject,
                  CurrentStackLocation->MinorFunction,
                  v21,
                  (PREQUEST_POWER_COMPLETE)DpiFdoDevicePowerCompletionCallback,
                  v5,
                  0LL);
          v15 = v24;
          if ( v24 != 259 )
          {
            v26 = WdLogNewEntry5_WdError(v25);
            *(_QWORD *)(v26 + 24) = v15;
            WdLogEvent5_WdError(v26);
          }
        }
      }
      if ( DeviceExtension[483] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      v8 = v30;
    }
    else
    {
      v18 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v18 + 24) = CurrentStackLocation->MinorFunction;
      WdLogEvent5_WdWarning(v18);
    }
  }
  if ( (_DWORD)v15 != 259 )
  {
    PoStartNextPowerIrp(v5);
    v5->IoStatus.Status = v15;
    IofCompleteRequest(v5, 0);
    IoReleaseRemoveLockEx(v8, v5, 0x20u);
    if ( v7 )
      LODWORD(v15) = 259;
  }
  return v15;
}
