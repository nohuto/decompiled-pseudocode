/*
 * XREFs of FxRegistrySettingsInitialize @ 0x1C0015F60
 * Callers:
 *     FxInitialize @ 0x1C00158D0 (FxInitialize.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00371A0 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?SetVerifierState@_FX_DRIVER_GLOBALS@@QEAAXE@Z @ 0x1C0062F4C (-SetVerifierState@_FX_DRIVER_GLOBALS@@QEAAXE@Z.c)
 *     FxDriverGlobalsInitializeDebugExtension @ 0x1C0080644 (FxDriverGlobalsInitializeDebugExtension.c)
 */

void __fastcall FxRegistrySettingsInitialize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _UNICODE_STRING *RegistryPath,
        unsigned __int8 WindowsVerifierOn)
{
  unsigned int v5; // edx
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned int Major; // eax
  int (__fastcall *SystemRoutineAddress)(unsigned int, const wchar_t *, _RTL_QUERY_REGISTRY_TABLE *, void *, void *); // rax
  bool v9; // zf
  void *m_Key; // rdi
  NTSTATUS v11; // eax
  void *v12; // rdi
  NTSTATUS v13; // eax
  void *v14; // rdi
  NTSTATUS v15; // eax
  _WDF_BIND_INFO *v16; // rax
  unsigned int v17; // ecx
  NTSTATUS v18; // eax
  _FX_DRIVER_GLOBALS *v19; // rcx
  unsigned int timeoutValue; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int zero; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int verifierOnValue; // [rsp+38h] [rbp-C8h] BYREF
  FxAutoRegKey hWdf; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int defaultTrue; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int verboseValue; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int allocateFailValue; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int verifyDownlevelValue; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int forceLogsInMiniDump; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int trackDriverForMiniDumpLog; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int requestParentOptimizationOn; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int dsfValue; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int removeLockOptionFlags; // [rsp+68h] [rbp-98h] BYREF
  unsigned int max; // [rsp+6Ch] [rbp-94h] BYREF
  FxAutoRegKey hDriver; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING timeoutName; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING FunctionName; // [rsp+A8h] [rbp-58h] BYREF
  _RTL_QUERY_REGISTRY_TABLE paramTable[10]; // [rsp+C0h] [rbp-40h] BYREF
  _UNICODE_STRING KeyValueInformation; // [rsp+2F0h] [rbp+1F0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+300h] [rbp+200h] BYREF
  __int64 v42; // [rsp+330h] [rbp+230h]
  wchar_t v43; // [rsp+338h] [rbp+238h]
  wchar_t parametersPath_buffer[16]; // [rsp+340h] [rbp+240h] BYREF
  wchar_t timeoutName_buffer[40]; // [rsp+360h] [rbp+260h] BYREF

  parametersPath.Buffer = parametersPath_buffer;
  zero = 0;
  max = -1;
  defaultTrue = 1;
  hDriver.m_Key = 0LL;
  hWdf.m_Key = 0LL;
  *(_DWORD *)&parametersPath.Length = 1966108;
  wcscpy(parametersPath_buffer, L"Parameters\\Wdf");
  if ( RegistryPath )
  {
    ObjectAttributes.ObjectName = RegistryPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&hDriver.m_Key, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ObjectAttributes.RootDirectory = hDriver.m_Key;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &parametersPath;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes) < 0 )
      {
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, v5, 9u) )
        {
          _FX_DRIVER_GLOBALS::SetVerifierState(FxDriverGlobals, WindowsVerifierOn);
          if ( FxDriverGlobals->FxVerifierOn )
            FxDriverGlobalsInitializeDebugExtension(v19, 0LL);
        }
      }
      else
      {
        memset(paramTable, 0, sizeof(paramTable));
        WdfBindInfo = FxDriverGlobals->WdfBindInfo;
        paramTable[0].Name = L"VerboseOn";
        paramTable[0].EntryContext = &verboseValue;
        paramTable[0].DefaultData = &zero;
        paramTable[1].Name = L"VerifierAllocateFailCount";
        paramTable[1].EntryContext = &allocateFailValue;
        paramTable[1].DefaultData = &max;
        verboseValue = 0;
        paramTable[0].Flags = 288;
        paramTable[0].DefaultType = 0x4000000;
        paramTable[0].DefaultLength = 4;
        allocateFailValue = -1;
        paramTable[1].Flags = 288;
        paramTable[1].DefaultType = 0x4000000;
        paramTable[1].DefaultLength = 4;
        verifierOnValue = 0;
        Major = WdfBindInfo->Version.Major;
        if ( Major > 1 || Major == 1 && WdfBindInfo->Version.Minor >= 9 )
          verifierOnValue = WindowsVerifierOn;
        paramTable[2].Flags = 288;
        paramTable[2].Name = L"VerifierOn";
        paramTable[2].DefaultType = 0x4000000;
        paramTable[2].EntryContext = &verifierOnValue;
        paramTable[2].DefaultLength = 4;
        paramTable[2].DefaultData = &verifierOnValue;
        paramTable[3].Name = L"VerifyDownLevel";
        paramTable[3].EntryContext = &verifyDownlevelValue;
        paramTable[3].DefaultData = &zero;
        paramTable[4].Name = L"ForceLogsInMiniDump";
        paramTable[4].EntryContext = &forceLogsInMiniDump;
        paramTable[4].DefaultData = &zero;
        paramTable[5].Name = L"TrackDriverForMiniDumpLog";
        paramTable[5].EntryContext = &trackDriverForMiniDumpLog;
        paramTable[5].DefaultData = &defaultTrue;
        paramTable[6].Name = L"RequestParentOptimizationOn";
        paramTable[6].EntryContext = &requestParentOptimizationOn;
        paramTable[6].DefaultData = &defaultTrue;
        paramTable[7].Name = L"DsfOn";
        paramTable[7].EntryContext = &dsfValue;
        paramTable[7].DefaultData = &zero;
        paramTable[8].Name = L"RemoveLockOptionFlags";
        paramTable[8].EntryContext = &removeLockOptionFlags;
        paramTable[8].DefaultData = &zero;
        verifyDownlevelValue = 0;
        paramTable[3].Flags = 288;
        paramTable[3].DefaultType = 0x4000000;
        paramTable[3].DefaultLength = 4;
        forceLogsInMiniDump = 0;
        paramTable[4].Flags = 288;
        paramTable[4].DefaultType = 0x4000000;
        paramTable[4].DefaultLength = 4;
        trackDriverForMiniDumpLog = 1;
        paramTable[5].Flags = 288;
        paramTable[5].DefaultType = 0x4000000;
        paramTable[5].DefaultLength = 4;
        requestParentOptimizationOn = 1;
        paramTable[6].Flags = 288;
        paramTable[6].DefaultType = 0x4000000;
        paramTable[6].DefaultLength = 4;
        dsfValue = 0;
        paramTable[7].Flags = 288;
        paramTable[7].DefaultType = 0x4000000;
        paramTable[7].DefaultLength = 4;
        removeLockOptionFlags = 0;
        paramTable[8].Flags = 288;
        paramTable[8].DefaultType = 0x4000000;
        paramTable[8].DefaultLength = 4;
        RtlInitUnicodeString(&FunctionName, L"RtlQueryRegistryValuesEx");
        SystemRoutineAddress = (int (__fastcall *)(unsigned int, const wchar_t *, _RTL_QUERY_REGISTRY_TABLE *, void *, void *))MmGetSystemRoutineAddress(&FunctionName);
        if ( !SystemRoutineAddress )
          SystemRoutineAddress = RtlxQueryRegistryValues;
        if ( SystemRoutineAddress(3221225472u, (const wchar_t *)hWdf.m_Key, paramTable, 0LL, 0LL) >= 0 )
        {
          if ( verboseValue )
            FxDriverGlobals->FxVerboseOn = 1;
          else
            FxDriverGlobals->FxVerboseOn = 0;
          if ( allocateFailValue == -1 )
            FxDriverGlobals->WdfVerifierAllocateFailCount = -1;
          else
            FxDriverGlobals->WdfVerifierAllocateFailCount = allocateFailValue;
          v9 = verifierOnValue == 0;
          FxDriverGlobals->FxVerifierDbgBreakOnDeviceStateError = 0;
          FxDriverGlobals->FxVerifierOn = !v9;
          FxDriverGlobals->FxVerifierHandle = !v9;
          FxDriverGlobals->FxVerifierIO = !v9;
          FxDriverGlobals->FxVerifierLock = !v9;
          FxDriverGlobals->FxPoolTrackingOn = !v9;
          FxDriverGlobals->FxVerifyOn = !v9;
          FxDriverGlobals->FxVerifierDbgBreakOnError = !v9;
          if ( !v9 )
          {
            FxDriverGlobals->Public.DriverFlags |= 0xCu;
            FxDriverGlobalsInitializeDebugExtension(FxDriverGlobals, hWdf.m_Key);
          }
          if ( verifyDownlevelValue )
            FxDriverGlobals->FxVerifyDownlevel = 1;
          else
            FxDriverGlobals->FxVerifyDownlevel = 0;
          m_Key = hWdf.m_Key;
          RtlInitUnicodeString(&DestinationString, L"VerifyOn");
          timeoutValue = 16;
          v11 = ZwQueryValueKey(
                  m_Key,
                  &DestinationString,
                  KeyValuePartialInformation,
                  &KeyValueInformation,
                  0x10u,
                  &timeoutValue);
          if ( ((int)(v11 + 0x80000000) >= 0 && v11 != -2147483643
             || *(_DWORD *)(&KeyValueInformation.MaximumLength + 1) == 4)
            && v11 >= 0 )
          {
            FxDriverGlobals->FxVerifyOn = HIDWORD(KeyValueInformation.Buffer) != 0;
          }
          if ( FxDriverGlobals->FxVerifyOn )
            FxDriverGlobals->Public.DriverFlags |= 4u;
          v12 = hWdf.m_Key;
          RtlInitUnicodeString(&DestinationString, L"DbgBreakOnError");
          timeoutValue = 16;
          v13 = ZwQueryValueKey(
                  v12,
                  &DestinationString,
                  KeyValuePartialInformation,
                  &KeyValueInformation,
                  0x10u,
                  &timeoutValue);
          if ( (((v13 + 0x80000000) & 0x80000000) == 0 && v13 != -2147483643
             || *(_DWORD *)(&KeyValueInformation.MaximumLength + 1) == 4)
            && v13 >= 0 )
          {
            FxDriverGlobals->FxVerifierDbgBreakOnError = HIDWORD(KeyValueInformation.Buffer) != 0;
          }
          v14 = hWdf.m_Key;
          RtlInitUnicodeString(&DestinationString, L"DbgBreakOnDeviceStateError");
          timeoutValue = 16;
          v15 = ZwQueryValueKey(
                  v14,
                  &DestinationString,
                  KeyValuePartialInformation,
                  &KeyValueInformation,
                  0x10u,
                  &timeoutValue);
          if ( (((v15 + 0x80000000) & 0x80000000) == 0 && v15 != -2147483643
             || *(_DWORD *)(&KeyValueInformation.MaximumLength + 1) == 4)
            && v15 >= 0 )
          {
            FxDriverGlobals->FxVerifierDbgBreakOnDeviceStateError = HIDWORD(KeyValueInformation.Buffer) != 0;
          }
          if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
          {
            ObjectAttributes = *(_OBJECT_ATTRIBUTES *)L"DbgWaitForSignalTimeoutInSec";
            v43 = aDbgwaitforsign[28];
            timeoutValue = 0;
            *(_DWORD *)&KeyValueInformation.Length = 3801144;
            KeyValueInformation.Buffer = (wchar_t *)&ObjectAttributes;
            v42 = *(_QWORD *)L"nSec";
            if ( FxRegKey::_QueryULong(hWdf.m_Key, &KeyValueInformation, &timeoutValue) >= 0 )
              FxDriverGlobals->FxVerifierDbgWaitForSignalTimeoutInSec = timeoutValue;
          }
          wcscpy(timeoutName_buffer, L"DbgWaitForWakeInterruptIsrTimeoutInSec");
          timeoutName.Buffer = timeoutName_buffer;
          v16 = FxDriverGlobals->WdfBindInfo;
          *(_DWORD *)&timeoutName.Length = 5111884;
          v17 = v16->Version.Major;
          if ( v17 > 1 || v17 == 1 && v16->Version.Minor >= 0xD )
          {
            if ( (timeoutValue = 16,
                  v18 = ZwQueryValueKey(
                          hWdf.m_Key,
                          &timeoutName,
                          KeyValuePartialInformation,
                          &KeyValueInformation,
                          0x10u,
                          &timeoutValue),
                  ((v18 + 0x80000000) & 0x80000000) == 0)
              && v18 != -2147483643
              || *(_DWORD *)(&KeyValueInformation.MaximumLength + 1) == 4 )
            {
              if ( v18 >= 0 )
                FxDriverGlobals->DbgWaitForWakeInterruptIsrTimeoutInSec = HIDWORD(KeyValueInformation.Buffer);
            }
          }
          FxDriverGlobals->FxForceLogsInMiniDump = forceLogsInMiniDump != 0;
          FxDriverGlobals->FxTrackDriverForMiniDumpLog = trackDriverForMiniDumpLog != 0;
          FxDriverGlobals->FxRequestParentOptimizationOn = requestParentOptimizationOn != 0;
          FxDriverGlobals->FxDsfOn = dsfValue != 0;
          FxDriverGlobals->RemoveLockOptionFlags = removeLockOptionFlags;
        }
      }
    }
    if ( hWdf.m_Key )
      ZwClose(hWdf.m_Key);
    if ( hDriver.m_Key )
      ZwClose(hDriver.m_Key);
  }
}
