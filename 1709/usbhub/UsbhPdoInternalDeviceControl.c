/*
 * XREFs of UsbhPdoInternalDeviceControl @ 0x1C0010A80
 * Callers:
 *     <none>
 * Callees:
 *     UsbhWait @ 0x1C0005CE4 (UsbhWait.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0008F98 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0009B18 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoReturnHubCount @ 0x1C0009D40 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C0009DE0 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1C0009FAC (UsbhFdoReturnTopologyAddress.c)
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0010FC0 (UsbhFdoReturnPortStatus.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhSetPdo_AllowIo @ 0x1C00198DC (UsbhSetPdo_AllowIo.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0024DB0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C00290E0 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C003B874 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003B924 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoSelectInterfacePdo @ 0x1C003BB08 (UsbhFdoSelectInterfacePdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003BC1C (UsbhFdoValidateConnectionPdo.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D59C (WPP_RECORDER_SF_q.c)
 *     UsbhFdoCyclePdoPort @ 0x1C003E7CC (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C003E928 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C003E984 (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C003EA64 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C003EB40 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C003ED40 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C003F10C (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C003F168 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnHubName @ 0x1C003F214 (UsbhFdoReturnHubName.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003F2AC (UsbhFdoSubmitPdoIdleNotification.c)
 *     USBHUB_TriggerCallBacks @ 0x1C004B944 (USBHUB_TriggerCallBacks.c)
 *     UsbhIdleIrp_Event @ 0x1C0056DEC (UsbhIdleIrp_Event.c)
 */

__int64 __fastcall UsbhPdoInternalDeviceControl(_QWORD *BugCheckParameter3, IRP *BugCheckParameter4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v5; // r14
  unsigned int LowPart; // ebx
  __int64 v7; // rbp
  KSPIN_LOCK *v8; // r15
  KIRQL v9; // al
  KIRQL v10; // r12
  _QWORD *PoolWithTag; // rax
  __int64 v12; // rbp
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  unsigned int v15; // ebp
  __int64 result; // rax
  struct _DEVICE_OBJECT *v17; // r9
  PDEVICE_OBJECT *DeviceExtension; // r8
  __int64 v19; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  NTSTATUS v21; // eax
  __int64 v22; // rbp
  unsigned int v23; // r15d
  _QWORD *v24; // rbx
  KIRQL v25; // r12
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  _QWORD *v28; // r8
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  __int64 v32; // r15
  _IO_STACK_LOCATION *v33; // rbp
  unsigned int Status; // ebx
  __int64 *v35; // r14
  __int64 v36; // rax
  unsigned int v37; // ebx
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  __int64 v43; // rcx
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  unsigned int v47; // ebx
  unsigned int v48; // ebx
  unsigned int v49; // ebx
  int v50; // eax
  int v51; // [rsp+70h] [rbp+8h]

  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  if ( !BugCheckParameter3 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = BugCheckParameter3[8];
  if ( !v5 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
  if ( *(_DWORD *)v5 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  switch ( LowPart )
  {
    case 0x220FB3u:
      UsbhWait(*(_QWORD *)(v5 + 1176), 100);
      if ( *(_BYTE *)(v5 + 2733) )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            3,
            10,
            (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids);
        Log(*(_QWORD *)(v5 + 1176), 256, 1397903939, 0, *(_QWORD *)(v5 + 1176));
        UsbhSetPdo_AllowIo(v43, BugCheckParameter3);
        BugCheckParameter4->IoStatus.Status = 0;
        IofCompleteRequest(BugCheckParameter4, 0);
        result = 0LL;
        *(_QWORD *)(v5 + 2776) = 0LL;
        *(_BYTE *)(v5 + 2733) = 0;
        return result;
      }
      if ( *(_DWORD *)(v5 + 784) != 2 )
        goto LABEL_121;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          3,
          11,
          (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids);
      Log(*(_QWORD *)(v5 + 1176), 256, 1397903953, 0, *(_QWORD *)(v5 + 1176));
      *(_QWORD *)(v5 + 2776) = BugCheckParameter4;
LABEL_103:
      BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      return 259LL;
    case 0x220FABu:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)BugCheckParameter4,
          3,
          12,
          (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids,
          *(_QWORD *)(v5 + 1176));
      Log(*(_QWORD *)(v5 + 1176), 256, 1397903944, 0, *(_QWORD *)(v5 + 1176));
      *(_QWORD *)(v5 + 2784) = BugCheckParameter4;
      goto LABEL_103;
    case 0x220463u:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)BugCheckParameter4,
          1,
          13,
          (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids,
          *(_QWORD *)(v5 + 840));
      BugCheckParameter4->IoStatus.Status = 0;
      IofCompleteRequest(BugCheckParameter4, 0);
      *(_DWORD *)(v5 + 1424) |= 0x80000u;
      return 0LL;
    case 0x220003u:
      v51 = 1232023604;
      goto LABEL_11;
    case 0x220013u:
      v51 = 1232023605;
      goto LABEL_11;
  }
  if ( LowPart <= 0x220424 )
  {
    if ( LowPart == 2229284 )
    {
      v51 = 1232023602;
      goto LABEL_11;
    }
    if ( LowPart > 0x22001F )
    {
      switch ( LowPart )
      {
        case 0x220020u:
          v51 = 1232023651;
          goto LABEL_11;
        case 0x220027u:
          v51 = 1232023653;
          goto LABEL_11;
        case 0x22002Bu:
          v51 = 1232023654;
          goto LABEL_11;
        case 0x220420u:
          v51 = 1232023603;
          goto LABEL_11;
      }
      goto LABEL_78;
    }
    if ( LowPart == 2228255 )
    {
      v51 = 1232023650;
      goto LABEL_11;
    }
    if ( LowPart != 2228231 )
    {
      switch ( LowPart )
      {
        case 0x22000Fu:
          v51 = 1232023601;
          goto LABEL_11;
        case 0x220017u:
          v51 = 1232023649;
          goto LABEL_11;
        case 0x22001Bu:
          v51 = 1232023600;
          goto LABEL_11;
      }
      goto LABEL_78;
    }
LABEL_128:
    v51 = 1232023609;
    goto LABEL_11;
  }
  if ( LowPart == 2229327 )
  {
    v51 = 1232023856;
    goto LABEL_11;
  }
  if ( LowPart > 0x22044F )
  {
LABEL_121:
    if ( LowPart != 2232243 )
    {
      switch ( LowPart )
      {
        case 0x491404u:
          v51 = 1232023857;
          goto LABEL_11;
        case 0x491408u:
          v51 = 1232023858;
          goto LABEL_11;
        case 0x49140Fu:
          v51 = 1232023859;
          goto LABEL_11;
      }
LABEL_78:
      v51 = LowPart;
      goto LABEL_11;
    }
    goto LABEL_128;
  }
  switch ( LowPart )
  {
    case 0x22042Cu:
      v51 = 1232023652;
      break;
    case 0x220433u:
      v51 = 1232023607;
      break;
    case 0x220437u:
      v51 = 1232023608;
      break;
    case 0x22043Bu:
      v51 = 1232023606;
      break;
    default:
      goto LABEL_78;
  }
LABEL_11:
  v7 = BugCheckParameter3[8];
  if ( !v7 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  v8 = (KSPIN_LOCK *)(v7 + 1208);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 1208));
  v10 = v9;
  if ( *(_DWORD *)(v7 + 784) == 2 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 1208), v9);
    v15 = -1073741810;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      v12 = v7 + 1216;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[4] = 0LL;
      *(_DWORD *)PoolWithTag = 1330201673;
      *((_DWORD *)PoolWithTag + 8) = v51;
      PoolWithTag[3] = BugCheckParameter4;
      v13 = PoolWithTag + 1;
      v14 = *(_QWORD **)(v12 + 8);
      if ( *v14 != v12 )
        __fastfail(3u);
      *v13 = v12;
      v13[1] = v14;
      *v14 = v13;
      *(_QWORD *)(v12 + 8) = v13;
    }
    else
    {
      ++*(_DWORD *)(v7 + 1256);
    }
    KeReleaseSpinLock(v8, v10);
    v15 = 0;
  }
  if ( (v15 & 0xC0000000) == 0xC0000000 )
  {
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    BugCheckParameter4->IoStatus.Status = v15;
    IofCompleteRequest(BugCheckParameter4, 0);
    return v15;
  }
  if ( LowPart == 2228227 )
  {
    v17 = *(struct _DEVICE_OBJECT **)(v5 + 1176);
    if ( !v17 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    DeviceExtension = (PDEVICE_OBJECT *)v17->DeviceExtension;
    if ( !DeviceExtension )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v5 + 1176), 0LL);
    if ( *(_DWORD *)DeviceExtension != 541218120 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v5 + 1176), v17->DeviceExtension);
    v19 = BugCheckParameter3[8];
    if ( !v19 )
      UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
    if ( *(_DWORD *)v19 != 1329877064 )
      UsbhTrapFatal_Dbg(BugCheckParameter3, v19);
    SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    SecurityContext->AccessState = *(_ACCESS_STATE **)(v19 + 1152);
    switch ( WORD1(SecurityContext->SecurityQos) )
    {
      case 0:
        return (unsigned int)UsbhFdoSelectConfigurationPdo(v17, BugCheckParameter3, BugCheckParameter4);
      case 1:
        return (unsigned int)UsbhFdoSelectInterfacePdo(v17, BugCheckParameter3, BugCheckParameter4);
      case 0x13:
        if ( (*(_DWORD *)(v19 + 1424) & 0x80000) == 0 )
          goto LABEL_28;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            1,
            19,
            (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
            *(_QWORD *)(v19 + 840));
        goto LABEL_172;
      case 0x1E:
      case 0x30:
      case 0x31:
        return (unsigned int)UsbhFdoValidateConnectionPdo(v17, BugCheckParameter3, BugCheckParameter4);
      case 0x2A:
        return (unsigned int)UsbhFdoGetMsDescriptorPdo(v17, BugCheckParameter3, BugCheckParameter4);
      default:
LABEL_28:
        ++BugCheckParameter4->CurrentLocation;
        ++BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
        v21 = IofCallDriver(DeviceExtension[152], BugCheckParameter4);
        v22 = BugCheckParameter3[8];
        v23 = v21;
        if ( !v22 )
          UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
        if ( *(_DWORD *)v22 != 1329877064 )
          UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
        v24 = (_QWORD *)(v22 + 1216);
        v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 1208));
        if ( (_QWORD *)*v24 == v24 )
          goto LABEL_176;
        v26 = (_QWORD *)*v24;
        if ( !*v24 || v26 == v24 )
          goto LABEL_176;
        break;
    }
    while ( (IRP *)v26[2] != BugCheckParameter4 )
    {
      v26 = (_QWORD *)*v26;
      if ( v26 == v24 )
      {
LABEL_176:
        v50 = *(_DWORD *)(v22 + 1256);
        if ( !v50 )
        {
          USBHUB_TriggerCallBacks(BugCheckParameter3);
          KeBugCheckEx(0xFEu, 8uLL, 4uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        }
        *(_DWORD *)(v22 + 1256) = v50 - 1;
        goto LABEL_39;
      }
    }
    v27 = (_QWORD *)*v26;
    if ( *(_QWORD **)(*v26 + 8LL) != v26 || (v28 = (_QWORD *)v26[1], (_QWORD *)*v28 != v26) )
      __fastfail(3u);
    *v28 = v27;
    v27[1] = v28;
    ExFreePoolWithTag(v26 - 1, 0);
LABEL_39:
    if ( (_QWORD *)*v24 != v24 || *(_DWORD *)(v22 + 1256) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 1208), v25);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 1208), v25);
      KeSetEvent((PRKEVENT)(v22 + 1232), 0, 0);
    }
    return v23;
  }
  if ( LowPart == 2228243 )
    return UsbhFdoReturnPortStatus(*(_QWORD *)(v5 + 1176), BugCheckParameter3, BugCheckParameter4);
  if ( LowPart <= 0x22042C )
  {
    if ( LowPart != 2229292 )
    {
      if ( LowPart > 0x220020 )
      {
        v44 = LowPart - 2228263;
        if ( !v44 )
          return UsbhFdoSubmitPdoIdleNotification(
                   *(_QWORD *)(v5 + 1176),
                   (ULONG_PTR)BugCheckParameter3,
                   (ULONG_PTR)BugCheckParameter4);
        v45 = v44 - 4;
        if ( !v45 )
          return UsbhFdoRecordFailure(
                   *(_QWORD *)(v5 + 1176),
                   (ULONG_PTR)BugCheckParameter3,
                   (ULONG_PTR)BugCheckParameter4);
        v46 = v45 - 1013;
        if ( !v46 )
          return UsbhFdoReturnDeviceBusInfo(*(_QWORD *)(v5 + 1176), BugCheckParameter3, BugCheckParameter4);
        if ( v46 == 4 )
          return UsbhFdoReturnControllerName(*(_QWORD *)(v5 + 1176), BugCheckParameter3, BugCheckParameter4);
        goto LABEL_158;
      }
      if ( LowPart == 2228256 )
        return UsbhFdoReturnHubName(*(_QWORD *)(v5 + 1176), BugCheckParameter3, BugCheckParameter4);
      v37 = LowPart - 2228231;
      if ( v37 )
      {
        v38 = v37 - 8;
        if ( !v38 )
          return UsbhFdoReturnRootHubPdo(*(_QWORD *)(v5 + 1176), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
        v39 = v38 - 8;
        if ( !v39 )
        {
          BugCheckParameter4->IoStatus.Status = 0;
          IofCompleteRequest(BugCheckParameter4, 0);
          UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
          return 0LL;
        }
        v40 = v39 - 4;
        if ( !v40 )
          return UsbhFdoReturnHubCount(*(_QWORD *)(v5 + 1176), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
        if ( v40 == 4 )
          return UsbhFdoCyclePdoPort(
                   *(_QWORD *)(v5 + 1176),
                   (ULONG_PTR)BugCheckParameter3,
                   (ULONG_PTR)BugCheckParameter4);
        goto LABEL_158;
      }
      return UsbhFdoResetPdoPort(
               *(PDEVICE_OBJECT *)(v5 + 1176),
               (ULONG_PTR)BugCheckParameter3,
               (ULONG_PTR)BugCheckParameter4);
    }
LABEL_172:
    v23 = -1073741637;
    BugCheckParameter4->IoStatus.Status = -1073741637;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return v23;
  }
  if ( LowPart == 2229327 )
    return UsbhFdoReturnDeviceConfigInfo(*(_QWORD *)(v5 + 1176), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
  if ( LowPart > 0x22044F )
  {
    v47 = LowPart - 2232243;
    if ( v47 )
    {
      v48 = v47 - 2557009;
      if ( !v48 )
        return UsbhFdoHandleGetDumpDataIoctl(*(_QWORD *)(v5 + 1176), BugCheckParameter3, BugCheckParameter4);
      v49 = v48 - 4;
      if ( !v49 )
        return UsbhFdoHandleFreeDumpDataIoctl(*(_QWORD *)(v5 + 1176), BugCheckParameter3, BugCheckParameter4);
      if ( v49 != 7 )
        goto LABEL_158;
      return UsbhFdoHandleNotifyForwardProgress(*(_QWORD *)(v5 + 1176), BugCheckParameter3, BugCheckParameter4);
    }
    return UsbhFdoResetPdoPort(
             *(PDEVICE_OBJECT *)(v5 + 1176),
             (ULONG_PTR)BugCheckParameter3,
             (ULONG_PTR)BugCheckParameter4);
  }
  v30 = LowPart - 2229299;
  if ( !v30 )
    return UsbhFdoReturnDeviceHandle(*(_QWORD *)(v5 + 1176), BugCheckParameter3, BugCheckParameter4, 0LL);
  v31 = v30 - 4;
  if ( !v31 )
  {
    v32 = *(_QWORD *)(v5 + 1176);
    v33 = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
    Status = -1073741811;
    PdoExt(BugCheckParameter3);
    v35 = (__int64 *)v33->Parameters.Create.SecurityContext;
    if ( v35 )
    {
      v36 = UsbhRefPdoDeviceHandle(v32, BugCheckParameter3, v33->Parameters.QueryDirectory.FileName, 1212445810LL);
      *v35 = v36;
      if ( v36 )
        Status = 0;
    }
    BugCheckParameter4->IoStatus.Status = Status;
    goto LABEL_62;
  }
  v41 = v31 - 4;
  if ( v41 )
  {
    v42 = v41 - 4;
    if ( !v42 )
      return UsbhFdoReturnTopologyAddress(*(_QWORD *)(v5 + 1176), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    if ( v42 == 4 )
      return UsbhIdleIrp_Event(*(_QWORD *)(v5 + 1176), BugCheckParameter3, BugCheckParameter4, 7LL, 0);
LABEL_158:
    Status = BugCheckParameter4->IoStatus.Status;
LABEL_62:
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return Status;
  }
  return UsbhFdoReturnTtDeviceHandle(*(_QWORD *)(v5 + 1176), BugCheckParameter3, BugCheckParameter4);
}
