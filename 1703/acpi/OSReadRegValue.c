/*
 * XREFs of OSReadRegValue @ 0x1C0089F5C
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C005CD84 (AMLIAddNextNamespaceOverrideObject.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0083718 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitGlobalHeapSize @ 0x1C0089EA8 (ACPIInitGlobalHeapSize.c)
 *     ACPIThermalGetParameter @ 0x1C009174C (ACPIThermalGetParameter.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00A15A8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00A17EC (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     ACPIInitializeAMLI @ 0x1C00AB7A8 (ACPIInitializeAMLI.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00AB858 (ACPIInitReadRegistryKeys.c)
 *     AcpiDiagInitialize @ 0x1C00ABBD8 (AcpiDiagInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0007D24 (WPP_RECORDER_SF_LL.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     OSOpenHandle @ 0x1C00838F8 (OSOpenHandle.c)
 */

__int64 __fastcall OSReadRegValue(PCSZ SourceString, void *a2, _BYTE *a3, unsigned int *a4)
{
  NTSTATUS v8; // eax
  int v9; // edx
  unsigned int v10; // ebx
  NTSTATUS v11; // eax
  int v12; // edx
  unsigned int v13; // r13d
  WCHAR *PoolWithTag; // rdi
  ULONG Length; // ebx
  int v16; // edx
  NTSTATUS v17; // eax
  int v18; // edx
  const WCHAR *v19; // r15
  ULONG v20; // esi
  unsigned int v21; // ebx
  __int64 v22; // rcx
  NTSTATUS v23; // eax
  int v24; // edx
  int v25; // edx
  int v26; // eax
  int v27; // edx
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
    v26 = OSOpenHandle(
            "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters",
            0LL,
            (__int64)&KeyHandle);
    v10 = v26;
    if ( v26 < 0 || !KeyHandle )
    {
      LOBYTE(v27) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v27,
        11,
        19,
        (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
        v26);
      return v10;
    }
  }
  RtlInitAnsiString(&DestinationString, SourceString);
  v8 = RtlAnsiStringToUnicodeString(&ValueName, &DestinationString, 1u);
  v10 = v8;
  if ( v8 < 0 )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      11,
      20,
      (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
      v8);
    if ( !a2 )
      ZwClose(KeyHandle);
    return v10;
  }
  v11 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, 0LL, 0, &ResultLength);
  v10 = v11;
  v13 = -2147483643;
  if ( v11 != -1073741789 && v11 != -2147483643 )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      11,
      21,
      (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
      v11);
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
        goto LABEL_11;
    }
    Length = ResultLength;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4D706341u);
    if ( !PoolWithTag )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        22,
        22,
        (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
        ResultLength);
      RtlFreeUnicodeString(&ValueName);
      if ( !a2 )
        ZwClose(KeyHandle);
      return 3221225626LL;
    }
    v17 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, PoolWithTag, Length, &ResultLength);
    v10 = v17;
    if ( v17 != -2147483643 && v17 != -1073741789 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  if ( v17 < 0 )
  {
    LOBYTE(v18) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v18,
      21,
      23,
      (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
      v17);
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(KeyHandle);
    ExFreePoolWithTag(PoolWithTag, 0);
    return v10;
  }
LABEL_11:
  RtlFreeUnicodeString(&ValueName);
  if ( !a2 )
    ZwClose(KeyHandle);
  if ( *(_DWORD *)PoolWithTag == 1 || *(_DWORD *)PoolWithTag == 7 )
  {
    v19 = PoolWithTag + 4;
    v20 = (ResultLength - 8) >> 1;
    v21 = 0;
    if ( !v20 )
      goto LABEL_56;
    do
    {
      v22 = v20 - 1;
      if ( !v19[v22] )
        break;
      --v20;
    }
    while ( (_DWORD)v22 );
    if ( v20 )
    {
      while ( *v19 )
      {
        RtlInitUnicodeString(&ValueName, v19);
        v23 = RtlUnicodeStringToAnsiString(&DestinationString, &ValueName, 1u);
        v13 = v23;
        if ( v23 < 0 )
        {
          LOBYTE(v24) = 2;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v24,
            22,
            24,
            (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
            v23);
          goto LABEL_55;
        }
        v21 += DestinationString.MaximumLength;
        if ( *a4 >= v21 )
        {
          memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
          a3 += DestinationString.MaximumLength;
        }
        RtlFreeAnsiString(&DestinationString);
        v20 -= ValueName.Length >> 1;
        v19 += (unsigned __int64)ValueName.Length >> 1;
        if ( *(_DWORD *)PoolWithTag == 7 )
        {
          if ( !v20 )
            break;
          ++v19;
          --v20;
        }
        if ( !v20 )
          break;
      }
      v13 = -2147483643;
      if ( !v21 )
        goto LABEL_56;
    }
    else
    {
LABEL_56:
      v21 = 1;
      if ( *a4 )
        *a3++ = 0;
    }
    if ( *(_DWORD *)PoolWithTag == 7 && *a4 >= ++v21 )
      *a3 = 0;
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( *a4 >= v21 )
    {
      *a4 = v21;
      return 0LL;
    }
    LOBYTE(v25) = 2;
    WPP_RECORDER_SF_LL(
      WPP_GLOBAL_Control->DeviceExtension,
      v25,
      11,
      25,
      (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
      *a4,
      v21);
    *a4 = v21;
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
LABEL_55:
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v13;
}
