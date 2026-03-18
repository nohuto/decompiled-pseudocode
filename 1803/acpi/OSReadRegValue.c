/*
 * XREFs of OSReadRegValue @ 0x1C00829B8
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0045A38 (AMLIAddNextNamespaceOverrideObject.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0071964 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitGlobalHeapSize @ 0x1C007D19C (ACPIInitGlobalHeapSize.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C0081D08 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C0081F50 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     ACPIInitShutdownNotification @ 0x1C0087050 (ACPIInitShutdownNotification.c)
 *     ACPIThermalGetParameter @ 0x1C0089198 (ACPIThermalGetParameter.c)
 *     AcpiDiagInitialize @ 0x1C0098078 (AcpiDiagInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C0099B04 (ACPIInitReadRegistryKeys.c)
 *     ACPIInitializeAMLI @ 0x1C009A2F4 (ACPIInitializeAMLI.c)
 *     AMLIInitialize @ 0x1C009B7E4 (AMLIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     WPP_RECORDER_SF_DD @ 0x1C003803C (WPP_RECORDER_SF_DD.c)
 *     OSOpenHandle @ 0x1C0071844 (OSOpenHandle.c)
 */

__int64 __fastcall OSReadRegValue(PCSZ SourceString, void *a2, _BYTE *a3, unsigned int *a4)
{
  int v8; // eax
  int v9; // edx
  unsigned int v10; // ebx
  NTSTATUS v12; // eax
  int v13; // edx
  NTSTATUS v14; // eax
  int v15; // edx
  unsigned int v16; // r13d
  WCHAR *PoolWithTag; // rdi
  ULONG Length; // ebx
  int v19; // edx
  NTSTATUS v20; // eax
  int v21; // edx
  unsigned int v22; // eax
  const WCHAR *v23; // r15
  __int64 v24; // rsi
  unsigned int v25; // ebx
  int v26; // edx
  WCHAR v27; // cx
  bool v28; // zf
  NTSTATUS v29; // eax
  int v30; // edx
  int v31; // edx
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp+38h] BYREF

  Handle = 0LL;
  ResultLength = 0;
  if ( a2 )
  {
    Handle = a2;
  }
  else
  {
    v8 = OSOpenHandle(
           "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters",
           0LL,
           (__int64)&Handle);
    v10 = v8;
    if ( v8 < 0 || !Handle )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        11,
        19,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        v8);
      return v10;
    }
  }
  RtlInitAnsiString(&DestinationString, SourceString);
  v12 = RtlAnsiStringToUnicodeString(&ValueName, &DestinationString, 1u);
  v10 = v12;
  if ( v12 < 0 )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      11,
      20,
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      v12);
    if ( !a2 )
      ZwClose(Handle);
    return v10;
  }
  v14 = ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformationAlign64, 0LL, 0, &ResultLength);
  v16 = -2147483643;
  v10 = v14;
  if ( v14 != -2147483643 && v14 != -1073741789 )
  {
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      11,
      21,
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      v14);
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(Handle);
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
        goto LABEL_27;
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
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        ResultLength);
      RtlFreeUnicodeString(&ValueName);
      if ( !a2 )
        ZwClose(Handle);
      return 3221225626LL;
    }
    v20 = ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformationAlign64, PoolWithTag, Length, &ResultLength);
    v10 = v20;
    if ( v20 != -2147483643 && v20 != -1073741789 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  if ( v20 >= 0 )
  {
LABEL_27:
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(Handle);
    if ( *(_DWORD *)PoolWithTag == 1 || *(_DWORD *)PoolWithTag == 7 )
    {
      v23 = PoolWithTag + 4;
      LODWORD(v24) = (ResultLength - 8) >> 1;
      v25 = 0;
      if ( (_DWORD)v24 )
      {
        while ( 1 )
        {
          v26 = v24;
          v24 = (unsigned int)(v24 - 1);
          v27 = v23[v24];
          v28 = v27 == 0;
          if ( !v27 )
            break;
          if ( !(_DWORD)v24 )
          {
            v28 = v27 == 0;
            break;
          }
        }
        if ( v28 )
          LODWORD(v24) = v26;
        if ( (_DWORD)v24 )
        {
          do
          {
            if ( !*v23 )
              break;
            RtlInitUnicodeString(&ValueName, v23);
            v29 = RtlUnicodeStringToAnsiString(&DestinationString, &ValueName, 1u);
            v16 = v29;
            if ( v29 < 0 )
            {
              LOBYTE(v30) = 2;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                v30,
                22,
                24,
                (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
                v29);
              goto LABEL_58;
            }
            v25 += DestinationString.MaximumLength;
            if ( *a4 >= v25 )
            {
              memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
              a3 += DestinationString.MaximumLength;
            }
            RtlFreeAnsiString(&DestinationString);
            LODWORD(v24) = v24 - (ValueName.Length >> 1);
            v23 += (unsigned __int64)ValueName.Length >> 1;
            if ( *(_DWORD *)PoolWithTag == 7 )
            {
              if ( !(_DWORD)v24 )
                break;
              ++v23;
              LODWORD(v24) = v24 - 1;
            }
          }
          while ( (_DWORD)v24 );
          v16 = -2147483643;
          if ( v25 )
            goto LABEL_52;
        }
      }
      v25 = 1;
      if ( *a4 )
        *a3++ = 0;
LABEL_52:
      if ( *(_DWORD *)PoolWithTag == 7 && *a4 >= ++v25 )
        *a3 = 0;
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( *a4 >= v25 )
      {
        *a4 = v25;
        return 0LL;
      }
      LOBYTE(v31) = 2;
      WPP_RECORDER_SF_DD(
        WPP_GLOBAL_Control->DeviceExtension,
        v31,
        11,
        25,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        *a4,
        v25);
      *a4 = v25;
    }
    else
    {
      v22 = *((_DWORD *)PoolWithTag + 1);
      if ( *a4 >= v22 )
      {
        memmove(a3, PoolWithTag + 4, v22);
        *a4 = *((_DWORD *)PoolWithTag + 1);
        ExFreePoolWithTag(PoolWithTag, 0);
        return 0LL;
      }
      *a4 = v22;
LABEL_58:
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    return v16;
  }
  LOBYTE(v21) = 2;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v21,
    21,
    23,
    (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
    v20);
  RtlFreeUnicodeString(&ValueName);
  if ( !a2 )
    ZwClose(Handle);
  ExFreePoolWithTag(PoolWithTag, 0);
  return v10;
}
