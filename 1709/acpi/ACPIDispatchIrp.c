/*
 * XREFs of ACPIDispatchIrp @ 0x1C0004020
 * Callers:
 *     <none>
 * Callees:
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C000129C (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIWakeEmptyRequestQueue @ 0x1C0001674 (ACPIWakeEmptyRequestQueue.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0003FF4 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C000F4DC (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0021340 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     ACPIDeferredWakeHandler @ 0x1C004B064 (ACPIDeferredWakeHandler.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C0055DF0 (EnableDisableRegionSpacesForDevice.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C008CF5C (ACPIInternalNotifyAvailableDeviceObject.c)
 */

__int64 __fastcall ACPIDispatchIrp(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  KIRQL v5; // al
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // edx
  unsigned __int8 MajorFunction; // al
  __int64 MinorFunction; // rdx
  unsigned __int8 v11; // cl
  __int64 (__fastcall *v12)(ULONG_PTR, PIRP); // rax
  unsigned int Status; // edi
  KPROCESSOR_MODE RequestorMode; // dl
  KIRQL v16; // al
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned int (__fastcall *v19)(ULONG_PTR, PIRP); // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 (__fastcall *v22)(ULONG_PTR, PIRP); // rdi
  unsigned int LowPart; // ecx
  bool v24; // zf
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
    v11 = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction == 22 )
    {
      v21 = *(_QWORD *)(v7 + 32);
      if ( (unsigned __int8)MinorFunction >= 4u )
        v22 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))(v21 + 32);
      else
        v22 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))(v21 + 8LL * (unsigned __int8)MinorFunction);
      if ( (_BYTE)MinorFunction == 2 && !CurrentStackLocation->Parameters.Create.Options )
      {
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( *(_DWORD *)(v6 + 500) != LowPart )
        {
          v24 = *(_DWORD *)(v6 + 320) == 3;
          *(_DWORD *)(v6 + 500) = LowPart;
          if ( v24 && (*(_DWORD *)(v6 + 620) & 0x300) != 0 )
          {
            LOBYTE(MinorFunction) = LowPart == 1;
            EnableDisableRegionSpacesForDevice(v6, MinorFunction);
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
      else if ( v22 )
      {
        Status = v22(BugCheckParameter3, Irp);
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
    if ( MajorFunction == 27 )
    {
      if ( (_BYTE)MinorFunction )
      {
        v18 = *(_QWORD *)(v7 + 24);
        if ( (unsigned __int8)MinorFunction >= 0x1Au )
          v19 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v18 + 208);
        else
          v19 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v18 + 8LL * (unsigned __int8)MinorFunction);
        switch ( (_BYTE)MinorFunction )
        {
          case 0xB:
            if ( (*(_DWORD *)(v6 + 8) & 0x200LL) == 0 )
              _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x200uLL);
            break;
          case 7:
            if ( *(_DWORD *)(v6 + 320) == 2 && (*(_DWORD *)(v6 + 8) & 0x200LL) != 0 )
            {
              *(_DWORD *)(v6 + 324) = 2;
              *(_DWORD *)(v6 + 320) = 3;
              ACPIInternalNotifyAvailableDeviceObject(v6);
              if ( (*(_DWORD *)(v6 + 620) & 0x300) != 0 )
              {
                LOBYTE(v20) = 1;
                EnableDisableRegionSpacesForDevice(v6, v20);
              }
              ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck(v6);
            }
            break;
          case 2:
          case 0x17:
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
            if ( v19 )
            {
              return v19(BugCheckParameter3, Irp);
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
        v19 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v7 + 16);
      }
      if ( v19 )
      {
        Status = v19(BugCheckParameter3, Irp);
        goto LABEL_13;
      }
      goto LABEL_74;
    }
    if ( MajorFunction == 15 )
      goto LABEL_9;
    if ( v11 && v11 != 2 )
    {
      if ( v11 == 14 )
      {
        RequestorMode = Irp->RequestorMode;
        if ( RequestorMode
          && (Irp->Flags & 0x400000) == 0
          && (!RootDeviceExtension
           || BugCheckParameter3 != *(_QWORD *)(RootDeviceExtension + 720)
           || !SeSinglePrivilegeCheck((LUID)7LL, RequestorMode)) )
        {
          v16 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v17 = *(_QWORD *)(BugCheckParameter3 + 64);
          if ( v17 && *(_DWORD *)(v17 + 16) != 1599293264 )
            KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
LABEL_28:
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
          if ( *(_QWORD *)(v17 + 728) )
          {
            ++Irp->CurrentLocation;
            ++Irp->Tail.Overlay.CurrentStackLocation;
            Status = IofCallDriver(*(PDEVICE_OBJECT *)(v17 + 728), Irp);
            goto LABEL_13;
          }
          Status = Irp->IoStatus.Status;
          goto LABEL_75;
        }
LABEL_9:
        v7 += 8LL;
        goto LABEL_10;
      }
      if ( v11 == 23 )
        v7 += 40LL;
      else
        v7 += 48LL;
    }
LABEL_10:
    v12 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))v7;
    if ( *(_QWORD *)v7 )
    {
      if ( v12 != ACPIDispatchForwardIrp )
      {
        Status = v12(BugCheckParameter3, Irp);
        goto LABEL_13;
      }
      v16 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v17 = *(_QWORD *)(BugCheckParameter3 + 64);
      if ( v17 && *(_DWORD *)(v17 + 16) != 1599293264 )
        KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
      goto LABEL_28;
    }
LABEL_74:
    Status = -1073741822;
    Irp->IoStatus.Status = -1073741822;
LABEL_75:
    IofCompleteRequest(Irp, 0);
LABEL_13:
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
    (__int64)&WPP_e0570baefa8c316ce3c0f07f4fd0ec2c_Traceguids,
    BugCheckParameter3,
    (char)Irp);
  Irp->IoStatus.Status = -1073741810;
  IofCompleteRequest(Irp, 0);
  return 3221225486LL;
}
