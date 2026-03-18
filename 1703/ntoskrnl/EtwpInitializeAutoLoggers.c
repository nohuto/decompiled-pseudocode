/*
 * XREFs of EtwpInitializeAutoLoggers @ 0x1405B059C
 * Callers:
 *     EtwInitializeSiloState @ 0x1405C7308 (EtwInitializeSiloState.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14017E580 (ZwEnumerateKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlNtStatusToDosError @ 0x140430830 (RtlNtStatusToDosError.c)
 *     EtwStartAutoLogger @ 0x140555730 (EtwStartAutoLogger.c)
 *     RtlWriteRegistryValue @ 0x140556350 (RtlWriteRegistryValue.c)
 *     EtwpEnableKeyProviders @ 0x1405AE660 (EtwpEnableKeyProviders.c)
 */

void EtwpInitializeAutoLoggers()
{
  wchar_t *PoolWithTag; // rdi
  ULONG v1; // esi
  NTSTATUS v2; // ebx
  _QWORD *CurrentServerSiloGlobals; // rax
  NTSTATUS v4; // ecx
  unsigned int ValueData; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ValueData_4; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int KeyInformation[3]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v12; // [rsp+A4h] [rbp-64h]
  wchar_t v13[136]; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR SourceString[16]; // [rsp+1B8h] [rbp+B0h] BYREF

  ValueData_4 = 0;
  wcscpy(SourceString, L"GlobalLogger");
  EtwStartAutoLogger(SourceString, L"WMI\\GlobalLogger", &ValueData);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x50777445u);
  if ( PoolWithTag )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\AutoLogger");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v1 = 0;
      do
      {
        v2 = ZwEnumerateKey(KeyHandle, v1, KeyBasicInformation, KeyInformation, 0x11Eu, &ResultLength);
        if ( v2 < 0 )
        {
          v4 = v2;
          if ( v2 == -2147483622 )
            v4 = 0;
          ValueData_4 = RtlNtStatusToDosError(v4);
          RtlWriteRegistryValue(2u, L"WMI\\AutoLogger", L"Status", 4u, &ValueData_4, 4u);
          if ( v2 == -2147483643 || v2 == -1073741789 )
            v2 = 0;
        }
        else if ( v12 < 0x102 )
        {
          v13[(unsigned __int64)v12 >> 1] = 0;
          if ( !RtlStringCbPrintfW(PoolWithTag, 0x120uLL, L"%ws\\%ws", L"WMI\\AutoLogger")
            && (int)EtwStartAutoLogger(v13, PoolWithTag, &ValueData) >= 0 )
          {
            if ( ValueData )
            {
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
              EtwpEnableKeyProviders(CurrentServerSiloGlobals[108], ValueData, PoolWithTag, KeyInformation, (ULONG)v13);
            }
          }
        }
        ++v1;
      }
      while ( v2 >= 0 );
      ZwClose(KeyHandle);
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}
