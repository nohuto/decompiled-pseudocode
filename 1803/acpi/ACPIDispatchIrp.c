/*
 * XREFs of ACPIDispatchIrp @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C000C1D4 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPIDeferredWakeHandler @ 0x1C0020F34 (ACPIDeferredWakeHandler.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00213B4 (WPP_RECORDER_SF_qq.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0029B28 (ACPIInternalDecrementIrpReferenceCount.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C0035CFC (EnableDisableRegionSpacesForDevice.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C003D8A4 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIWakeEmptyRequestQueue @ 0x1C0040A54 (ACPIWakeEmptyRequestQueue.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C0079C98 (ACPIInternalNotifyAvailableDeviceObject.c)
 */

__int64 __fastcall ACPIDispatchIrp(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  KIRQL v5; // al
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned __int8 MajorFunction; // al
  unsigned __int8 MinorFunction; // cl
  unsigned int Status; // edi
  KPROCESSOR_MODE RequestorMode; // dl
  KIRQL v14; // al
  __int64 v15; // rdi
  __int64 v16; // rdi
  unsigned int (__fastcall *v17)(ULONG_PTR, PIRP); // rdi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(ULONG_PTR, PIRP); // rdi
  unsigned int LowPart; // ecx
  bool v22; // zf
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v6 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 16) != 1599293264 )
      KeBugCheckEx(0xA3u, 2uLL, 0x90234uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
    if ( (*(_BYTE *)(v6 + 8) & 4) != 0 )
    {
      v7 = 0LL;
      v6 = 0LL;
    }
    else
    {
      v7 = *(_QWORD *)(v6 + 24);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 680));
    }
  }
  else
  {
    v7 = 0LL;
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  if ( v6 )
  {
    MajorFunction = CurrentStackLocation->MajorFunction;
    MinorFunction = CurrentStackLocation->MinorFunction;
    if ( CurrentStackLocation->MajorFunction == 15 )
    {
LABEL_7:
      v7 += 8LL;
      goto LABEL_8;
    }
    if ( MajorFunction == 27 )
    {
      if ( MinorFunction )
      {
        v16 = *(_QWORD *)(v7 + 24);
        if ( MinorFunction >= 0x1Au )
          v17 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v16 + 208);
        else
          v17 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v16 + 8LL * MinorFunction);
        switch ( MinorFunction )
        {
          case 0xBu:
            if ( (*(_DWORD *)(v6 + 8) & 0x200LL) == 0 )
              _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x200uLL);
            break;
          case 7u:
            if ( *(_DWORD *)(v6 + 320) == 2 && (*(_DWORD *)(v6 + 8) & 0x200LL) != 0 )
            {
              *(_DWORD *)(v6 + 324) = 2;
              *(_DWORD *)(v6 + 320) = 3;
              ACPIInternalNotifyAvailableDeviceObject(v6);
              if ( (*(_DWORD *)(v6 + 620) & 0x300) != 0 )
              {
                LOBYTE(v18) = 1;
                EnableDisableRegionSpacesForDevice(v6, v18);
              }
              ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck(v6);
            }
            break;
          case 2u:
          case 0x17u:
            if ( *(_DWORD *)(v6 + 320) == 3 )
            {
              if ( (*(_DWORD *)(v6 + 620) & 0x300) != 0 )
                EnableDisableRegionSpacesForDevice(v6, 0LL);
              *(_DWORD *)(v6 + 324) = 3;
              *(_DWORD *)(v6 + 320) = 2;
            }
            ACPIThermalReleaseCoolingInterfaces(v6);
            _InterlockedAnd64((volatile signed __int64 *)(v6 + 8), 0xFFFFFFFFFFFFFDFFuLL);
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            *(_QWORD *)(v6 + 704) = &Event;
            ACPIWakeEmptyRequestQueue(v6);
            ACPIInternalDecrementIrpReferenceCount(v6);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 680), 0xFFFFFFFF) != 1 )
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 680));
            *(_QWORD *)(v6 + 704) = 0LL;
            if ( v17 )
            {
              return v17(BugCheckParameter3, Irp);
            }
            else
            {
              Status = -1073741822;
              Irp->IoStatus.Status = -1073741822;
              IofCompleteRequest(Irp, 0);
            }
            return Status;
        }
      }
      else
      {
        v17 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v7 + 16);
      }
      if ( v17 )
      {
        Status = v17(BugCheckParameter3, Irp);
        goto LABEL_10;
      }
      goto LABEL_49;
    }
    if ( MajorFunction == 22 )
    {
      v19 = *(_QWORD *)(v7 + 32);
      if ( MinorFunction >= 4u )
        v20 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))(v19 + 32);
      else
        v20 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))(v19 + 8LL * MinorFunction);
      if ( MinorFunction == 2 && !CurrentStackLocation->Parameters.Create.Options )
      {
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( *(_DWORD *)(v6 + 500) != LowPart )
        {
          v22 = *(_DWORD *)(v6 + 320) == 3;
          *(_DWORD *)(v6 + 500) = LowPart;
          if ( v22 && (*(_DWORD *)(v6 + 620) & 0x300) != 0 )
          {
            LOBYTE(v8) = LowPart == 1;
            EnableDisableRegionSpacesForDevice(v6, v8);
          }
        }
      }
      if ( CurrentStackLocation->MinorFunction == 2
        && !CurrentStackLocation->Parameters.Create.Options
        && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1
        && (*(_QWORD *)(v6 + 8) & 0x8000000000000LL) == 0
        && (*(_DWORD *)(v6 + 952) & 0x1000LL) != 0 )
      {
        Status = ACPIDeferredWakeHandler(v6, Irp);
      }
      else if ( v20 )
      {
        Status = v20(BugCheckParameter3, Irp);
      }
      else
      {
        Status = -1073741822;
        Irp->IoStatus.Status = -1073741822;
        IofCompleteRequest(Irp, 0);
      }
      ACPIInternalDecrementIrpReferenceCount(v6);
      return Status;
    }
    if ( MajorFunction && MajorFunction != 2 )
    {
      if ( MajorFunction == 14 )
      {
        RequestorMode = Irp->RequestorMode;
        if ( RequestorMode
          && (Irp->Flags & 0x400000) == 0
          && (!RootDeviceExtension
           || BugCheckParameter3 != *(_QWORD *)(RootDeviceExtension + 720)
           || !SeSinglePrivilegeCheck((LUID)7LL, RequestorMode)) )
        {
          v14 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v15 = *(_QWORD *)(BugCheckParameter3 + 64);
          if ( v15 && *(_DWORD *)(v15 + 16) != 1599293264 )
            KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
          if ( *(_QWORD *)(v15 + 728) )
          {
            ++Irp->CurrentLocation;
            ++Irp->Tail.Overlay.CurrentStackLocation;
            Status = IofCallDriver(*(PDEVICE_OBJECT *)(v15 + 728), Irp);
            goto LABEL_10;
          }
          Status = Irp->IoStatus.Status;
          goto LABEL_50;
        }
        goto LABEL_7;
      }
      if ( MajorFunction == 23 )
        v7 += 40LL;
      else
        v7 += 48LL;
    }
LABEL_8:
    if ( *(_QWORD *)v7 )
    {
      Status = (*(__int64 (__fastcall **)(ULONG_PTR, PIRP))v7)(BugCheckParameter3, Irp);
      goto LABEL_10;
    }
LABEL_49:
    Status = -1073741822;
    Irp->IoStatus.Status = -1073741822;
LABEL_50:
    IofCompleteRequest(Irp, 0);
LABEL_10:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 680), 0xFFFFFFFF) == 1 )
      KeSetEvent(*(PRKEVENT *)(v6 + 704), 0, 0);
    return Status;
  }
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_qq(
    WPP_GLOBAL_Control->DeviceExtension,
    v8,
    6,
    17,
    (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids,
    BugCheckParameter3,
    (char)Irp);
  Irp->IoStatus.Status = -1073741810;
  IofCompleteRequest(Irp, 0);
  return 3221225486LL;
}
