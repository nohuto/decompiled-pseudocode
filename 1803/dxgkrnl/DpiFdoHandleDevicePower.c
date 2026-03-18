/*
 * XREFs of DpiFdoHandleDevicePower @ 0x1C01F05A0
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C01F0570 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiDisableD3Requests @ 0x1C0001CAC (DpiDisableD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C003A16C (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01648B0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpiRequestIoPowerState @ 0x1C01F1AF8 (DpiRequestIoPowerState.c)
 *     DpiFdoIsDevicePresent @ 0x1C01F8234 (DpiFdoIsDevicePresent.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C01F871C (DpiFdoRebootForSurpriseRemoval.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C01F8B44 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C01FB3E0 (DpiFdoStopMiracastSession.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C01FC9CC (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C0209694 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C020980C (DpiLdaPowerUpAdapterInChain.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C020A518 (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoHandleDevicePower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  int *DeviceExtension; // rdi
  __int64 Status; // rsi
  bool v7; // r12
  struct _IO_STACK_LOCATION *v8; // rax
  struct _IO_STACK_LOCATION *v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  char v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 LowPart; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  CCHAR v20; // dl
  int IsDevicePresent; // eax
  char v22; // r13
  __int64 v23; // r14
  char v24; // al
  _QWORD *v25; // rax
  char v26; // al
  int v27; // eax
  bool v28; // r14
  struct _DEVICE_OBJECT *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  POWER_STATE v34; // ebx
  int v35; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  bool v38; // [rsp+90h] [rbp+8h]
  __int64 v39; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (int *)DeviceObject->DeviceExtension;
  v38 = 0;
  LODWORD(Status) = 0;
  v7 = 0;
  if ( CurrentStackLocation->MinorFunction == 2 )
  {
    LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    v7 = (int)LowPart > 1;
    v38 = (int)LowPart > 1;
    v17 = (_QWORD *)WdLogNewEntry5_WdPower();
    v17[3] = DeviceObject->DeviceExtension;
    v17[4] = LowPart;
    v17[5] = DeviceExtension[71];
    WdLogEvent5_WdPower(v17);
    if ( (int)LowPart > 1
      && (!*((_BYTE *)DeviceExtension + 481)
       || (unsigned int)DeviceExtension[70] > 1
       || *((_BYTE *)DeviceExtension + 482)) )
    {
      v39 = -300000000LL;
      LOBYTE(v18) = 1;
      DpiFdoStopMiracastSession(DeviceObject, v18, &v39, 131LL);
    }
    KeEnterCriticalRegion();
    if ( *((_BYTE *)DeviceExtension + 483) )
      DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    if ( (int)LowPart <= DeviceExtension[71]
      || (!DeviceExtension[126]
        ? (v19 = DpiFdoSetAdapterPowerState(
                   DeviceObject,
                   (POWER_STATE)LowPart,
                   CurrentStackLocation->Parameters.Create.EaLength))
        : (v19 = DpiLdaPowerDownAllAdaptersInChain(DeviceObject, Irp)),
          LODWORD(Status) = v19,
          v19 >= 0) )
    {
      if ( (int)LowPart > 1 )
        *((_BYTE *)DeviceExtension + 496) = 1;
    }
    if ( *((_BYTE *)DeviceExtension + 483) )
      DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
    ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    KeLeaveCriticalRegion();
    if ( (_DWORD)Status != -1073741637 )
    {
      if ( (int)Status < 0 )
      {
        PoStartNextPowerIrp(Irp);
        v20 = 0;
        Irp->IoStatus.Status = Status;
LABEL_100:
        IofCompleteRequest(Irp, v20);
        return (unsigned int)Status;
      }
      goto LABEL_3;
    }
  }
  else if ( CurrentStackLocation->MinorFunction == 3 )
  {
LABEL_3:
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v8 = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
    *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
    v8[-1].FileObject = v8->FileObject;
    v8[-1].Control = 0;
    v9 = Irp->Tail.Overlay.CurrentStackLocation;
    v9[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
    v9[-1].Context = &Event;
    v9[-1].Control = -32;
    PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
    v10 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = v10;
    if ( v10 )
      goto LABEL_77;
    Status = Irp->IoStatus.Status;
    if ( (_DWORD)Status == -1073741810 )
    {
      v12 = 0LL;
      v13 = 0;
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v14[3] = DpiFdoHandleDevicePower;
      v14[4] = DeviceObject;
      v14[5] = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v14[6] = -1073741810LL;
      WdLogEvent5_WdError(v14);
      if ( !DeviceExtension[126] || *((_BYTE *)DeviceExtension + 508) )
      {
        v12 = (__int64)DeviceExtension;
      }
      else
      {
        v15 = *((_QWORD *)DeviceExtension + 324);
        if ( v15 )
          v12 = *(_QWORD *)(v15 + 64);
      }
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 483) )
        DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v39);
      v22 = v39;
      if ( IsDevicePresent < 0 )
        v22 = 0;
      if ( !v22 )
        *((_BYTE *)DeviceExtension + 1148) = 1;
      if ( DeviceExtension[59] == 6 )
      {
        v28 = v38;
        if ( !v38 && *((_QWORD *)DeviceExtension + 61) )
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v12, 0, 1);
      }
      else if ( v12 )
      {
        if ( !v22 || (*(_BYTE *)(v12 + 3736) & 0x18) != 0 )
        {
          v23 = *((_QWORD *)DeviceExtension + 5);
          if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
          {
            if ( *((_BYTE *)DeviceExtension + 481) )
            {
              if ( (unsigned int)DeviceExtension[70] <= 1 && !*((_BYTE *)DeviceExtension + 482) )
              {
                v24 = *(_BYTE *)(v12 + 3736);
                if ( (v24 & 0x10) == 0 && ((v24 & 8) == 0 || *(int *)(v12 + 3744) < 0x2000) )
                {
                  v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL);
                  v25[3] = 275LL;
                  v25[4] = 25LL;
                  v25[5] = 2LL - (*((_BYTE *)DeviceExtension + 1136) != 0);
                  v25[6] = (unsigned int)DeviceExtension[277];
                  v25[7] = (unsigned int)DeviceExtension[278];
                  WdLogEvent5_WdCriticalError(v25);
                }
              }
            }
          }
          if ( (int)DpiDxgkDdiNotifySurpriseRemoval(v23, *((_QWORD *)DeviceExtension + 6), v12, 0LL) >= 0
            || (*(_BYTE *)(v12 + 3736) & 0x10) != 0 )
          {
            v13 = 1;
          }
          v26 = *((_BYTE *)DeviceExtension + 1136);
          if ( v26 || !v13 )
            DpiFdoRebootForSurpriseRemoval(DeviceObject, v26 != 0 ? 1 : 3);
        }
        else
        {
          v13 = 1;
        }
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v12 + 3624), 1u);
        if ( !v13 )
          *((_BYTE *)DeviceExtension + 1149) = 1;
        DeviceExtension[(DeviceExtension[69] & 7) + 61] = DeviceExtension[60];
        v27 = DeviceExtension[59];
        ++DeviceExtension[69];
        DeviceExtension[60] = v27;
        DeviceExtension[59] = 6;
        ExReleaseResourceLite((PERESOURCE)(v12 + 3624));
        KeLeaveCriticalRegion();
        v28 = v38;
        if ( !v38 && *((_QWORD *)DeviceExtension + 61) )
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v12, 0, 1);
        DpiRequestIoPowerState(*(_QWORD *)(v12 + 24), 4LL);
        if ( (int *)v12 != DeviceExtension )
        {
          v29 = *(struct _DEVICE_OBJECT **)(v12 + 152);
          *(_BYTE *)(v12 + 232) = 1;
          IoInvalidateDeviceState(v29);
          DxgCreateLiveDumpWithWdLogs(0x193u, 2051LL, -1073741810LL, *(int *)(v12 + 236), *(int *)(v12 + 240));
        }
      }
      else
      {
        v30 = DeviceExtension[60];
        v31 = DeviceExtension[69] & 7;
        v28 = v38;
        *((_BYTE *)DeviceExtension + 1149) = 1;
        DeviceExtension[v31 + 61] = v30;
        v32 = DeviceExtension[59];
        ++DeviceExtension[69];
        DeviceExtension[60] = v32;
        DeviceExtension[59] = 6;
      }
      if ( (PDEVICE_OBJECT)qword_1C007A9D8 == DeviceObject )
      {
        if ( v22 )
        {
          if ( dword_1C007AA88 == 3 && byte_1C007AAA8 )
          {
            DpiAcquirePostDisplayInfoFromBgfx(&dword_1C007A9E8);
            byte_1C007AAA8 = 0;
            dword_1C007AAD4 = 1;
          }
        }
        else
        {
          qword_1C007A9D8 = 0LL;
        }
      }
      if ( *((_BYTE *)DeviceExtension + 483) )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
LABEL_79:
      if ( v28 )
      {
        KeEnterCriticalRegion();
        if ( *((_BYTE *)DeviceExtension + 483) )
          DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
        *((_BYTE *)DeviceExtension + 496) = 0;
LABEL_96:
        if ( *((_BYTE *)DeviceExtension + 483) )
          DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
        ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
        KeLeaveCriticalRegion();
        goto LABEL_99;
      }
      goto LABEL_99;
    }
    if ( (int)Status < 0 )
    {
LABEL_77:
      v33 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v33 + 24) = Status;
      WdLogEvent5_WdError(v33);
      if ( (int)Status < 0 )
      {
        v28 = v38;
        goto LABEL_79;
      }
    }
    if ( CurrentStackLocation->MinorFunction == 2 )
    {
      v34.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 483) )
        DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( !v7 )
        *((_BYTE *)DeviceExtension + 496) = 0;
      if ( v34.SystemState < DeviceExtension[71] )
      {
        if ( DeviceExtension[126] )
          v35 = DpiLdaPowerUpAdapterInChain(DeviceObject, Irp);
        else
          v35 = DpiFdoSetAdapterPowerState(DeviceObject, v34, CurrentStackLocation->Parameters.Create.EaLength);
        LODWORD(Status) = v35;
      }
      if ( *((_BYTE *)DeviceExtension + 481) && v34.SystemState == PowerSystemWorking )
        DpiSetDevicePowerTransitionStateAtPassiveLevel((__int64)DeviceExtension, 0, 1);
      goto LABEL_96;
    }
LABEL_99:
    PoStartNextPowerIrp(Irp);
    v20 = 1;
    goto LABEL_100;
  }
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  LODWORD(Status) = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  return (unsigned int)Status;
}
