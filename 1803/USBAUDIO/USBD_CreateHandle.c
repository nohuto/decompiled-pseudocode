/*
 * XREFs of USBD_CreateHandle @ 0x1C0007F5C
 * Callers:
 *     USBDeviceGetOffloadCapability @ 0x1C001FAA0 (USBDeviceGetOffloadCapability.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0020738 (USBHwSelectStreamingAudioInterfaceSideband.c)
 * Callees:
 *     USBDInternal_BuildAndSendQueryInterfaceSynchronously @ 0x1C0007760 (USBDInternal_BuildAndSendQueryInterfaceSynchronously.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C0007B00 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C0007D5C (USBDInternal_BuildServicePath.c)
 *     __security_check_cookie @ 0x1C00089A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000A580 (memset.c)
 */

NTSTATUS __stdcall USBD_CreateHandle(
        PDEVICE_OBJECT DeviceObject,
        PDEVICE_OBJECT TargetDeviceObject,
        ULONG USBDClientContractVersion,
        ULONG PoolTag,
        USBD_HANDLE *USBDHandle)
{
  USBD_HANDLE v5; // rdi
  void *v6; // rsi
  NTSTATUS v10; // ebx
  USBD_HANDLE PoolWithTag; // rax
  int InterfaceSynchronously; // eax
  int v13; // eax
  int v14; // eax
  bool v15; // zf
  char v16; // al
  void (__fastcall *v17)(_QWORD); // rax
  char v19; // [rsp+30h] [rbp-D0h]
  void *v20; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v21[10]; // [rsp+40h] [rbp-C0h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+90h] [rbp-70h] BYREF

  v5 = 0LL;
  v19 = 0;
  v6 = 0LL;
  v20 = 0LL;
  if ( KeGetCurrentIrql() )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Irql Too High\n");
    v10 = -1073741496;
    goto LABEL_52;
  }
  if ( !byte_1C0012D1C )
  {
    PoolType = NonPagedPool;
    memset(&VersionInformation, 0, 0x11CuLL);
    VersionInformation.dwOSVersionInfoSize = 284;
    if ( RtlGetVersion(&VersionInformation) >= 0
      && (VersionInformation.dwMajorVersion > 6
       || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
    {
      PoolType = 512;
    }
  }
  byte_1C0012D1C = 1;
  if ( !DeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "DeviceObject cannot be NULL\n");
LABEL_14:
    v10 = -1073741811;
    goto LABEL_52;
  }
  if ( !TargetDeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "TargetDeviceObject cannot be NULL\n");
    goto LABEL_14;
  }
  if ( USBDHandle )
  {
    USBDInternal_BuildServicePath((__int64)DeviceObject, &v20, PoolTag);
    PoolWithTag = (USBD_HANDLE)ExAllocatePoolWithTag(PoolType, 0xE8uLL, PoolTag);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Allocation Failed\n");
      v6 = v20;
      v10 = -1073741670;
      goto LABEL_52;
    }
    memset(PoolWithTag, 0, 0xE8uLL);
    v6 = v20;
    if ( v20 )
      USBDInternal_QueryUsbVerifierSettings((__int64)DeviceObject, (__int64)v20, (__int64)(v5 + 2), PoolTag);
    *(_DWORD *)v5 = 1145197397;
    *((_DWORD *)v5 + 54) = 1539;
    *((_DWORD *)v5 + 2) = 100860104;
    *((_QWORD *)v5 + 7) = DeviceObject;
    *((_DWORD *)v5 + 16) = PoolTag;
    *((_DWORD *)v5 + 10) = 1538;
    *((_QWORD *)v5 + 9) = v5;
    *((_QWORD *)v5 + 26) = TargetDeviceObject;
    *((_DWORD *)v5 + 55) = 1;
    InterfaceSynchronously = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                               DeviceObject,
                               TargetDeviceObject,
                               (ULONG_PTR)&GUID_USBD_INTERFACE,
                               (USHORT *)v5 + 4);
    v10 = InterfaceSynchronously;
    if ( InterfaceSynchronously < 0 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(
          0x4Du,
          3u,
          "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_603, 0x%x\n",
          TargetDeviceObject,
          InterfaceSynchronously);
      *((_WORD *)v5 + 4) = 152;
      *((_WORD *)v5 + 5) = 1538;
      *((_DWORD *)v5 + 54) = 1538;
      v14 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
              DeviceObject,
              TargetDeviceObject,
              (ULONG_PTR)&GUID_USBD_INTERFACE,
              (USHORT *)v5 + 4);
      v10 = v14;
      if ( v14 < 0 )
      {
        v15 = g_EnableDbgPrints == 0;
        *((_DWORD *)v5 + 54) = 1536;
        if ( !v15 )
          DbgPrintEx(
            0x4Du,
            3u,
            "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_602, 0x%x\n",
            TargetDeviceObject,
            v14);
        v10 = 0;
LABEL_31:
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 3u, "USBD_CreateHandle Successful: usbdHandleInfo 0x%p\n", v5);
        if ( *((_DWORD *)v5 + 54) == 1536 )
        {
          memset(v21, 0, 0x48uLL);
          LODWORD(v21[0]) = 65608;
          v13 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                  DeviceObject,
                  TargetDeviceObject,
                  (ULONG_PTR)&USB_BUS_INTERFACE_USBDI_GUID,
                  (USHORT *)v21);
          v10 = v13;
          if ( v13 < 0 )
          {
            if ( g_EnableDbgPrints )
              DbgPrintEx(
                0x4Du,
                0,
                "Core stack (TargetDevieObject 0x%p) failed query to USB_BUS_INTERFACE_USBDI_GUID : USB_BUSIF_USBDI_VERSION_1, 0x%x\n",
                TargetDeviceObject,
                v13);
            *((_DWORD *)v5 + 54) = -1;
            v10 = 0;
            goto LABEL_53;
          }
          v16 = v21[8];
          if ( v21[8] )
            v16 = ((__int64 (__fastcall *)(_QWORD))v21[8])(v21[1]);
          *((_BYTE *)v5 + 224) = v16;
          ((void (__fastcall *)(_QWORD))v21[3])(v21[1]);
        }
        if ( v10 < 0 )
        {
          if ( v19 )
          {
            v17 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 14);
            if ( v17 )
              v17(*((_QWORD *)v5 + 6));
          }
          ExFreePoolWithTag(v5, PoolTag);
          v5 = 0LL;
LABEL_52:
          if ( !USBDHandle )
            goto LABEL_54;
        }
LABEL_53:
        *USBDHandle = v5;
LABEL_54:
        if ( v6 )
          ExFreePoolWithTag(v6, PoolTag);
        return v10;
      }
    }
    else
    {
      *((_DWORD *)v5 + 54) = *((unsigned __int16 *)v5 + 5);
    }
    v19 = 1;
    goto LABEL_31;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "USBDHandle cannot be NULL\n");
  return -1073741811;
}
