/*
 * XREFs of ACPIIrpDispatchDeviceControl @ 0x1C0001220
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001340 (ACPIDispatchForwardIrp.c)
 *     ACPIIoctlAcquireGlobalLock @ 0x1C002B1CC (ACPIIoctlAcquireGlobalLock.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002B29C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlEnumChildren @ 0x1C002BA70 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C002BDC4 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C002CEAC (ACPIIoctlGetDeviceInformation.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002D138 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIIoctlRegisterDeviceFirmwareLock @ 0x1C002D398 (ACPIIoctlRegisterDeviceFirmwareLock.c)
 *     ACPIIoctlRegisterOpRegionHandler @ 0x1C002D410 (ACPIIoctlRegisterOpRegionHandler.c)
 *     ACPIIoctlReleaseGlobalLock @ 0x1C002D4E0 (ACPIIoctlReleaseGlobalLock.c)
 *     ACPIIoctlUnRegisterOpRegionHandler @ 0x1C002D55C (ACPIIoctlUnRegisterOpRegionHandler.c)
 *     ACPIIoctlUnregisterDeviceFirmwareLockHandler @ 0x1C002D5BC (ACPIIoctlUnregisterDeviceFirmwareLockHandler.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C007DDF0 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C007DE98 (ACPIIoctlTranslateBiosResources.c)
 */

__int64 __fastcall ACPIIrpDispatchDeviceControl(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  KPROCESSOR_MODE RequestorMode; // dl
  ULONG_PTR v5; // rsi
  unsigned int LowPart; // eax
  KIRQL v7; // al
  __int64 v8; // rdi
  unsigned int Status; // edi
  __int64 v11; // rax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  RequestorMode = Irp->RequestorMode;
  v5 = BugCheckParameter3;
  if ( RequestorMode )
  {
    BugCheckParameter3 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (Irp->Flags & 0x400000) != 0 )
    {
      if ( (_DWORD)BugCheckParameter3 != 3325956 && (_DWORD)BugCheckParameter3 != 3325952 )
      {
        BugCheckParameter3 = (unsigned int)(BugCheckParameter3 - 3325976);
        if ( (unsigned int)BugCheckParameter3 > 0x30 )
          return (unsigned int)ACPIDispatchForwardIrp(v5, Irp);
        v11 = 0x1111100011111LL;
        if ( !_bittest64(&v11, BugCheckParameter3) )
          return (unsigned int)ACPIDispatchForwardIrp(v5, Irp);
      }
    }
    else if ( !RootDeviceExtension
           || v5 != *(_QWORD *)(RootDeviceExtension + 720)
           || (_DWORD)BugCheckParameter3 != 3325952
           || !SeSinglePrivilegeCheck((LUID)7LL, RequestorMode) )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v8 = *(_QWORD *)(v5 + 64);
      if ( v8 && *(_DWORD *)(v8 + 16) != 1599293264 )
        KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, v5, *(_QWORD *)(v5 + 64));
      goto LABEL_5;
    }
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart < 0x32C000 )
  {
LABEL_3:
    v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v8 = *(_QWORD *)(v5 + 64);
    if ( v8 && *(_DWORD *)(v8 + 16) != 1599293264 )
      KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, v5, *(_QWORD *)(v5 + 64));
LABEL_5:
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
    if ( *(_QWORD *)(v8 + 728) )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 728), Irp);
    }
    else
    {
      Status = Irp->IoStatus.Status;
      IofCompleteRequest(Irp, 0);
    }
    return Status;
  }
  switch ( LowPart )
  {
    case 0x32C000u:
    case 0x32C01Cu:
    case 0x32C040u:
    case 0x32C048u:
      Status = ACPIIoctlAsyncEvalControlMethod(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C004u:
    case 0x32C018u:
    case 0x32C03Cu:
    case 0x32C044u:
      Status = ACPIIoctlEvalControlMethod(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C008u:
      Status = ACPIIoctlRegisterOpRegionHandler(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C00Cu:
      Status = ACPIIoctlUnRegisterOpRegionHandler(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C010u:
      Status = ACPIIoctlAcquireGlobalLock(BugCheckParameter3, Irp, CurrentStackLocation);
      break;
    case 0x32C014u:
      Status = ACPIIoctlReleaseGlobalLock(BugCheckParameter3, Irp, CurrentStackLocation);
      break;
    case 0x32C020u:
      Status = ACPIIoctlEnumChildren(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C024u:
      Status = ACPIIoctlQueryDeviceBiosName(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C028u:
      Status = ACPIIoctlGetDeviceInformation(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C02Cu:
      Status = ACPIIoctlTranslateBiosResources(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C030u:
      Status = ACPIIoctlRegisterDeviceFirmwareLock(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C034u:
      Status = ACPIIoctlUnregisterDeviceFirmwareLockHandler(BugCheckParameter3, Irp, CurrentStackLocation);
      break;
    case 0x32C038u:
      Status = ACPIIoctlGetDeviceSpecificData(v5, Irp, CurrentStackLocation);
      break;
    default:
      goto LABEL_3;
  }
  return Status;
}
