/*
 * XREFs of UsbhPdoPnp_StartDevice @ 0x1C0019BB0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0013140 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhSetPdo_AllowIo @ 0x1C00198DC (UsbhSetPdo_AllowIo.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C001BCF4 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001C0E0 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDisableTimerObject @ 0x1C001CC00 (UsbhDisableTimerObject.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C001FE2C (UsbhEtwLogDeviceDescription.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C0020330 (UsbhReadPdoRegistryKeys.c)
 *     Usbh__TestPoint__Ulong @ 0x1C0023280 (Usbh__TestPoint__Ulong.c)
 *     UsbhPdoSetDeviceData @ 0x1C0024B84 (UsbhPdoSetDeviceData.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C0026EB4 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoRegisterWmi @ 0x1C002776C (UsbhPdoRegisterWmi.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D59C (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 *     UsbhUpdateSqmFlags @ 0x1C0073008 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhPdoPnp_StartDevice(PDEVICE_OBJECT Pdo, PIRP Irp)
{
  __int64 v4; // rsi
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // r13
  unsigned int DeviceProperty; // ebp
  void *v10; // rcx
  __int64 v11; // rcx
  PVOID PoolWithTag; // rax
  void *v13; // rdi
  GUID *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // edi
  __int64 v20; // rdi
  int v21; // [rsp+48h] [rbp-30h]
  ULONG ResultLength; // [rsp+88h] [rbp+10h] BYREF

  v4 = PdoExt(Pdo);
  UsbhEtwLogDeviceIrpEvent(v4, Irp, &USBHUB_ETW_EVENT_DEVICE_START_DISPATCH, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1,
      14,
      (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids,
      (char)Pdo);
  if ( *(_DWORD *)(PdoExt(Pdo) + 1120) == 101 )
  {
    v18 = 0;
    goto LABEL_23;
  }
  UsbhSetPdo_AllowIo(v6, (__int64)Pdo);
  UsbhDisableTimerObject(*(_QWORD *)(v4 + 1176), v4 + 1696);
  v7 = PdoExt(Pdo);
  v8 = (_QWORD *)UsbhIncHubBusy(*(_QWORD *)(v4 + 1176), v7 + 944, (__int64)Pdo, 1346728819, 1);
  KeWaitForSingleObject((PVOID)(v4 + 2880), Executive, 0, 0, 0LL);
  DeviceProperty = UsbhPdoPnp_EnablePdo(Pdo);
  if ( *(_DWORD *)(PdoExt(Pdo) + 1120) == 103 || *(_DWORD *)(PdoExt(Pdo) + 1120) == 102 )
  {
    v20 = PdoExt(Pdo);
    IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0, 0, 0LL);
    *(_DWORD *)(v20 + 2812) = 0;
    if ( (*(_DWORD *)(v4 + 1132) & 4) != 0 )
    {
      DeviceProperty = 0;
      goto LABEL_20;
    }
  }
  if ( (DeviceProperty & 0xC0000000) != 0xC0000000 && *(_DWORD *)(PdoExt(Pdo) + 1120) != 103 )
  {
    v10 = *(void **)(v4 + 2232);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      *(_QWORD *)(v4 + 2232) = 0LL;
    }
    DeviceProperty = IoGetDeviceProperty(Pdo, DevicePropertyDeviceDescription, 0, 0LL, &ResultLength);
    if ( DeviceProperty != -1073741789 || !ResultLength )
      goto LABEL_15;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, ResultLength, 0x42554855u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_20;
    memset(PoolWithTag, 0, ResultLength);
    DeviceProperty = IoGetDeviceProperty(Pdo, DevicePropertyDeviceDescription, ResultLength, v13, &ResultLength);
    if ( (DeviceProperty & 0x80000000) == 0 )
    {
      *(_QWORD *)(v4 + 2232) = v13;
      *(_DWORD *)(v4 + 2240) = ResultLength;
      UsbhEtwLogDeviceDescription(v4, &USBHUB_ETW_EVENT_DEVICE_START_DEVICE_DESCRIPTION);
LABEL_15:
      DeviceProperty = UsbhReadPdoRegistryKeys(v11, Pdo);
      if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
      {
        UsbhEtwLogDeviceIrpEvent(v4, Irp, &USBHUB_ETW_EVENT_DEVICE_START_REGISTRY_FAILURE, DeviceProperty);
      }
      else
      {
        v14 = &GUID_DEVINTERFACE_USB_HUB;
        if ( (*(_DWORD *)(v4 + 1412) & 4) == 0 )
          v14 = &GUID_DEVINTERFACE_USB_DEVICE;
        DeviceProperty = UsbhPdoCreateSymbolicLink(Pdo, v14);
        if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
          UsbhEtwLogDeviceIrpEvent(v4, Irp, &USBHUB_ETW_EVENT_DEVICE_START_SYMBOLIC_LINK_FAILURE, DeviceProperty);
        else
          UsbhPdoRegisterWmi(Pdo);
      }
      goto LABEL_20;
    }
    ExFreePoolWithTag(v13, 0);
  }
LABEL_20:
  v15 = PdoExt(Pdo);
  v16 = ((unsigned __int8)*(_DWORD *)(v15 + 12) + 1) & 7;
  *(_DWORD *)(v15 + 12) = v16;
  v16 *= 32LL;
  *(_DWORD *)(v16 + v15 + 528) = 1;
  *(_DWORD *)(v16 + v15 + 532) = *(_DWORD *)(v15 + 1120);
  *(_DWORD *)(v16 + v15 + 536) = 101;
  *(_DWORD *)(v15 + 1120) = 101;
  KeSetEvent((PRKEVENT)(v4 + 2880), 0, 0);
  PdoExt(Pdo);
  UsbhDecHubBusy(*(_QWORD *)(v4 + 1176), v17, v8);
  UsbhPdoSetDeviceData(*(_QWORD *)(v4 + 1176), Pdo, Pdo);
  v18 = Usbh__TestPoint__Ulong(*(_QWORD *)(v4 + 1176), 2LL, DeviceProperty, *(unsigned __int16 *)(v4 + 1420));
  if ( v18 < 0 )
  {
    LOBYTE(v21) = 0;
    UsbhException(*(_QWORD *)(v4 + 1176), *(unsigned __int16 *)(v4 + 1420), 103, 0, 0, v18, 0, usbfile_pdo_c, 1564, v21);
  }
  else if ( (*(_DWORD *)(v4 + 1412) & 1) != 0 )
  {
    LOBYTE(v21) = 0;
    UsbhException(*(_QWORD *)(v4 + 1176), *(unsigned __int16 *)(v4 + 1420), 42, 0, 0, v18, 0, usbfile_pdo_c, 1548, v21);
  }
LABEL_23:
  Log(*(_QWORD *)(v4 + 1176), 256, 1398035004, (__int64)Irp, v18);
  UsbhEtwLogDeviceIrpEvent(v4, Irp, &USBHUB_ETW_EVENT_DEVICE_START_COMPLETE, 0LL);
  Irp->IoStatus.Status = v18;
  IofCompleteRequest(Irp, 0);
  UsbhUpdateSqmFlags(Pdo);
  return (unsigned int)v18;
}
