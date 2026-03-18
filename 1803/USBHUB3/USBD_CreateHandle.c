/*
 * XREFs of USBD_CreateHandle @ 0x1C0037524
 * Callers:
 *     HUBFDO_SetupHubPostErrataQuery @ 0x1C000C41C (HUBFDO_SetupHubPostErrataQuery.c)
 * Callees:
 *     USBDInternal_BuildAndSendQueryInterfaceSynchronously @ 0x1C0036E24 (USBDInternal_BuildAndSendQueryInterfaceSynchronously.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C00370D0 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C0037320 (USBDInternal_BuildServicePath.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall USBD_CreateHandle(
        PDEVICE_OBJECT DeviceObject,
        PDEVICE_OBJECT TargetDeviceObject,
        ULONG USBDClientContractVersion,
        ULONG PoolTag,
        USBD_HANDLE *USBDHandle)
{
  char v5; // r13
  PVOID v6; // rsi
  NTSTATUS v9; // ebx
  USBD_HANDLE PoolWithTag; // rax
  USBD_HANDLE v11; // rdi
  int InterfaceSynchronously; // eax
  int v13; // eax
  int v15; // eax
  bool v16; // zf
  char v17; // al
  void (__fastcall *v18)(_QWORD); // rax
  PVOID P[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v20[10]; // [rsp+40h] [rbp-C0h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+90h] [rbp-70h] BYREF

  v5 = 0;
  v6 = 0LL;
  P[0] = 0LL;
  if ( KeGetCurrentIrql() )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Irql Too High\n", PoolTag);
    v9 = -1073741496;
    goto LABEL_56;
  }
  if ( !byte_1C005E98C )
  {
    PoolType = NonPagedPool;
    memset(&VersionInformation, 0, 0x11CuLL);
    VersionInformation.dwOSVersionInfoSize = 284;
    if ( RtlGetVersion(&VersionInformation) >= 0
      && (VersionInformation.dwMajorVersion > 6
       || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
    {
      PoolType = NonPagedPoolNx;
    }
  }
  byte_1C005E98C = 1;
  if ( !DeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "DeviceObject cannot be NULL\n", *(_QWORD *)&PoolTag);
LABEL_14:
    v9 = -1073741811;
LABEL_56:
    if ( USBDHandle )
      *USBDHandle = 0LL;
    goto LABEL_39;
  }
  if ( !TargetDeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "TargetDeviceObject cannot be NULL\n", *(_QWORD *)&PoolTag);
    goto LABEL_14;
  }
  if ( USBDHandle )
  {
    USBDInternal_BuildServicePath((__int64)DeviceObject, P);
    PoolWithTag = (USBD_HANDLE)ExAllocatePoolWithTag(PoolType, 0xE8uLL, 0x68334855u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Allocation Failed\n");
      v6 = P[0];
      v9 = -1073741670;
      goto LABEL_56;
    }
    memset(PoolWithTag, 0, 0xE8uLL);
    v6 = P[0];
    if ( P[0] )
      USBDInternal_QueryUsbVerifierSettings((__int64)DeviceObject, (__int64)P[0], (__int64)(v11 + 2));
    *(_DWORD *)v11 = 1145197397;
    *((_DWORD *)v11 + 54) = 1539;
    *((_DWORD *)v11 + 2) = 100860104;
    *((_QWORD *)v11 + 7) = DeviceObject;
    *((_DWORD *)v11 + 16) = 1748191317;
    *((_DWORD *)v11 + 10) = 1538;
    *((_QWORD *)v11 + 9) = v11;
    *((_QWORD *)v11 + 26) = TargetDeviceObject;
    *((_DWORD *)v11 + 55) = 1;
    InterfaceSynchronously = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                               DeviceObject,
                               TargetDeviceObject,
                               (unsigned __int64)&GUID_USBD_INTERFACE,
                               (unsigned __int16 *)v11 + 4);
    v9 = InterfaceSynchronously;
    if ( InterfaceSynchronously < 0 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(
          0x4Du,
          3u,
          "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_603, 0x%x\n",
          TargetDeviceObject,
          InterfaceSynchronously);
      *((_WORD *)v11 + 4) = 152;
      *((_WORD *)v11 + 5) = 1538;
      *((_DWORD *)v11 + 54) = 1538;
      v15 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
              DeviceObject,
              TargetDeviceObject,
              (unsigned __int64)&GUID_USBD_INTERFACE,
              (unsigned __int16 *)v11 + 4);
      v9 = v15;
      if ( v15 < 0 )
      {
        v16 = g_EnableDbgPrints == 0;
        *((_DWORD *)v11 + 54) = 1536;
        if ( !v16 )
          DbgPrintEx(
            0x4Du,
            3u,
            "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_602, 0x%x\n",
            TargetDeviceObject,
            v15);
        v9 = 0;
LABEL_31:
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 3u, "USBD_CreateHandle Successful: usbdHandleInfo 0x%p\n", v11);
        if ( *((_DWORD *)v11 + 54) == 1536 )
        {
          memset(v20, 0, 0x48uLL);
          LODWORD(v20[0]) = 65608;
          v13 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                  DeviceObject,
                  TargetDeviceObject,
                  (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID,
                  (unsigned __int16 *)v20);
          v9 = v13;
          if ( v13 < 0 )
          {
            if ( g_EnableDbgPrints )
              DbgPrintEx(
                0x4Du,
                0,
                "Core stack (TargetDevieObject 0x%p) failed query to USB_BUS_INTERFACE_USBDI_GUID : USB_BUSIF_USBDI_VERSION_1, 0x%x\n",
                TargetDeviceObject,
                v13);
            *((_DWORD *)v11 + 54) = -1;
            v9 = 0;
            goto LABEL_38;
          }
          v17 = v20[8];
          if ( v20[8] )
            v17 = ((__int64 (__fastcall *)(_QWORD))v20[8])(v20[1]);
          *((_BYTE *)v11 + 224) = v17;
          ((void (__fastcall *)(_QWORD))v20[3])(v20[1]);
        }
        if ( v9 < 0 )
        {
          if ( v5 )
          {
            v18 = (void (__fastcall *)(_QWORD))*((_QWORD *)v11 + 14);
            if ( v18 )
              v18(*((_QWORD *)v11 + 6));
          }
          ExFreePoolWithTag(v11, 0x68334855u);
          goto LABEL_56;
        }
LABEL_38:
        *USBDHandle = v11;
LABEL_39:
        if ( v6 )
          ExFreePoolWithTag(v6, 0x68334855u);
        return v9;
      }
    }
    else
    {
      *((_DWORD *)v11 + 54) = *((unsigned __int16 *)v11 + 5);
    }
    v5 = 1;
    goto LABEL_31;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "USBDHandle cannot be NULL\n", *(_QWORD *)&PoolTag);
  return -1073741811;
}
