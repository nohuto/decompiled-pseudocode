/*
 * XREFs of RtlpSetTimeZoneInformationWorker @ 0x140722FCC
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1405C1FB4 (ExpRefreshTimeZoneInformation.c)
 *     RtlSetDynamicTimeZoneInformation @ 0x140722F90 (RtlSetDynamicTimeZoneInformation.c)
 *     RtlSetTimeZoneInformation @ 0x140722FB0 (RtlSetTimeZoneInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1407556D4 (ExpSetTimeZoneInformation.c)
 * Callees:
 *     wcsnlen @ 0x1401605E0 (wcsnlen.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x140521EDC (RtlpGetRegistryHandle.c)
 *     RtlWriteRegistryValue @ 0x14058C9E0 (RtlWriteRegistryValue.c)
 */

__int64 __fastcall RtlpSetTimeZoneInformationWorker(wchar_t *ValueData, unsigned int a2)
{
  char *v2; // rsi
  size_t v5; // rax
  int v6; // r14d
  __int64 result; // rax
  size_t v8; // rax
  int v9; // r13d
  size_t v10; // rax
  int v11; // edi
  NTSTATUS v12; // edi
  int *v13; // rax
  int v14; // [rsp+70h] [rbp+40h] BYREF
  int v15; // [rsp+80h] [rbp+50h] BYREF
  PCWSTR Path; // [rsp+88h] [rbp+58h] BYREF

  v2 = (char *)(ValueData + 2);
  v5 = wcsnlen(ValueData + 2, 0x20uLL);
  v6 = v5;
  if ( v5 >= 0x20 )
    return 3221225485LL;
  v8 = wcsnlen(ValueData + 44, 0x20uLL);
  v9 = v8;
  if ( v8 >= 0x20 )
    return 3221225485LL;
  if ( a2 < 0x1B0 )
  {
    v11 = 0;
  }
  else
  {
    v10 = wcsnlen(ValueData + 86, 0x80uLL);
    v11 = v10;
    if ( v10 >= 0x80 )
      return 3221225485LL;
  }
  result = RtlpGetRegistryHandle(2, L"TimeZoneInformation", 1, (HANDLE *)&Path);
  if ( (int)result >= 0 )
  {
    if ( RtlWriteRegistryValue(0x40000000u, Path, L"Bias", 4u, ValueData, 4u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"StandardName", 1u, v2, 2 * v6 + 2) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"StandardBias", 4u, ValueData + 42, 4u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"StandardStart", 3u, ValueData + 34, 0x10u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"DaylightName", 1u, ValueData + 44, 2 * v9 + 2) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"DaylightBias", 4u, ValueData + 84, 4u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"DaylightStart", 3u, ValueData + 76, 0x10u) < 0
      || a2 < 0x1B0 )
    {
      LOWORD(v14) = 0;
      v12 = RtlWriteRegistryValue(0x40000000u, Path, L"TimeZoneKeyName", 1u, &v14, 2u);
      if ( v12 >= 0 )
      {
        v15 = *((unsigned __int8 *)ValueData + 428);
        v13 = &v15;
        goto LABEL_21;
      }
    }
    else
    {
      v12 = RtlWriteRegistryValue(0x40000000u, Path, L"TimeZoneKeyName", 1u, ValueData + 86, 2 * v11 + 2);
      if ( v12 >= 0 )
      {
        v14 = *((unsigned __int8 *)ValueData + 428);
        v13 = &v14;
LABEL_21:
        v12 = RtlWriteRegistryValue(0x40000000u, Path, L"DynamicDaylightTimeDisabled", 4u, v13, 4u);
      }
    }
    ZwClose((HANDLE)Path);
    return (unsigned int)v12;
  }
  return result;
}
