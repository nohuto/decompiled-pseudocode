/*
 * XREFs of DpiFdoDispatchPnp @ 0x1C0116050
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiFdoDispatchPnp(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  char *DeviceExtension; // rdi
  int Status; // esi
  char v7; // r15
  UCHAR MinorFunction; // dl
  __int64 (__fastcall *v9)(PDEVICE_OBJECT, PIRP); // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  _OWORD *SecurityContext; // rax
  __int64 v14; // rcx
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  struct _DEVICE_OBJECT *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  _QWORD *v29; // rax
  int v30; // eax
  _QWORD *v31; // rax
  void *v32; // rdx
  PIRP v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  IRP *v36; // r14
  struct _IRP *MasterIrp; // rax
  _QWORD *v38; // rax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  Status = -1073741637;
  v7 = 0;
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
      v19 = *((_DWORD *)DeviceExtension + 59);
      ++*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = 2;
      goto LABEL_85;
    case 1u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( byte_1C006F9D1 || DeviceExtension[480] )
      {
        v7 = 1;
        Status = -1073741823;
      }
      else
      {
        v28 = *((_DWORD *)DeviceExtension + 59);
        if ( v28 == 6 )
          goto LABEL_80;
        if ( v28 == 4 )
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25, v27);
          v29[3] = 275LL;
          v29[4] = 21LL;
          v29[5] = DeviceExtension;
          v29[6] = -1073741823LL;
          WdLogEvent5_WdCriticalError(v29);
        }
        *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
        v30 = *((_DWORD *)DeviceExtension + 59);
        ++*((_DWORD *)DeviceExtension + 69);
        v16 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
        *((_DWORD *)DeviceExtension + 60) = v30;
        *((_DWORD *)DeviceExtension + 59) = 5;
        if ( v16 && *((_DWORD *)DeviceExtension + 5) == 2 && DeviceExtension[5056] )
          Status = 259;
        else
LABEL_80:
          Status = 0;
      }
      goto LABEL_86;
    case 3u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v7 = 1;
      IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      Status = Irp->IoStatus.Status;
      if ( Status < 0 )
        goto LABEL_86;
      v23 = *((_DWORD *)DeviceExtension + 59);
      if ( v23 != 5 )
      {
        if ( v23 == 6 )
        {
          v24 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
          DeviceExtension[232] = 1;
          IoInvalidateDeviceState(v24);
        }
        goto LABEL_86;
      }
LABEL_47:
      v18 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v18;
      v19 = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
LABEL_85:
      *((_DWORD *)DeviceExtension + 60) = v19;
LABEL_86:
      if ( DeviceExtension[483] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      goto LABEL_21;
    case 4u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      Status = 0;
      v20 = *((_DWORD *)DeviceExtension + 69) & 7;
      *(_DWORD *)&DeviceExtension[4 * v20 + 244] = *((_DWORD *)DeviceExtension + 60);
      v21 = *((_DWORD *)DeviceExtension + 59);
      ++*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 60) = v21;
      *((_DWORD *)DeviceExtension + 59) = 4;
      v22 = WdLogNewEntry5_WdEvent(v20);
      *(_QWORD *)(v22 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v22);
      if ( DeviceExtension[483] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
LABEL_62:
      Irp->IoStatus.Status = Status;
      goto LABEL_15;
    case 5u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( byte_1C006F9D1 || DeviceExtension[480] )
        Status = -1073741823;
      else
        Status = -1073741808;
      if ( DeviceExtension[483] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      v7 = 1;
      goto LABEL_21;
    case 6u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v7 = 1;
      IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      Status = Irp->IoStatus.Status;
      if ( Status < 0 || *((_DWORD *)DeviceExtension + 59) != 3 )
        goto LABEL_86;
      goto LABEL_47;
    case 9u:
      if ( !DeviceExtension
        || *((_DWORD *)DeviceExtension + 4) != 1953656900
        || (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) > 1 )
      {
        goto LABEL_15;
      }
      v7 = 1;
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
    if ( DeviceExtension[483] )
      DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    v14 = *((_DWORD *)DeviceExtension + 69) & 7;
    *(_DWORD *)&DeviceExtension[4 * v14 + 244] = *((_DWORD *)DeviceExtension + 60);
    v15 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    v16 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
    *((_DWORD *)DeviceExtension + 60) = v15;
    *((_DWORD *)DeviceExtension + 59) = 6;
    if ( !v16 || *((_DWORD *)DeviceExtension + 5) != 2 || (Status = 259, !DeviceExtension[5056]) )
      Status = 0;
    v17 = WdLogNewEntry5_WdEvent(v14);
    *(_QWORD *)(v17 + 24) = DeviceObject;
    WdLogEvent5_WdEvent(v17);
    goto LABEL_86;
  }
  v7 = 1;
  IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  Status = Irp->IoStatus.Status;
  if ( (int)(Status + 0x80000000) < 0 || Status == -1073741637 )
  {
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 4 )
    {
      Irp->IoStatus.Information |= 2uLL;
      Status = 0;
    }
    else if ( DeviceExtension[232] == 1 )
    {
      Irp->IoStatus.Information |= 4uLL;
      Status = 0;
    }
    else
    {
      if ( !DeviceExtension[480] )
        goto LABEL_21;
      Irp->IoStatus.Information |= 0x22uLL;
      Status = 0;
    }
LABEL_23:
    Irp->IoStatus.Status = Status;
    IofCompleteRequest(Irp, 1);
    return (unsigned int)Status;
  }
LABEL_21:
  if ( Status == 259 )
  {
    if ( *((_QWORD *)DeviceExtension + 624) )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, 0x80000000LL, v12);
      v31[3] = 275LL;
      v31[4] = 21LL;
      v31[5] = 259LL;
      WdLogEvent5_WdCriticalError(v31);
    }
    v32 = (void *)*((_QWORD *)DeviceExtension + 625);
    if ( v32 )
    {
      v33 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 4896), v32);
      *((_QWORD *)DeviceExtension + 625) = 0LL;
      v36 = v33;
      if ( v33 )
      {
        MasterIrp = v33->AssociatedIrp.MasterIrp;
        if ( CurrentStackLocation->MinorFunction == 1
          || CurrentStackLocation->MinorFunction == 5
          || CurrentStackLocation->MinorFunction == 23 )
        {
          *(_DWORD *)&MasterIrp->Type = 0;
        }
        else
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(
                            v34,
                            (unsigned int)CurrentStackLocation->MinorFunction - 5,
                            v35);
          v38[3] = 275LL;
          v38[4] = 21LL;
          v38[5] = -1073741811LL;
          WdLogEvent5_WdCriticalError(v38);
        }
        v36->IoStatus.Status = 0;
        v36->IoStatus.Information = 4LL;
        IofCompleteRequest(v36, 0);
      }
    }
    *((_QWORD *)DeviceExtension + 624) = Irp;
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IoCsqInsertIrp((PIO_CSQ)(DeviceExtension + 4896), Irp, 0LL);
    return (unsigned int)Status;
  }
  if ( v7 )
    goto LABEL_23;
LABEL_13:
  if ( ((Status + 0x80000000) & 0x80000000) == 0 && Status != -1073741637 )
    goto LABEL_23;
  if ( Status != -1073741637 )
    goto LABEL_62;
LABEL_15:
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return (unsigned int)IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
}
