/*
 * XREFs of ACPIInternalSetDeviceInterface @ 0x1C0022F58
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C0022DD0 (ACPIProcessorStartDevice.c)
 *     ACPICMButtonStartWorker @ 0x1C0023720 (ACPICMButtonStartWorker.c)
 *     ACPIThermalStartDevice @ 0x1C00919A0 (ACPIThermalStartDevice.c)
 *     ACPIButtonStartDevice @ 0x1C0092080 (ACPIButtonStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C009EDC0 (ACPIFanStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIInternalSetDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject, GUID *InterfaceClassGuid)
{
  _QWORD *DeviceExtension; // rsi
  NTSTATUS v5; // eax
  char v6; // bl
  NTSTATUS v7; // edi
  const char *v9; // rcx
  const char *v10; // r8
  __int64 v11; // rdx
  unsigned __int16 v12; // r9
  __int64 v13; // rdx
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+50h] [rbp-18h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = IoRegisterDeviceInterface(PhysicalDeviceObject, InterfaceClassGuid, 0LL, &SymbolicLinkName);
  v6 = 0;
  v7 = v5;
  if ( v5 < 0 )
  {
    v9 = (const char *)&unk_1C0066CD0;
    v10 = (const char *)&unk_1C0066CD0;
    if ( DeviceExtension )
    {
      v11 = DeviceExtension[1];
      v6 = (char)DeviceExtension;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v9 = (const char *)DeviceExtension[70];
        if ( (v11 & 0x400000000000LL) != 0 )
          v10 = (const char *)DeviceExtension[71];
      }
    }
    v12 = 13;
    goto LABEL_14;
  }
  v7 = IoSetDeviceInterfaceState(&SymbolicLinkName, 1u);
  if ( v7 < 0 )
  {
    v9 = (const char *)&unk_1C0066CD0;
    v10 = (const char *)&unk_1C0066CD0;
    if ( DeviceExtension )
    {
      v13 = DeviceExtension[1];
      v6 = (char)DeviceExtension;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v9 = (const char *)DeviceExtension[70];
        if ( (v13 & 0x400000000000LL) != 0 )
          v10 = (const char *)DeviceExtension[71];
      }
    }
    v12 = 14;
LABEL_14:
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      v12,
      (__int64)&WPP_adf19d460b46334a5cb7bb3ee834865a_Traceguids,
      v7,
      v6,
      v9,
      v10);
  }
  return (unsigned int)v7;
}
