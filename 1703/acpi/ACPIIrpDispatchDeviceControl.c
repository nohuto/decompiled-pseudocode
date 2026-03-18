/*
 * XREFs of ACPIIrpDispatchDeviceControl @ 0x1C00013B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001010 (ACPIDispatchForwardIrp.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C0013D34 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlEnumChildren @ 0x1C001E03C (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C00251F4 (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlRegisterOpRegionHandler @ 0x1C0026EEC (ACPIIoctlRegisterOpRegionHandler.c)
 *     ACPIIoctlAcquireGlobalLock @ 0x1C005068C (ACPIIoctlAcquireGlobalLock.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C005075C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C0050910 (ACPIIoctlAsyncEvalControlMethodEx.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C0050AC0 (ACPIIoctlGetDeviceInformation.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0050D4C (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIIoctlReleaseGlobalLock @ 0x1C0050FB4 (ACPIIoctlReleaseGlobalLock.c)
 *     ACPIIoctlUnRegisterOpRegionHandler @ 0x1C0051030 (ACPIIoctlUnRegisterOpRegionHandler.c)
 *     ACPIIoctlUnregisterDeviceFirmwareLockHandler @ 0x1C0051090 (ACPIIoctlUnregisterDeviceFirmwareLockHandler.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C009F9B4 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C009FA5C (ACPIIoctlTranslateBiosResources.c)
 */

__int64 __fastcall ACPIIrpDispatchDeviceControl(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  KPROCESSOR_MODE RequestorMode; // dl
  ULONG_PTR v5; // rsi
  unsigned int v6; // eax
  KIRQL v7; // al
  __int64 v8; // rdi
  unsigned int Status; // edi
  __int64 result; // rax
  unsigned int LowPart; // ecx
  __int64 v12; // rax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  RequestorMode = Irp->RequestorMode;
  v5 = BugCheckParameter3;
  if ( RequestorMode )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (Irp->Flags & 0x400000) != 0 )
    {
      BugCheckParameter3 = LowPart - 3325952;
      if ( (unsigned int)BugCheckParameter3 > 0x38 )
        return (unsigned int)ACPIDispatchForwardIrp(v5, Irp);
      v12 = 0x100011111000011LL;
      if ( !_bittest64(&v12, BugCheckParameter3) )
        return (unsigned int)ACPIDispatchForwardIrp(v5, Irp);
    }
    else if ( !RootDeviceExtension
           || v5 != *(_QWORD *)(RootDeviceExtension + 720)
           || LowPart != 3325952
           || !SeSinglePrivilegeCheck((LUID)7LL, RequestorMode) )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v8 = *(_QWORD *)(v5 + 64);
      if ( v8 && *(_DWORD *)(v8 + 16) != 1599293264 )
        KeBugCheckEx(0xA3u, 2uLL, 0x9019FuLL, v5, *(_QWORD *)(v5 + 64));
      goto LABEL_5;
    }
  }
  v6 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v6 < 0x32C000 )
  {
LABEL_3:
    v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v8 = *(_QWORD *)(v5 + 64);
    if ( v8 && *(_DWORD *)(v8 + 16) != 1599293264 )
      KeBugCheckEx(0xA3u, 2uLL, 0x9019FuLL, v5, *(_QWORD *)(v5 + 64));
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
  switch ( v6 )
  {
    case 0x32C000u:
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(v5, Irp, CurrentStackLocation);
    case 0x32C004u:
      result = ACPIIoctlEvalControlMethod(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C008u:
      result = ACPIIoctlRegisterOpRegionHandler(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C00Cu:
      return (unsigned int)ACPIIoctlUnRegisterOpRegionHandler(v5, Irp, CurrentStackLocation);
    case 0x32C010u:
      return (unsigned int)ACPIIoctlAcquireGlobalLock(BugCheckParameter3, Irp, CurrentStackLocation);
    case 0x32C014u:
      return (unsigned int)ACPIIoctlReleaseGlobalLock(BugCheckParameter3, Irp, CurrentStackLocation);
    case 0x32C018u:
      result = ACPIIoctlEvalControlMethodEx(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C01Cu:
      return (unsigned int)ACPIIoctlAsyncEvalControlMethodEx(v5, Irp, CurrentStackLocation);
    case 0x32C020u:
      result = ACPIIoctlEnumChildren(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C024u:
      return (unsigned int)ACPIIoctlQueryDeviceBiosName(v5, Irp, CurrentStackLocation);
    case 0x32C028u:
      return (unsigned int)ACPIIoctlGetDeviceInformation(v5, Irp, CurrentStackLocation);
    case 0x32C02Cu:
      return (unsigned int)ACPIIoctlTranslateBiosResources(v5, Irp, CurrentStackLocation);
    case 0x32C030u:
      result = ACPIIoctlRegisterDeviceFirmwareLock(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C034u:
      return (unsigned int)ACPIIoctlUnregisterDeviceFirmwareLockHandler(BugCheckParameter3, Irp, CurrentStackLocation);
    case 0x32C038u:
      return (unsigned int)ACPIIoctlGetDeviceSpecificData(v5, Irp, CurrentStackLocation);
    default:
      goto LABEL_3;
  }
  return result;
}
