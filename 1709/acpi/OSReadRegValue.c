/*
 * XREFs of OSReadRegValue @ 0x1C008E0E8
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C005CB74 (AMLIAddNextNamespaceOverrideObject.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008798C (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitGlobalHeapSize @ 0x1C008E034 (ACPIInitGlobalHeapSize.c)
 *     ACPIThermalGetParameter @ 0x1C009373C (ACPIThermalGetParameter.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00A41F8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00A443C (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     AcpiDiagInitialize @ 0x1C00AD280 (AcpiDiagInitialize.c)
 *     ACPIInitializeAMLI @ 0x1C00AD404 (ACPIInitializeAMLI.c)
 *     AMLIInitialize @ 0x1C00AD4B4 (AMLIInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00ADBC0 (ACPIInitReadRegistryKeys.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0011ED4 (WPP_RECORDER_SF_LL.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     OSOpenHandle @ 0x1C0087914 (OSOpenHandle.c)
 */

__int64 __fastcall OSReadRegValue(PCSZ SourceString, void *a2, _BYTE *a3, unsigned int *a4)
{
  int v8; // eax
  int v9; // edx
  unsigned int v10; // ebx
  NTSTATUS v11; // eax
  int v12; // edx
  NTSTATUS v13; // eax
  int v14; // edx
  unsigned int v15; // r13d
  WCHAR *PoolWithTag; // rdi
  ULONG Length; // ebx
  int v19; // edx
  NTSTATUS v20; // eax
  int v21; // edx
  const WCHAR *v22; // r15
  ULONG v23; // esi
  unsigned int v24; // ebx
  __int64 v25; // rcx
  NTSTATUS v26; // eax
  int v27; // edx
  int v28; // edx
  unsigned int v29; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-30h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  if ( a2 )
  {
    KeyHandle = a2;
  }
  else
  {
    v8 = OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters", 0LL, &KeyHandle);
    v10 = v8;
    if ( v8 < 0 || !KeyHandle )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        11,
        19,
        (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
        v8);
      return v10;
    }
  }
  RtlInitAnsiString(&DestinationString, SourceString);
  v11 = RtlAnsiStringToUnicodeString(&ValueName, &DestinationString, 1u);
  v10 = v11;
  if ( v11 < 0 )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      11,
      20,
      (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
      v11);
    if ( !a2 )
      ZwClose(KeyHandle);
    return v10;
  }
  v13 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, 0LL, 0, &ResultLength);
  v10 = v13;
  v15 = -2147483643;
  if ( v13 != -1073741789 && v13 != -2147483643 )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      11,
      21,
      (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
      v13);
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(KeyHandle);
    if ( (v10 & 0x80000000) == 0 )
      return (unsigned int)-1073741823;
    return v10;
  }
  while ( 1 )
  {
    if ( v10 != -2147483643 )
    {
      PoolWithTag = 0LL;
      if ( v10 != -1073741789 )
        goto LABEL_19;
    }
    Length = ResultLength;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4D706341u);
    if ( !PoolWithTag )
    {
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v19,
        22,
        22,
        (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
        ResultLength);
      RtlFreeUnicodeString(&ValueName);
      if ( !a2 )
        ZwClose(KeyHandle);
      return 3221225626LL;
    }
    v20 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, PoolWithTag, Length, &ResultLength);
    v10 = v20;
    if ( v20 != -2147483643 && v20 != -1073741789 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  if ( v20 < 0 )
  {
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v21,
      21,
      23,
      (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
      v20);
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(KeyHandle);
    ExFreePoolWithTag(PoolWithTag, 0);
    return v10;
  }
LABEL_19:
  RtlFreeUnicodeString(&ValueName);
  if ( !a2 )
    ZwClose(KeyHandle);
  if ( *(_DWORD *)PoolWithTag == 1 || *(_DWORD *)PoolWithTag == 7 )
  {
    v22 = PoolWithTag + 4;
    v23 = (ResultLength - 8) >> 1;
    v24 = 0;
    if ( !v23 )
      goto LABEL_55;
    do
    {
      v25 = v23 - 1;
      if ( !v22[v25] )
        break;
      --v23;
    }
    while ( (_DWORD)v25 );
    if ( v23 )
    {
      while ( *v22 )
      {
        RtlInitUnicodeString(&ValueName, v22);
        v26 = RtlUnicodeStringToAnsiString(&DestinationString, &ValueName, 1u);
        v15 = v26;
        if ( v26 < 0 )
        {
          LOBYTE(v27) = 2;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v27,
            22,
            24,
            (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
            v26);
          goto LABEL_54;
        }
        v24 += DestinationString.MaximumLength;
        if ( *a4 >= v24 )
        {
          memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
          a3 += DestinationString.MaximumLength;
        }
        RtlFreeAnsiString(&DestinationString);
        v23 -= ValueName.Length >> 1;
        v22 += (unsigned __int64)ValueName.Length >> 1;
        if ( *(_DWORD *)PoolWithTag == 7 )
        {
          if ( !v23 )
            break;
          ++v22;
          --v23;
        }
        if ( !v23 )
          break;
      }
      v15 = -2147483643;
      if ( !v24 )
        goto LABEL_55;
    }
    else
    {
LABEL_55:
      v24 = 1;
      if ( *a4 )
        *a3++ = 0;
    }
    if ( *(_DWORD *)PoolWithTag == 7 && *a4 >= ++v24 )
      *a3 = 0;
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( *a4 >= v24 )
    {
      *a4 = v24;
      return 0LL;
    }
    LOBYTE(v28) = 2;
    WPP_RECORDER_SF_LL(
      WPP_GLOBAL_Control->DeviceExtension,
      v28,
      11,
      25,
      (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
      *a4,
      v24);
    *a4 = v24;
  }
  else
  {
    v29 = *((_DWORD *)PoolWithTag + 1);
    if ( *a4 >= v29 )
    {
      memmove(a3, PoolWithTag + 4, v29);
      *a4 = *((_DWORD *)PoolWithTag + 1);
      ExFreePoolWithTag(PoolWithTag, 0);
      return 0LL;
    }
    *a4 = v29;
LABEL_54:
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v15;
}
