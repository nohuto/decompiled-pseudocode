/*
 * XREFs of ACPIInternalSetDeviceInterface @ 0x1C002A4D4
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C00168B0 (ACPICMButtonStartWorker.c)
 *     ACPIProcessorStartDevice @ 0x1C0036300 (ACPIProcessorStartDevice.c)
 *     ACPIButtonStartDevice @ 0x1C0078E40 (ACPIButtonStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C007B250 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C00895C0 (ACPIThermalStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIInternalSetDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject, GUID *InterfaceClassGuid)
{
  _QWORD *DeviceExtension; // rsi
  NTSTATUS v5; // eax
  char v6; // bl
  NTSTATUS v7; // edi
  const char *v8; // rcx
  const char *v9; // r8
  __int64 v10; // rdx
  unsigned __int16 v11; // r9
  __int64 v12; // rdx
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+50h] [rbp-18h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = IoRegisterDeviceInterface(PhysicalDeviceObject, InterfaceClassGuid, 0LL, &SymbolicLinkName);
  v6 = 0;
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = (const char *)&unk_1C005B1F0;
    v9 = (const char *)&unk_1C005B1F0;
    if ( DeviceExtension )
    {
      v10 = DeviceExtension[1];
      v6 = (char)DeviceExtension;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v8 = (const char *)DeviceExtension[70];
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = (const char *)DeviceExtension[71];
      }
    }
    v11 = 13;
LABEL_13:
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      v11,
      (__int64)&WPP_c50cf807c7783e6199ec897531ccbc60_Traceguids,
      v7,
      v6,
      v8,
      v9);
    return (unsigned int)v7;
  }
  v7 = IoSetDeviceInterfaceState(&SymbolicLinkName, 1u);
  if ( v7 < 0 )
  {
    v8 = (const char *)&unk_1C005B1F0;
    v9 = (const char *)&unk_1C005B1F0;
    if ( DeviceExtension )
    {
      v12 = DeviceExtension[1];
      v6 = (char)DeviceExtension;
      if ( (v12 & 0x200000000000LL) != 0 )
      {
        v8 = (const char *)DeviceExtension[70];
        if ( (v12 & 0x400000000000LL) != 0 )
          v9 = (const char *)DeviceExtension[71];
      }
    }
    v11 = 14;
    goto LABEL_13;
  }
  return (unsigned int)v7;
}
