/*
 * XREFs of USBD_CreateHandle @ 0x1C00A46AC
 * Callers:
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C00941D8 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     USBDInternal_BuildAndSendQueryInterfaceSynchronously @ 0x1C00A4090 (USBDInternal_BuildAndSendQueryInterfaceSynchronously.c)
 *     USBDInternal_BuildServicePath @ 0x1C00A41D4 (USBDInternal_BuildServicePath.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C00A4450 (USBDInternal_QueryUsbVerifierSettings.c)
 */

__int64 __fastcall USBD_CreateHandle(
        _DEVICE_OBJECT *DeviceObject,
        _DEVICE_OBJECT *TargetDeviceObject,
        unsigned int USBDClientContractVersion,
        ULONG PoolTag,
        USBD_HANDLE__ **USBDHandle)
{
  wchar_t *v7; // rsi
  int v10; // ebx
  USBD_HANDLE__ *PoolWithTag; // rax
  USBD_HANDLE__ *v12; // rdi
  int InterfaceSynchronously; // eax
  int v14; // eax
  int v16; // eax
  bool v17; // zf
  void (__fastcall *v18)(_QWORD); // rax
  char v19; // [rsp+30h] [rbp-D0h]
  wchar_t *servicePath; // [rsp+38h] [rbp-C8h] BYREF
  _USB_BUS_INTERFACE_USBDI_V1 usbBusInterface; // [rsp+40h] [rbp-C0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+90h] [rbp-70h] BYREF

  v19 = 0;
  v7 = 0LL;
  servicePath = 0LL;
  if ( KeGetCurrentIrql() )
  {
    if ( LOBYTE(WPP_GLOBAL_WDF_Control.AlignmentRequirement) )
      DbgPrintEx(0x4Du, 0, "Irql Too High\n");
    v10 = -1073741496;
    goto LABEL_63;
  }
  if ( !g_NonPagedPoolInitialized )
  {
    g_NonPagedPoolType = NonPagedPool;
    memset(&VersionInformation, 0, 0x11CuLL);
    VersionInformation.dwOSVersionInfoSize = 284;
    if ( RtlGetVersion(&VersionInformation) >= 0
      && (VersionInformation.dwMajorVersion > 6
       || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
    {
      g_NonPagedPoolType = NonPagedPoolNx;
    }
  }
  g_NonPagedPoolInitialized = 1;
  if ( !DeviceObject )
  {
    if ( LOBYTE(WPP_GLOBAL_WDF_Control.AlignmentRequirement) )
      DbgPrintEx(0x4Du, 0, "DeviceObject cannot be NULL\n");
LABEL_14:
    v10 = -1073741811;
LABEL_63:
    if ( USBDHandle )
      *USBDHandle = 0LL;
    goto LABEL_45;
  }
  if ( !TargetDeviceObject )
  {
    if ( LOBYTE(WPP_GLOBAL_WDF_Control.AlignmentRequirement) )
      DbgPrintEx(0x4Du, 0, "TargetDeviceObject cannot be NULL\n");
    goto LABEL_14;
  }
  if ( USBDClientContractVersion < 0x602 )
  {
    if ( LOBYTE(WPP_GLOBAL_WDF_Control.AlignmentRequirement) )
      DbgPrintEx(0x4Du, 0, "USBDClientContractVersion %d not supported\n", USBDClientContractVersion);
    goto LABEL_14;
  }
  if ( !PoolTag )
  {
    if ( LOBYTE(WPP_GLOBAL_WDF_Control.AlignmentRequirement) )
      DbgPrintEx(0x4Du, 0, "PoolTag must be specified\n");
    goto LABEL_14;
  }
  if ( USBDHandle )
  {
    USBDInternal_BuildServicePath(DeviceObject, &servicePath, PoolTag);
    PoolWithTag = (USBD_HANDLE__ *)ExAllocatePoolWithTag(g_NonPagedPoolType, 0xE8uLL, PoolTag);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( LOBYTE(WPP_GLOBAL_WDF_Control.AlignmentRequirement) )
        DbgPrintEx(0x4Du, 0, "Allocation Failed\n");
      v7 = servicePath;
      v10 = -1073741670;
      goto LABEL_63;
    }
    memset(PoolWithTag, 0, 0xE8uLL);
    v7 = servicePath;
    if ( servicePath )
      USBDInternal_QueryUsbVerifierSettings(DeviceObject, servicePath, (_USBD_INTERFACE_V3 *)(v12 + 2), PoolTag);
    *(_DWORD *)v12 = 1145197397;
    *((_DWORD *)v12 + 54) = 1539;
    *((_DWORD *)v12 + 2) = 100860104;
    *((_DWORD *)v12 + 10) = USBDClientContractVersion;
    *((_QWORD *)v12 + 7) = DeviceObject;
    *((_DWORD *)v12 + 16) = PoolTag;
    *((_QWORD *)v12 + 9) = v12;
    *((_QWORD *)v12 + 26) = TargetDeviceObject;
    *((_DWORD *)v12 + 55) = 1;
    InterfaceSynchronously = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                               DeviceObject,
                               TargetDeviceObject,
                               &GUID_USBD_INTERFACE,
                               (_INTERFACE *)(v12 + 2));
    v10 = InterfaceSynchronously;
    if ( InterfaceSynchronously < 0 )
    {
      if ( LOBYTE(WPP_GLOBAL_WDF_Control.AlignmentRequirement) )
        DbgPrintEx(
          0x4Du,
          3u,
          "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_603, 0x%x\n",
          TargetDeviceObject,
          InterfaceSynchronously);
      *((_WORD *)v12 + 4) = 152;
      *((_WORD *)v12 + 5) = 1538;
      *((_DWORD *)v12 + 54) = 1538;
      v16 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
              DeviceObject,
              TargetDeviceObject,
              &GUID_USBD_INTERFACE,
              (_INTERFACE *)(v12 + 2));
      v10 = v16;
      if ( v16 < 0 )
      {
        v17 = LOBYTE(WPP_GLOBAL_WDF_Control.AlignmentRequirement) == 0;
        *((_DWORD *)v12 + 54) = 1536;
        if ( !v17 )
          DbgPrintEx(
            0x4Du,
            3u,
            "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_602, 0x%x\n",
            TargetDeviceObject,
            v16);
        v10 = 0;
LABEL_37:
        if ( LOBYTE(WPP_GLOBAL_WDF_Control.AlignmentRequirement) )
          DbgPrintEx(0x4Du, 3u, "USBD_CreateHandle Successful: usbdHandleInfo 0x%p\n", v12);
        if ( *((_DWORD *)v12 + 54) == 1536 )
        {
          memset(&usbBusInterface.Version, 0, 0x46uLL);
          *(_DWORD *)&usbBusInterface.Size = 65608;
          v14 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                  DeviceObject,
                  TargetDeviceObject,
                  &USB_BUS_INTERFACE_USBDI_GUID,
                  (_INTERFACE *)&usbBusInterface);
          v10 = v14;
          if ( v14 < 0 )
          {
            if ( LOBYTE(WPP_GLOBAL_WDF_Control.AlignmentRequirement) )
              DbgPrintEx(
                0x4Du,
                0,
                "Core stack (TargetDevieObject 0x%p) failed query to USB_BUS_INTERFACE_USBDI_GUID : USB_BUSIF_USBDI_VERSION_1, 0x%x\n",
                TargetDeviceObject,
                v14);
            *((_DWORD *)v12 + 54) = -1;
            v10 = 0;
            goto LABEL_44;
          }
          if ( usbBusInterface.IsDeviceHighSpeed )
            *((_BYTE *)v12 + 224) = usbBusInterface.IsDeviceHighSpeed(usbBusInterface.BusContext);
          else
            *((_BYTE *)v12 + 224) = 0;
          usbBusInterface.InterfaceDereference(usbBusInterface.BusContext);
        }
        if ( v10 < 0 )
        {
          if ( v19 )
          {
            v18 = (void (__fastcall *)(_QWORD))*((_QWORD *)v12 + 14);
            if ( v18 )
              v18(*((_QWORD *)v12 + 6));
          }
          ExFreePoolWithTag(v12, PoolTag);
          goto LABEL_63;
        }
LABEL_44:
        *USBDHandle = v12;
LABEL_45:
        if ( v7 )
          ExFreePoolWithTag(v7, PoolTag);
        return (unsigned int)v10;
      }
    }
    else
    {
      *((_DWORD *)v12 + 54) = *((unsigned __int16 *)v12 + 5);
    }
    v19 = 1;
    goto LABEL_37;
  }
  if ( LOBYTE(WPP_GLOBAL_WDF_Control.AlignmentRequirement) )
    DbgPrintEx(0x4Du, 0, "USBDHandle cannot be NULL\n");
  return (unsigned int)-1073741811;
}
