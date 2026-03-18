/*
 * XREFs of UsbhFdoSelectConfigurationPdo @ 0x1C0009B18
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0010A80 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D59C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C003D858 (WPP_RECORDER_SF_qd.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhFdoSelectConfigurationPdo(PDEVICE_OBJECT DeviceObject, PVOID Context, PIRP Irp)
{
  __int64 v6; // r13
  __int64 PortData; // rax
  int v8; // edx
  __int64 v9; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r14
  unsigned __int8 v12; // cl
  int Length_low; // ebp
  int v14; // r8d
  bool v15; // al
  bool v16; // cl
  int v17; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v20; // edi
  _IO_STACK_LOCATION *v21; // rax
  int v22; // [rsp+48h] [rbp-40h]
  __int64 v23; // [rsp+50h] [rbp-38h]
  int v24; // [rsp+A8h] [rbp+20h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      17,
      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
      (char)Context);
  v6 = FdoExt(DeviceObject);
  v23 = PdoExt(Context);
  PortData = UsbhGetPortData(DeviceObject, *(unsigned __int16 *)(v23 + 1420));
  v9 = PortData;
  if ( !PortData )
  {
    v20 = -1073741811;
    goto LABEL_23;
  }
  SecurityContext = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityQos = SecurityContext[1].SecurityQos;
  if ( SecurityQos )
  {
    v12 = BYTE1(SecurityQos->Length);
    Length_low = 9;
    v14 = v24;
    LOBYTE(v8) = SecurityQos->Length;
    if ( v12 != 2 )
      v14 = -1073737984;
    v15 = v12 == 2;
    v16 = 0;
    if ( (unsigned __int8)v8 >= 9u )
      v16 = v15;
    else
      v14 = -1073737984;
    if ( v16 )
    {
      v17 = 2 * SecurityQos->ContextTrackingMode;
      *(_DWORD *)(v9 + 432) = v17;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qd(
          WPP_GLOBAL_Control->DeviceExtension,
          v8,
          v14,
          18,
          (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
          (char)Context,
          v17);
      if ( *(_DWORD *)(v9 + 432) <= *(_DWORD *)(v6 + 3032) )
        goto LABEL_14;
      LOBYTE(v22) = 0;
      HIDWORD(SecurityContext->SecurityQos) = -1073737728;
      _InterlockedExchange((volatile __int32 *)(v9 + 428), 5);
      v20 = -1073741670;
      UsbhException(
        (int)DeviceObject,
        *(unsigned __int16 *)(v23 + 1420),
        35,
        (int)SecurityQos,
        9,
        -1073741670,
        HIDWORD(SecurityContext->SecurityQos),
        usbfile_hub_c,
        2573,
        v22);
    }
    else
    {
      HIDWORD(SecurityContext->SecurityQos) = v14;
      if ( LOBYTE(SecurityQos->Length) < 9u )
        Length_low = LOBYTE(SecurityQos->Length);
      LOBYTE(v22) = 0;
      v20 = -1073741811;
      UsbhException(
        (int)DeviceObject,
        *(unsigned __int16 *)(v23 + 1420),
        33,
        (int)SecurityQos,
        Length_low,
        -1073741811,
        v14,
        usbfile_hub_c,
        2550,
        v22);
    }
LABEL_23:
    Irp->IoStatus.Status = v20;
    IofCompleteRequest(Irp, 0);
    UsbhDecPdoIoCount((ULONG_PTR)Context, (ULONG_PTR)Irp);
    return v20;
  }
  *(_DWORD *)(PortData + 432) = 0;
LABEL_14:
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, UsbhSelectConfigOrInterfaceComplete, Context, 1u, 1u, 1u) < 0 )
  {
    v21 = Irp->Tail.Overlay.CurrentStackLocation;
    v21[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhSelectConfigOrInterfaceComplete;
    v21[-1].Context = Context;
    v21[-1].Control = -32;
  }
  return IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 1216), Irp);
}
