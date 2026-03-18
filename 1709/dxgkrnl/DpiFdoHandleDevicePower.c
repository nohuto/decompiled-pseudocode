/*
 * XREFs of DpiFdoHandleDevicePower @ 0x1C0101690
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C01011C0 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C000F224 (DpiDisableD3Requests.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C002DDF8 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C0100CC8 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C01019A0 (DpiFdoStopMiracastSession.c)
 *     DpiRequestIoPowerState @ 0x1C0101BAC (DpiRequestIoPowerState.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C011C364 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017DDD0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpiFdoIsDevicePresent @ 0x1C01DEA3C (DpiFdoIsDevicePresent.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C01DEB3C (DpiFdoRebootForSurpriseRemoval.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C01E8044 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C01E81D0 (DpiLdaPowerUpAdapterInChain.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C01E9994 (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoHandleDevicePower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  int *DeviceExtension; // rdi
  __int64 Status; // rsi
  bool v7; // r12
  __int64 LowPart; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  struct _IO_STACK_LOCATION *v12; // rax
  struct _IO_STACK_LOCATION *v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  POWER_STATE v16; // ebx
  CCHAR v17; // dl
  int v19; // eax
  __int64 v20; // rbx
  char v21; // r12
  _QWORD *v22; // rax
  __int64 v23; // rax
  int IsDevicePresent; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  char v27; // r13
  __int64 v28; // r14
  char v29; // al
  _QWORD *v30; // rax
  char v31; // al
  int v32; // eax
  __int64 v33; // r8
  bool v34; // r14
  struct _DEVICE_OBJECT *v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  bool v41; // [rsp+90h] [rbp+8h]
  __int64 v42; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (int *)DeviceObject->DeviceExtension;
  v41 = 0;
  LODWORD(Status) = 0;
  v7 = 0;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction == 3 )
      goto LABEL_17;
LABEL_42:
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    LODWORD(Status) = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
    return (unsigned int)Status;
  }
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v7 = (int)LowPart > 1;
  v41 = (int)LowPart > 1;
  v9 = (_QWORD *)WdLogNewEntry5_WdPower();
  v9[3] = DeviceObject->DeviceExtension;
  v9[4] = LowPart;
  v9[5] = DeviceExtension[71];
  WdLogEvent5_WdPower(v9);
  if ( (int)LowPart > 1
    && (!*((_BYTE *)DeviceExtension + 481) || (unsigned int)DeviceExtension[70] > 1 || *((_BYTE *)DeviceExtension + 482)) )
  {
    v42 = -300000000LL;
    LOBYTE(v10) = 1;
    DpiFdoStopMiracastSession(DeviceObject, v10, &v42, 131LL);
  }
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 483) )
    DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( (int)LowPart <= DeviceExtension[71]
    || (DeviceExtension[126]
      ? (v11 = DpiLdaPowerDownAllAdaptersInChain(DeviceObject, Irp))
      : (v11 = DpiFdoSetAdapterPowerState(
                 DeviceObject,
                 (POWER_STATE)LowPart,
                 (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                 HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                 CurrentStackLocation->Parameters.Create.EaLength)),
        LODWORD(Status) = v11,
        v11 >= 0) )
  {
    if ( (int)LowPart > 1 )
      *((_BYTE *)DeviceExtension + 496) = 1;
  }
  if ( *((_BYTE *)DeviceExtension + 483) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( (_DWORD)Status == -1073741637 )
    goto LABEL_42;
  if ( (int)Status < 0 )
  {
    PoStartNextPowerIrp(Irp);
    v17 = 0;
    Irp->IoStatus.Status = Status;
    goto LABEL_31;
  }
LABEL_17:
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v12 = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v12[-1].MajorFunction = *(_OWORD *)&v12->MajorFunction;
  *(_OWORD *)&v12[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v12->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v12[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v12->Parameters.SetQuota + 6);
  v12[-1].FileObject = v12->FileObject;
  v12[-1].Control = 0;
  v13 = Irp->Tail.Overlay.CurrentStackLocation;
  v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
  v13[-1].Context = &Event;
  v13[-1].Control = -32;
  PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  v14 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  Status = v14;
  if ( !v14 )
  {
    Status = Irp->IoStatus.Status;
    if ( (_DWORD)Status == -1073741810 )
    {
      v20 = 0LL;
      v21 = 0;
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v22[3] = DpiFdoHandleDevicePower;
      v22[4] = DeviceObject;
      v22[5] = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v22[6] = -1073741810LL;
      WdLogEvent5_WdError(v22);
      if ( !DeviceExtension[126] || *((_BYTE *)DeviceExtension + 508) )
      {
        v20 = (__int64)DeviceExtension;
      }
      else
      {
        v23 = *((_QWORD *)DeviceExtension + 324);
        if ( v23 )
          v20 = *(_QWORD *)(v23 + 64);
      }
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 483) )
        DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v42);
      v27 = v42;
      if ( IsDevicePresent < 0 )
        v27 = 0;
      if ( !v27 )
        *((_BYTE *)DeviceExtension + 1148) = 1;
      if ( DeviceExtension[59] == 6 )
      {
        v34 = v41;
        if ( !v41 && *((_QWORD *)DeviceExtension + 61) )
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v20, 0, 1);
      }
      else if ( v20 )
      {
        if ( !v27 || (*(_BYTE *)(v20 + 3736) & 0x18) != 0 )
        {
          v28 = *((_QWORD *)DeviceExtension + 5);
          if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
          {
            if ( *((_BYTE *)DeviceExtension + 481) )
            {
              if ( (unsigned int)DeviceExtension[70] <= 1 && !*((_BYTE *)DeviceExtension + 482) )
              {
                v29 = *(_BYTE *)(v20 + 3736);
                if ( (v29 & 0x10) == 0 && ((v29 & 8) == 0 || *(int *)(v20 + 3744) < 0x2000) )
                {
                  v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL, v25, v26);
                  v30[3] = 275LL;
                  v30[4] = 25LL;
                  v30[5] = 2LL - (*((_BYTE *)DeviceExtension + 1136) != 0);
                  v30[6] = (unsigned int)DeviceExtension[277];
                  v30[7] = (unsigned int)DeviceExtension[278];
                  WdLogEvent5_WdCriticalError(v30);
                }
              }
            }
          }
          if ( (int)DpiDxgkDdiNotifySurpriseRemoval(v28, *((_QWORD *)DeviceExtension + 6), v20, 0LL) >= 0
            || (*(_BYTE *)(v20 + 3736) & 0x10) != 0 )
          {
            v21 = 1;
          }
          v31 = *((_BYTE *)DeviceExtension + 1136);
          if ( v31 || !v21 )
            DpiFdoRebootForSurpriseRemoval(DeviceObject, v31 != 0 ? 1 : 3);
        }
        else
        {
          v21 = 1;
        }
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v20 + 3624), 1u);
        if ( !v21 )
          *((_BYTE *)DeviceExtension + 1149) = 1;
        DeviceExtension[(DeviceExtension[69] & 7) + 61] = DeviceExtension[60];
        v32 = DeviceExtension[59];
        ++DeviceExtension[69];
        DeviceExtension[60] = v32;
        DeviceExtension[59] = 6;
        ExReleaseResourceLite((PERESOURCE)(v20 + 3624));
        KeLeaveCriticalRegion();
        v34 = v41;
        if ( !v41 && *((_QWORD *)DeviceExtension + 61) )
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v20, 0, 1);
        DpiRequestIoPowerState(*(_QWORD *)(v20 + 24), 4LL, v33, 0LL);
        if ( (int *)v20 != DeviceExtension )
        {
          v35 = *(struct _DEVICE_OBJECT **)(v20 + 152);
          *(_BYTE *)(v20 + 232) = 1;
          IoInvalidateDeviceState(v35);
          DxgCreateLiveDumpWithWdLogs(0x193u, 0x803uLL, 0xFFFFFFFFC000000EuLL, *(int *)(v20 + 236), *(int *)(v20 + 240));
        }
      }
      else
      {
        v36 = DeviceExtension[60];
        v37 = DeviceExtension[69] & 7;
        v34 = v41;
        *((_BYTE *)DeviceExtension + 1149) = 1;
        DeviceExtension[v37 + 61] = v36;
        v38 = DeviceExtension[59];
        ++DeviceExtension[69];
        DeviceExtension[60] = v38;
        DeviceExtension[59] = 6;
      }
      if ( (PDEVICE_OBJECT)qword_1C0060A80 == DeviceObject )
      {
        if ( v27 )
        {
          if ( dword_1C0060B30 == 3 && byte_1C0060B50 )
          {
            DpiAcquirePostDisplayInfoFromBgfx(&dword_1C0060A90);
            byte_1C0060B50 = 0;
            dword_1C0060B7C = 1;
          }
        }
        else
        {
          qword_1C0060A80 = 0LL;
        }
      }
      if ( *((_BYTE *)DeviceExtension + 483) )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      goto LABEL_97;
    }
    if ( (int)Status >= 0 )
      goto LABEL_20;
  }
  v39 = WdLogNewEntry5_WdError(v15);
  *(_QWORD *)(v39 + 24) = Status;
  WdLogEvent5_WdError(v39);
  if ( (int)Status >= 0 )
  {
LABEL_20:
    if ( CurrentStackLocation->MinorFunction == 2 )
    {
      v16.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 483) )
        DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( !v7 )
        *((_BYTE *)DeviceExtension + 496) = 0;
      if ( v16.SystemState < DeviceExtension[71] )
      {
        if ( DeviceExtension[126] )
          v19 = DpiLdaPowerUpAdapterInChain(DeviceObject, Irp);
        else
          v19 = DpiFdoSetAdapterPowerState(
                  DeviceObject,
                  v16,
                  (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                  HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                  CurrentStackLocation->Parameters.Create.EaLength);
        LODWORD(Status) = v19;
      }
      if ( *((_BYTE *)DeviceExtension + 481) && v16.SystemState == PowerSystemWorking )
        DpiSetDevicePowerTransitionStateAtPassiveLevel((__int64)DeviceExtension, 0, 1);
LABEL_27:
      if ( *((_BYTE *)DeviceExtension + 483) )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      goto LABEL_30;
    }
    goto LABEL_30;
  }
  v34 = v41;
LABEL_97:
  if ( v34 )
  {
    KeEnterCriticalRegion();
    if ( *((_BYTE *)DeviceExtension + 483) )
      DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    *((_BYTE *)DeviceExtension + 496) = 0;
    goto LABEL_27;
  }
LABEL_30:
  PoStartNextPowerIrp(Irp);
  v17 = 1;
LABEL_31:
  IofCompleteRequest(Irp, v17);
  return (unsigned int)Status;
}
