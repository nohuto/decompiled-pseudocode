/*
 * XREFs of UsbhPdoPnp_StartDevice @ 0x1C0019630
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000B310 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000BC70 (UsbhIncHubBusy.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhSetPdo_AllowIo @ 0x1C00199D8 (UsbhSetPdo_AllowIo.c)
 *     SET_PDO_SWPNPSTATE @ 0x1C001B318 (SET_PDO_SWPNPSTATE.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001B654 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C001F300 (UsbhReadPdoRegistryKeys.c)
 *     Usbh__TestPoint__Ulong @ 0x1C0022170 (Usbh__TestPoint__Ulong.c)
 *     UsbhPdoSetDeviceData @ 0x1C0024DB8 (UsbhPdoSetDeviceData.c)
 *     UsbhDisableTimerObject @ 0x1C0025130 (UsbhDisableTimerObject.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C0025888 (UsbhEtwLogDeviceDescription.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C00278DC (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C0027CA0 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoRegisterWmi @ 0x1C002801C (UsbhPdoRegisterWmi.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_q @ 0x1C003C2E0 (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 *     UsbhUpdateSqmFlags @ 0x1C0072008 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhPdoPnp_StartDevice(PDEVICE_OBJECT Pdo, PIRP Irp)
{
  _DWORD *v4; // rdi
  int v5; // edx
  __int64 v6; // rcx
  _DWORD *v7; // rax
  _QWORD *v8; // r12
  NTSTATUS DeviceProperty; // ebp
  void *v10; // rcx
  __int64 v11; // rcx
  PVOID PoolWithTag; // rax
  void *v13; // rbx
  GUID *v14; // rdx
  __int64 v15; // rdx
  int v16; // ebx
  _DWORD *v18; // rbx
  void *v19; // r8
  int v20; // [rsp+48h] [rbp-30h]
  ULONG ResultLength; // [rsp+88h] [rbp+10h] BYREF

  v4 = PdoExt((__int64)Pdo);
  UsbhEtwLogDeviceIrpEvent(v4, Irp, &USBHUB_ETW_EVENT_DEVICE_START_DISPATCH, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1,
      14,
      (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids,
      (char)Pdo);
  if ( PdoExt((__int64)Pdo)[280] == 101 )
  {
    v16 = 0;
    goto LABEL_23;
  }
  UsbhSetPdo_AllowIo(v6, Pdo);
  UsbhDisableTimerObject(*((_QWORD *)v4 + 147), v4 + 424);
  v7 = PdoExt((__int64)Pdo);
  v8 = (_QWORD *)UsbhIncHubBusy(*((_QWORD *)v4 + 147), (__int64)(v7 + 236), (__int64)Pdo, 1346728819, 1);
  KeWaitForSingleObject(v4 + 716, Executive, 0, 0, 0LL);
  DeviceProperty = UsbhPdoPnp_EnablePdo(Pdo);
  if ( PdoExt((__int64)Pdo)[280] == 103 || PdoExt((__int64)Pdo)[280] == 102 )
  {
    v18 = PdoExt((__int64)Pdo);
    IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0, 0, 0LL);
    v18[699] = 0;
    if ( (v4[283] & 4) != 0 )
    {
      DeviceProperty = 0;
      goto LABEL_20;
    }
  }
  if ( (DeviceProperty & 0xC0000000) != 0xC0000000 && PdoExt((__int64)Pdo)[280] != 103 )
  {
    v10 = (void *)*((_QWORD *)v4 + 279);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      *((_QWORD *)v4 + 279) = 0LL;
    }
    DeviceProperty = IoGetDeviceProperty(Pdo, DevicePropertyDeviceDescription, 0, 0LL, &ResultLength);
    if ( DeviceProperty == -1073741789 && ResultLength )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, ResultLength, 0x42554855u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_20;
      memset(PoolWithTag, 0, ResultLength);
      DeviceProperty = IoGetDeviceProperty(Pdo, DevicePropertyDeviceDescription, ResultLength, v13, &ResultLength);
      if ( DeviceProperty < 0 )
      {
        ExFreePoolWithTag(v13, 0);
        goto LABEL_20;
      }
      *((_QWORD *)v4 + 279) = v13;
      v4[560] = ResultLength;
      UsbhEtwLogDeviceDescription(v4, &USBHUB_ETW_EVENT_DEVICE_START_DEVICE_DESCRIPTION);
    }
    DeviceProperty = UsbhReadPdoRegistryKeys(v11, Pdo);
    if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
    {
      v19 = &USBHUB_ETW_EVENT_DEVICE_START_REGISTRY_FAILURE;
    }
    else
    {
      v14 = &GUID_DEVINTERFACE_USB_HUB;
      if ( (v4[353] & 4) == 0 )
        v14 = &GUID_DEVINTERFACE_USB_DEVICE;
      DeviceProperty = UsbhPdoCreateSymbolicLink(Pdo, v14);
      if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
      {
        UsbhPdoRegisterWmi(Pdo);
        goto LABEL_20;
      }
      v19 = &USBHUB_ETW_EVENT_DEVICE_START_SYMBOLIC_LINK_FAILURE;
    }
    UsbhEtwLogDeviceIrpEvent(v4, Irp, v19, (unsigned int)DeviceProperty);
  }
LABEL_20:
  SET_PDO_SWPNPSTATE(Pdo, 101LL, 1LL);
  KeSetEvent((PRKEVENT)(v4 + 716), 0, 0);
  PdoExt((__int64)Pdo);
  UsbhDecHubBusy(*((_QWORD *)v4 + 147), v15, v8);
  UsbhPdoSetDeviceData(*((_QWORD *)v4 + 147), Pdo, Pdo);
  v16 = Usbh__TestPoint__Ulong(
          *((_QWORD *)v4 + 147),
          2LL,
          (unsigned int)DeviceProperty,
          *((unsigned __int16 *)v4 + 710));
  if ( v16 < 0 )
  {
    LOBYTE(v20) = 0;
    UsbhException(*((_QWORD *)v4 + 147), *((unsigned __int16 *)v4 + 710), 103, 0, 0, v16, 0, usbfile_pdo_c, 1564, v20);
  }
  else if ( (v4[353] & 1) != 0 )
  {
    LOBYTE(v20) = 0;
    UsbhException(*((_QWORD *)v4 + 147), *((unsigned __int16 *)v4 + 710), 42, 0, 0, v16, 0, usbfile_pdo_c, 1548, v20);
  }
LABEL_23:
  Log(*((_QWORD *)v4 + 147), 256, 1398035004, (__int64)Irp, v16);
  UsbhEtwLogDeviceIrpEvent(v4, Irp, &USBHUB_ETW_EVENT_DEVICE_START_COMPLETE, 0LL);
  Irp->IoStatus.Status = v16;
  IofCompleteRequest(Irp, 0);
  UsbhUpdateSqmFlags(Pdo);
  return (unsigned int)v16;
}
