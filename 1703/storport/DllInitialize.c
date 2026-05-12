/*
 * XREFs of DllInitialize @ 0x1C0018450
 * Callers:
 *     <none>
 * Callees:
 *     RaidpIsCurrentOsInstallationUpgrade @ 0x1C001A650 (RaidpIsCurrentOsInstallationUpgrade.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     RaidDecodeSmRegistryBlob @ 0x1C0046A80 (RaidDecodeSmRegistryBlob.c)
 *     StorpRegisterShim @ 0x1C0060B48 (StorpRegisterShim.c)
 *     SpVerifierInitialization @ 0x1C0065954 (SpVerifierInitialization.c)
 */

__int64 DllInitialize()
{
  char v0; // al
  int v2; // ecx
  int v3; // eax
  ULONG OutputBuffer; // [rsp+38h] [rbp-D0h] BYREF
  char OutputBuffer_4; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES v9; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD SystemInformation[16]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+118h] [rbp+10h] BYREF
  int v14; // [rsp+11Ch] [rbp+14h]
  UCHAR Buffer[260]; // [rsp+124h] [rbp+1Ch] BYREF

  OutputBuffer_4 = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer_4, 1u) >= 0 && OutputBuffer_4 )
    IsSystemAoAC = 1;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    ZwClose(KeyHandle);
    v0 = 1;
  }
  else
  {
    v0 = 0;
  }
  g_InWinPE = v0;
  g_OSisUpgrade = RaidpIsCurrentOsInstallationUpgrade();
  if ( _InterlockedIncrement(&NumDllInitialize) == 1 )
    StorpRegisterShim();
  RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  v9.RootDirectory = 0LL;
  v9.ObjectName = &ValueName;
  v9.Length = 48;
  v9.Attributes = 576;
  *(_OWORD *)&v9.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&Handle, 0x20019u, &v9) >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"LogControlEnable");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v14 == 11
      && OutputBuffer >= 8 )
    {
      qword_1C00551F8 = *(_QWORD *)Buffer;
      if ( !*(_QWORD *)Buffer )
        RaidLogListSize = 0;
    }
    RtlInitUnicodeString(&ValueName, L"LogSize");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v14 == 4
      && OutputBuffer >= 4 )
    {
      v2 = *(_DWORD *)Buffer;
      RaidLogListSize = *(_DWORD *)Buffer;
      if ( *(_DWORD *)Buffer <= 0x1000u )
      {
        if ( (unsigned int)(*(_DWORD *)Buffer - 1) <= 0x3E )
        {
          v2 = 64;
          RaidLogListSize = 64;
        }
        if ( !v2 )
          qword_1C00551F8 = 0LL;
      }
      else
      {
        RaidLogListSize = 4096;
      }
    }
    RtlInitUnicodeString(&ValueName, L"DpcCompletionLimit");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v14 == 4
      && OutputBuffer >= 4 )
    {
      DpcCompletionLimit = *(_DWORD *)Buffer;
      if ( !*(_DWORD *)Buffer )
        DpcCompletionLimit = -1;
    }
    RtlInitUnicodeString(&ValueName, L"HiberFileHybridPriority");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v14 == 3 )
    {
      HiberFileHybridPriority = RaidDecodeSmRegistryBlob(Buffer);
    }
    RtlInitUnicodeString(&ValueName, L"HmbAllocationPolicy");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v14 == 4 )
    {
      HmbAllocationPolicy = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"HmbMaximumSizeInBytes");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v14 == 4 )
    {
      v3 = *(_DWORD *)Buffer;
      LODWORD(HmbMaximumSize) = *(_DWORD *)Buffer;
      if ( *(_DWORD *)Buffer > 0x4000000u )
      {
        v3 = 0x4000000;
        LODWORD(HmbMaximumSize) = 0x4000000;
      }
      if ( (v3 & 0xFFF) != 0 )
        LODWORD(HmbMaximumSize) = v3 & 0xFFFFF000;
    }
    RtlInitUnicodeString(&ValueName, L"MiniportBugActionPolicy");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v14 == 4 )
    {
      MiniportBugActionPolicy = *(_DWORD *)Buffer;
      if ( *(_DWORD *)Buffer >= 3u )
        MiniportBugActionPolicy = 1;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryPerformanceHighResolutionTimer");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v14 == 4
      && OutputBuffer >= 4 )
    {
      g_StorpTraceLoggingPerformanceHighResolutionTimer = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryPerformanceEnabled");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v14 == 4
      && OutputBuffer >= 4 )
    {
      g_StorpTraceLoggingPerformanceEnabled = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryErrorDataEnabled");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v14 == 4
      && OutputBuffer >= 4 )
    {
      g_StorpTraceLoggingErrorDataEnabled = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryDeviceHealthEnabled");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v14 == 4
      && OutputBuffer >= 4 )
    {
      g_StorpTraceLoggingDeviceHealthEnabled = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryCriticalEventEnabled");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v14 == 4
      && OutputBuffer >= 4 )
    {
      LODWORD(WPP_MAIN_CB.SecurityDescriptor) = *(_DWORD *)Buffer;
      g_StorpTraceLoggingCriticalEventEnabledSetByRegistry = 1;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryCriticalEventMaximum");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v14 == 4
      && OutputBuffer >= 4 )
    {
      g_StorpTraceLoggingCriticalEventMaximum = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"ExtendedDSMCommandsSupported");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v14 == 4
      && OutputBuffer >= 4 )
    {
      ExtendedDSMCommandsSupported = *(_DWORD *)Buffer != 0;
    }
    ZwClose(Handle);
  }
  if ( SpVrfyLevel != -1 )
  {
    RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\Verifier");
    v9.RootDirectory = 0LL;
    v9.ObjectName = &ValueName;
    v9.Length = 48;
    v9.Attributes = 576;
    *(_OWORD *)&v9.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x20019u, &v9) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"VerifyLevel");
      if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
        && v14 == 4
        && OutputBuffer >= 4 )
      {
        SpVrfyLevel |= *(_DWORD *)Buffer;
        if ( SpVrfyLevel != -1 && !StorPortVerifierInitialized && (unsigned __int8)SpVerifierInitialization() )
        {
          StorPortVerifierInitialized = 1;
          RaidVerifierEnabled = 1;
        }
      }
      ZwClose(Handle);
    }
    if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      HighestPhysicalAddress = (unsigned __int64)SystemInformation[5] << 12;
      PhysicalMemorySize = (unsigned __int64)SystemInformation[3] << 12;
    }
  }
  return 0LL;
}
