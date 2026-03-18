/*
 * XREFs of DpiFdoDispatchPnp @ 0x1C01F3B50
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiFdoDispatchPnp(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  char *DeviceExtension; // rdi
  int Status; // esi
  char v7; // r12
  UCHAR MinorFunction; // dl
  __int64 (__fastcall *v9)(PDEVICE_OBJECT, PIRP); // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  _OWORD *SecurityContext; // rax
  int v16; // eax
  int v17; // eax
  struct _DEVICE_OBJECT *v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  _QWORD *v21; // rax
  int v22; // eax

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
      *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
      v22 = *((_DWORD *)DeviceExtension + 59);
      *((_DWORD *)DeviceExtension + 59) = 2;
      goto LABEL_69;
    case 1u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( byte_1C007A751 || DeviceExtension[480] )
      {
        v7 = 1;
        Status = -1073741823;
LABEL_71:
        if ( DeviceExtension[483] )
          DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
        ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
        KeLeaveCriticalRegion();
        if ( v7 )
          goto LABEL_24;
        if ( Status >= 0 )
          goto LABEL_76;
        break;
      }
      v20 = *((_DWORD *)DeviceExtension + 59);
      if ( v20 == 6 )
      {
LABEL_70:
        Status = 0;
        goto LABEL_71;
      }
      if ( v20 == 4 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19);
        v21[3] = 275LL;
        v21[4] = 21LL;
        v21[5] = DeviceExtension;
        v21[6] = -1073741823LL;
        WdLogEvent5_WdCriticalError(v21);
      }
      *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
      v22 = *((_DWORD *)DeviceExtension + 59);
      *((_DWORD *)DeviceExtension + 59) = 5;
LABEL_69:
      ++*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 60) = v22;
      goto LABEL_70;
    case 3u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      Status = Irp->IoStatus.Status;
      if ( Status < 0 )
        goto LABEL_39;
      v17 = *((_DWORD *)DeviceExtension + 59);
      if ( v17 != 5 )
      {
        if ( v17 == 6 )
        {
          v18 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
          DeviceExtension[232] = 1;
          IoInvalidateDeviceState(v18);
        }
        goto LABEL_39;
      }
LABEL_38:
      v16 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v16;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
LABEL_39:
      if ( DeviceExtension[483] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      goto LABEL_24;
    case 4u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v12 = *((_DWORD *)DeviceExtension + 69) & 7;
      *(_DWORD *)&DeviceExtension[4 * v12 + 244] = *((_DWORD *)DeviceExtension + 60);
      v13 = *((_DWORD *)DeviceExtension + 59);
      *((_DWORD *)DeviceExtension + 59) = 4;
      goto LABEL_16;
    case 5u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( byte_1C007A751 || DeviceExtension[480] )
        Status = -1073741823;
      else
        Status = -1073741808;
      goto LABEL_39;
    case 6u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      Status = Irp->IoStatus.Status;
      if ( Status < 0 || *((_DWORD *)DeviceExtension + 59) != 3 )
        goto LABEL_39;
      goto LABEL_38;
    case 9u:
      if ( !DeviceExtension
        || *((_DWORD *)DeviceExtension + 4) != 1953656900
        || (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) > 1 )
      {
        goto LABEL_78;
      }
      IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      Status = Irp->IoStatus.Status;
      *(_OWORD *)(DeviceExtension + 1160) = *SecurityContext;
      *(_OWORD *)(DeviceExtension + 1176) = SecurityContext[1];
      *(_OWORD *)(DeviceExtension + 1192) = SecurityContext[2];
      *(_OWORD *)(DeviceExtension + 1208) = SecurityContext[3];
      goto LABEL_24;
    case 0x14u:
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
        else if ( DeviceExtension[480] )
        {
          Irp->IoStatus.Information |= 0x22uLL;
          Status = 0;
        }
      }
      goto LABEL_24;
    case 0x17u:
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v12 = *((_DWORD *)DeviceExtension + 69) & 7;
      *(_DWORD *)&DeviceExtension[4 * v12 + 244] = *((_DWORD *)DeviceExtension + 60);
      v13 = *((_DWORD *)DeviceExtension + 59);
      *((_DWORD *)DeviceExtension + 59) = 6;
LABEL_16:
      ++*((_DWORD *)DeviceExtension + 69);
      Status = 0;
      *((_DWORD *)DeviceExtension + 60) = v13;
      v14 = WdLogNewEntry5_WdEvent(v12, v11);
      *(_QWORD *)(v14 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v14);
      if ( DeviceExtension[483] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      goto LABEL_77;
  }
  if ( Status == -1073741637 )
  {
LABEL_76:
    if ( Status == -1073741637 )
    {
LABEL_78:
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      return (unsigned int)IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
    }
LABEL_77:
    Irp->IoStatus.Status = Status;
    goto LABEL_78;
  }
LABEL_24:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 1);
  return (unsigned int)Status;
}
