/*
 * XREFs of USBD_CreateHandle @ 0x1C00368FC
 * Callers:
 *     HUBFDO_SetupHubPostErrataQuery @ 0x1C000C46C (HUBFDO_SetupHubPostErrataQuery.c)
 * Callees:
 *     USBDInternal_BuildAndSendQueryInterfaceSynchronously @ 0x1C0036204 (USBDInternal_BuildAndSendQueryInterfaceSynchronously.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C00364B0 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C0036700 (USBDInternal_BuildServicePath.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
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
  void (__fastcall *v17)(_QWORD); // rax
  PVOID P[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v19[10]; // [rsp+40h] [rbp-C0h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+90h] [rbp-70h] BYREF

  v5 = 0;
  v6 = 0LL;
  P[0] = 0LL;
  if ( KeGetCurrentIrql() )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Irql Too High\n", PoolTag);
    v9 = -1073741496;
    goto LABEL_57;
  }
  if ( !byte_1C005E984 )
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
  byte_1C005E984 = 1;
  if ( !DeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "DeviceObject cannot be NULL\n", *(_QWORD *)&PoolTag);
LABEL_14:
    v9 = -1073741811;
LABEL_57:
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
      goto LABEL_57;
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
          memset((char *)v19 + 2, 0, 0x46uLL);
          LODWORD(v19[0]) = 65608;
          v13 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                  DeviceObject,
                  TargetDeviceObject,
                  (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID,
                  (unsigned __int16 *)v19);
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
          if ( v19[8] )
            *((_BYTE *)v11 + 224) = ((__int64 (__fastcall *)(_QWORD))v19[8])(v19[1]);
          else
            *((_BYTE *)v11 + 224) = 0;
          ((void (__fastcall *)(_QWORD))v19[3])(v19[1]);
        }
        if ( v9 < 0 )
        {
          if ( v5 )
          {
            v17 = (void (__fastcall *)(_QWORD))*((_QWORD *)v11 + 14);
            if ( v17 )
              v17(*((_QWORD *)v11 + 6));
          }
          ExFreePoolWithTag(v11, 0x68334855u);
          goto LABEL_57;
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
