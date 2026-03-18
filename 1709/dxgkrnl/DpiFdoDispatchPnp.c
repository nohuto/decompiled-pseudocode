/*
 * XREFs of DpiFdoDispatchPnp @ 0x1C011ACC0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiFdoDispatchPnp(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  char *DeviceExtension; // rdi
  char v5; // r15
  int Status; // esi
  UCHAR MinorFunction; // dl
  __int64 (__fastcall *v9)(PDEVICE_OBJECT, PIRP); // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  _OWORD *SecurityContext; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  bool v20; // zf
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // eax
  struct _DEVICE_OBJECT *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  _QWORD *v34; // rax
  int v35; // eax
  int v36; // eax
  _QWORD *v37; // rax
  void *v38; // rdx
  PIRP v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  IRP *v42; // r14
  struct _IRP *MasterIrp; // rax
  _QWORD *v44; // rax
  void *v45; // rdx
  PIRP v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  IRP *v49; // r14
  struct _IRP *v50; // rax
  _QWORD *v51; // rax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v5 = 0;
  Status = -1073741637;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction < 0x18u )
  {
    v9 = *(__int64 (__fastcall **)(PDEVICE_OBJECT, PIRP))&DeviceExtension[8 * MinorFunction + 288];
    if ( v9 )
      return v9(DeviceObject, Irp);
  }
  switch ( MinorFunction )
  {
    case 0u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      *((_DWORD *)DeviceExtension + 71) = 1;
      *((_DWORD *)DeviceExtension + 70) = 1;
      PoSetPowerState(DeviceObject, DevicePowerState, (POWER_STATE)1);
      Status = 0;
      *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
      v36 = *((_DWORD *)DeviceExtension + 59);
      ++*((_DWORD *)DeviceExtension + 69);
      v20 = DeviceExtension[483] == 0;
      *((_DWORD *)DeviceExtension + 60) = v36;
      *((_DWORD *)DeviceExtension + 59) = 2;
      goto LABEL_88;
    case 1u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( byte_1C0060851 || DeviceExtension[480] )
      {
        v5 = 1;
        Status = -1073741823;
      }
      else
      {
        v33 = *((_DWORD *)DeviceExtension + 59);
        if ( v33 == 6 )
          goto LABEL_84;
        if ( v33 == 4 )
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v30, v32);
          v34[3] = 275LL;
          v34[4] = 21LL;
          v34[5] = DeviceExtension;
          v34[6] = -1073741823LL;
          WdLogEvent5_WdCriticalError(v34);
        }
        *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
        v35 = *((_DWORD *)DeviceExtension + 59);
        ++*((_DWORD *)DeviceExtension + 69);
        v20 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
        *((_DWORD *)DeviceExtension + 60) = v35;
        *((_DWORD *)DeviceExtension + 59) = 5;
        if ( v20 && *((_DWORD *)DeviceExtension + 5) == 2 && (DeviceExtension[5108] || DeviceExtension[5140]) )
          Status = 259;
        else
LABEL_84:
          Status = 0;
      }
      goto LABEL_43;
    case 3u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v5 = 1;
      IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      Status = Irp->IoStatus.Status;
      if ( Status < 0 )
        goto LABEL_43;
      v28 = *((_DWORD *)DeviceExtension + 59);
      if ( v28 != 5 )
      {
        if ( v28 == 6 )
        {
          v29 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
          DeviceExtension[232] = 1;
          IoInvalidateDeviceState(v29);
        }
        goto LABEL_43;
      }
LABEL_50:
      v21 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v21;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
LABEL_43:
      v20 = DeviceExtension[483] == 0;
LABEL_88:
      if ( !v20 )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      goto LABEL_21;
    case 4u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v22 = *((_DWORD *)DeviceExtension + 69) & 7;
      *(_DWORD *)&DeviceExtension[4 * v22 + 244] = *((_DWORD *)DeviceExtension + 60);
      v23 = *((_DWORD *)DeviceExtension + 59);
      ++*((_DWORD *)DeviceExtension + 69);
      Status = 0;
      *((_DWORD *)DeviceExtension + 60) = v23;
      *((_DWORD *)DeviceExtension + 59) = 4;
      v27 = WdLogNewEntry5_WdEvent(v22, v24, v25, v26);
      *(_QWORD *)(v27 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v27);
      if ( DeviceExtension[483] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
LABEL_65:
      Irp->IoStatus.Status = Status;
      goto LABEL_15;
    case 5u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( byte_1C0060851 || DeviceExtension[480] )
        Status = -1073741823;
      else
        Status = -1073741808;
      if ( DeviceExtension[483] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      v5 = 1;
      goto LABEL_21;
    case 6u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v5 = 1;
      IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      Status = Irp->IoStatus.Status;
      if ( Status < 0 || *((_DWORD *)DeviceExtension + 59) != 3 )
        goto LABEL_43;
      goto LABEL_50;
    case 9u:
      if ( !DeviceExtension
        || *((_DWORD *)DeviceExtension + 4) != 1953656900
        || (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) > 1 )
      {
        goto LABEL_15;
      }
      v5 = 1;
      IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      Status = Irp->IoStatus.Status;
      *(_OWORD *)(DeviceExtension + 1160) = *SecurityContext;
      *(_OWORD *)(DeviceExtension + 1176) = SecurityContext[1];
      *(_OWORD *)(DeviceExtension + 1192) = SecurityContext[2];
      *(_OWORD *)(DeviceExtension + 1208) = SecurityContext[3];
      goto LABEL_21;
  }
  if ( MinorFunction != 20 )
  {
    if ( MinorFunction != 23 )
      goto LABEL_13;
    KeEnterCriticalRegion();
    Status = 0;
    if ( DeviceExtension[483] )
      DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    v17 = *((_DWORD *)DeviceExtension + 69) & 7;
    *(_DWORD *)&DeviceExtension[4 * v17 + 244] = *((_DWORD *)DeviceExtension + 60);
    v18 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    v20 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
    *((_DWORD *)DeviceExtension + 60) = v18;
    *((_DWORD *)DeviceExtension + 59) = 6;
    if ( v20 && *((_DWORD *)DeviceExtension + 5) == 2 && (DeviceExtension[5108] || DeviceExtension[5140]) )
      Status = 259;
    v19 = WdLogNewEntry5_WdEvent(v17, v14, v15, v16);
    *(_QWORD *)(v19 + 24) = DeviceObject;
    WdLogEvent5_WdEvent(v19);
    goto LABEL_43;
  }
  v5 = 1;
  IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  Status = Irp->IoStatus.Status;
  if ( (int)(Status + 0x80000000) < 0 || Status == -1073741637 )
  {
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 4 )
    {
      Status = 0;
      Irp->IoStatus.Information |= 2uLL;
    }
    else if ( DeviceExtension[232] == 1 )
    {
      Status = 0;
      Irp->IoStatus.Information |= 4uLL;
    }
    else
    {
      if ( !DeviceExtension[480] )
        goto LABEL_21;
      Status = 0;
      Irp->IoStatus.Information |= 0x22uLL;
    }
LABEL_23:
    Irp->IoStatus.Status = Status;
    IofCompleteRequest(Irp, 1);
    return (unsigned int)Status;
  }
LABEL_21:
  if ( Status == 259 )
  {
    if ( *((_QWORD *)DeviceExtension + 643) )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, 0x80000000LL, v12);
      v37[3] = 275LL;
      v37[4] = 21LL;
      v37[5] = 259LL;
      WdLogEvent5_WdCriticalError(v37);
    }
    v38 = (void *)*((_QWORD *)DeviceExtension + 636);
    if ( v38 )
    {
      v39 = IoCsqRemoveNextIrp((PIO_CSQ)DeviceExtension + 78, v38);
      v42 = v39;
      *((_QWORD *)DeviceExtension + 636) = 0LL;
      if ( v39 )
      {
        MasterIrp = v39->AssociatedIrp.MasterIrp;
        if ( CurrentStackLocation->MinorFunction == 1
          || CurrentStackLocation->MinorFunction == 5
          || CurrentStackLocation->MinorFunction == 23 )
        {
          *(_DWORD *)&MasterIrp->Type = 0;
        }
        else
        {
          v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(
                            v40,
                            (unsigned int)CurrentStackLocation->MinorFunction - 5,
                            v41);
          v44[3] = 275LL;
          v44[4] = 21LL;
          v44[5] = -1073741811LL;
          WdLogEvent5_WdCriticalError(v44);
        }
        v42->IoStatus.Status = 0;
        v42->IoStatus.Information = 4LL;
        IofCompleteRequest(v42, 0);
      }
    }
    v45 = (void *)*((_QWORD *)DeviceExtension + 640);
    if ( v45 )
    {
      v46 = IoCsqRemoveNextIrp((PIO_CSQ)DeviceExtension + 78, v45);
      v49 = v46;
      *((_QWORD *)DeviceExtension + 640) = 0LL;
      if ( v46 )
      {
        v50 = v46->AssociatedIrp.MasterIrp;
        if ( CurrentStackLocation->MinorFunction == 1
          || CurrentStackLocation->MinorFunction == 5
          || CurrentStackLocation->MinorFunction == 23 )
        {
          *(_DWORD *)&v50->Type = 0;
        }
        else
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(
                            v47,
                            (unsigned int)CurrentStackLocation->MinorFunction - 5,
                            v48);
          v51[3] = 275LL;
          v51[4] = 21LL;
          v51[5] = -1073741811LL;
          WdLogEvent5_WdCriticalError(v51);
        }
        v49->IoStatus.Status = 0;
        v49->IoStatus.Information = 4LL;
        IofCompleteRequest(v49, 0);
      }
    }
    *((_QWORD *)DeviceExtension + 643) = Irp;
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IoCsqInsertIrp((PIO_CSQ)DeviceExtension + 78, Irp, 0LL);
    return (unsigned int)Status;
  }
  if ( v5 )
    goto LABEL_23;
LABEL_13:
  if ( ((Status + 0x80000000) & 0x80000000) == 0 && Status != -1073741637 )
    goto LABEL_23;
  if ( Status != -1073741637 )
    goto LABEL_65;
LABEL_15:
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return (unsigned int)IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
}
