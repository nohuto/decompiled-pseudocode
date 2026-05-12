/*
 * XREFs of DllInitialize @ 0x1C003E720
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     RaidpIsCurrentOsInstallationUpgrade @ 0x1C003EFBC (RaidpIsCurrentOsInstallationUpgrade.c)
 *     RaidDecodeSmRegistryBlob @ 0x1C00478A0 (RaidDecodeSmRegistryBlob.c)
 *     SpVerifierInitialization @ 0x1C0067444 (SpVerifierInitialization.c)
 *     StorpRegisterShim @ 0x1C00677F4 (StorpRegisterShim.c)
 */

__int64 DllInitialize()
{
  char v0; // al
  int v1; // ecx
  int v2; // eax
  ULONG OutputBuffer; // [rsp+38h] [rbp-D0h] BYREF
  char OutputBuffer_4; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+58h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  int v10; // [rsp+68h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES v11; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD SystemInformation[16]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+128h] [rbp+20h] BYREF
  int v16; // [rsp+12Ch] [rbp+24h]
  UCHAR Buffer[260]; // [rsp+134h] [rbp+2Ch] BYREF

  OutputBuffer_4 = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v8 = 4LL;
  if ( ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer_4, 1u) >= 0 && OutputBuffer_4 )
    LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) = 1;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    v0 = 0;
  }
  else
  {
    ZwClose(KeyHandle);
    v0 = 1;
  }
  HIBYTE(WPP_MAIN_CB.SectorSize) = v0;
  LOBYTE(WPP_MAIN_CB.SectorSize) = RaidpIsCurrentOsInstallationUpgrade();
  RtlInitUnicodeString(&ValueName, L"SMR-HostManaged-Enabled");
  if ( (int)ZwQueryLicenseValue(&ValueName, &v10, (char *)&v8 + 4, (unsigned int)v8, &v8) >= 0 && HIDWORD(v8) == 1 )
    BYTE3(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) = 1;
  if ( _InterlockedIncrement(&NumDllInitialize) == 1 )
    StorpRegisterShim();
  RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  v11.RootDirectory = 0LL;
  v11.ObjectName = &ValueName;
  v11.Length = 48;
  v11.Attributes = 576;
  *(_OWORD *)&v11.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&Handle, 0x20019u, &v11) >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"LogControlEnable");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 11
      && OutputBuffer >= 8 )
    {
      qword_1C0056210 = *(_QWORD *)Buffer;
      if ( !*(_QWORD *)Buffer )
        RaidLogListSize = 0;
    }
    RtlInitUnicodeString(&ValueName, L"LogSize");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 4
      && OutputBuffer >= 4 )
    {
      v1 = *(_DWORD *)Buffer;
      RaidLogListSize = *(_DWORD *)Buffer;
      if ( *(_DWORD *)Buffer <= 0x1000u )
      {
        if ( !*(_DWORD *)Buffer )
          goto LABEL_27;
        if ( *(_DWORD *)Buffer < 0x40u )
        {
          RaidLogListSize = 64;
          v1 = 64;
        }
        if ( !v1 )
LABEL_27:
          qword_1C0056210 = 0LL;
      }
      else
      {
        RaidLogListSize = 4096;
      }
    }
    RtlInitUnicodeString(&ValueName, L"DpcCompletionLimit");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 4
      && OutputBuffer >= 4 )
    {
      DpcCompletionLimit = *(_DWORD *)Buffer;
      if ( !*(_DWORD *)Buffer )
        DpcCompletionLimit = -1;
    }
    RtlInitUnicodeString(&ValueName, L"HiberFileHybridPriority");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 3 )
    {
      HiberFileHybridPriority = RaidDecodeSmRegistryBlob(Buffer);
    }
    RtlInitUnicodeString(&ValueName, L"HmbAllocationPolicy");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 4 )
    {
      HmbAllocationPolicy = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"HmbMaximumSizeInBytes");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 4 )
    {
      v2 = *(_DWORD *)Buffer;
      HmbMaximumSize = *(_DWORD *)Buffer;
      if ( *(_DWORD *)Buffer > 0x4000000u )
      {
        HmbMaximumSize = 0x4000000;
        v2 = 0x4000000;
      }
      if ( (v2 & 0xFFF) != 0 )
        HmbMaximumSize = v2 & 0xFFFFF000;
    }
    RtlInitUnicodeString(&ValueName, L"MiniportBugActionPolicy");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 4 )
    {
      MiniportBugActionPolicy = *(_DWORD *)Buffer;
      if ( *(_DWORD *)Buffer >= 3u )
        MiniportBugActionPolicy = 1;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryPerformanceHighResolutionTimer");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 4
      && OutputBuffer >= 4 )
    {
      g_StorpTraceLoggingPerformanceHighResolutionTimer = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryPerformanceEnabled");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 4
      && OutputBuffer >= 4 )
    {
      g_StorpTraceLoggingPerformanceEnabled = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryErrorDataEnabled");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 4
      && OutputBuffer >= 4 )
    {
      g_StorpTraceLoggingErrorDataEnabled = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryDeviceHealthEnabled");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 4
      && OutputBuffer >= 4 )
    {
      g_StorpTraceLoggingDeviceHealthEnabled = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryCriticalEventEnabled");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 4
      && OutputBuffer >= 4 )
    {
      HIDWORD(WPP_MAIN_CB.Reserved) = *(_DWORD *)Buffer;
      LOBYTE(WPP_MAIN_CB.Reserved) = 1;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryCriticalEventMaximum");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 4
      && OutputBuffer >= 4 )
    {
      g_StorpTraceLoggingCriticalEventMaximum = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"ExtendedDSMCommandsSupported");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 4
      && OutputBuffer >= 4 )
    {
      BYTE2(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) = *(_DWORD *)Buffer != 0;
    }
    RtlInitUnicodeString(&ValueName, L"FUAEnable");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 4
      && OutputBuffer >= 4 )
    {
      BYTE1(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) = *(_DWORD *)Buffer != 0;
    }
    RtlInitUnicodeString(&ValueName, L"MaxPreAllocatedIoResourceCount");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v16 == 4
      && OutputBuffer >= 4
      && *(_DWORD *)Buffer )
    {
      StorPreAllocatedMaxIoResourceCount = *(_DWORD *)Buffer;
    }
    ZwClose(Handle);
  }
  if ( LODWORD(WPP_MAIN_CB.DeviceObjectExtension) != -1 )
  {
    RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\Verifier");
    v11.RootDirectory = 0LL;
    v11.ObjectName = &ValueName;
    v11.Length = 48;
    v11.Attributes = 576;
    *(_OWORD *)&v11.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x20019u, &v11) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"VerifyLevel");
      if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
        && v16 == 4
        && OutputBuffer >= 4 )
      {
        LODWORD(WPP_MAIN_CB.DeviceObjectExtension) |= *(_DWORD *)Buffer;
        if ( LODWORD(WPP_MAIN_CB.DeviceObjectExtension) != -1
          && !*(_DWORD *)(&WPP_MAIN_CB.Spare1 + 1)
          && (unsigned __int8)SpVerifierInitialization() )
        {
          *(_DWORD *)(&WPP_MAIN_CB.Spare1 + 1) = 1;
          HIDWORD(WPP_MAIN_CB.DeviceObjectExtension) = 1;
        }
      }
      ZwClose(Handle);
    }
    if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      HighestPhysicalAddress = (unsigned __int64)SystemInformation[5] << 12;
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (_LIST_ENTRY *)((unsigned __int64)SystemInformation[3] << 12);
    }
  }
  return 0LL;
}
