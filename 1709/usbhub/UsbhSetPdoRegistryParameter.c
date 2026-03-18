/*
 * XREFs of UsbhSetPdoRegistryParameter @ 0x1C001FFA8
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C001FBA0 (UsbhPdoPnp_DeviceEnumerated.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C0026EB4 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C0040278 (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhSetHubOvercurrentDetectedKey @ 0x1C004D0F0 (UsbhSetHubOvercurrentDetectedKey.c)
 *     UsbhSetHubSelectiveSuspend @ 0x1C004D130 (UsbhSetHubSelectiveSuspend.c)
 *     UsbhSetPdoSelectiveSuspendedKey @ 0x1C004D180 (UsbhSetPdoSelectiveSuspendedKey.c)
 *     UsbhUpdateRegHubHardResetCount @ 0x1C004D1C0 (UsbhUpdateRegHubHardResetCount.c)
 *     UsbhSetWmiDataBlock @ 0x1C004F740 (UsbhSetWmiDataBlock.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C00561A0 (UsbhPdo_ReportPnPFailureProblem.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C003D59C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall UsbhSetPdoRegistryParameter(
        PDEVICE_OBJECT DeviceObject,
        PCWSTR SourceString,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  NTSTATUS v9; // ebx
  void *DeviceRegKey; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
      Type,
      85,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      (__int64)SourceString);
  RtlInitUnicodeString(&DestinationString, SourceString);
  v9 = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x1F0000u, &DeviceRegKey);
  if ( v9 >= 0 )
  {
    v9 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, Type, Data, DataSize);
    ZwClose(DeviceRegKey);
  }
  return (unsigned int)v9;
}
