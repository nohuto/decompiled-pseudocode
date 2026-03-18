/*
 * XREFs of UsbhSetPdoRegistryParameter @ 0x1C0026110
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0025E80 (UsbhPdoPnp_DeviceEnumerated.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C00278DC (UsbhPdoCreateSymbolicLink.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C003F1FC (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhSetHubOvercurrentDetectedKey @ 0x1C004C270 (UsbhSetHubOvercurrentDetectedKey.c)
 *     UsbhSetHubSelectiveSuspend @ 0x1C004C2B0 (UsbhSetHubSelectiveSuspend.c)
 *     UsbhSetPdoSelectiveSuspendedKey @ 0x1C004C300 (UsbhSetPdoSelectiveSuspendedKey.c)
 *     UsbhUpdateRegHubHardResetCount @ 0x1C004C340 (UsbhUpdateRegHubHardResetCount.c)
 *     UsbhSetWmiDataBlock @ 0x1C004EA50 (UsbhSetWmiDataBlock.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C00562F0 (UsbhPdo_ReportPnPFailureProblem.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C003C2E0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C00454FC (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall UsbhSetPdoRegistryParameter(
        PDEVICE_OBJECT DeviceObject,
        PCWSTR SourceString,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  NTSTATUS v9; // ebx
  int v11; // r8d
  void *DeviceRegKey; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)SourceString,
      1,
      84,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      (char)DeviceObject);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v11,
        85,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        (__int64)SourceString);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v9 = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x1F0000u, &DeviceRegKey);
  if ( v9 >= 0 )
  {
    v9 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, Type, Data, DataSize);
    ZwClose(DeviceRegKey);
  }
  return (unsigned int)v9;
}
