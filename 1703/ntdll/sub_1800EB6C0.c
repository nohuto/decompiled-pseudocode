/*
 * XREFs of sub_1800EB6C0 @ 0x1800EB6C0
 * Callers:
 *     RtlSetDynamicTimeZoneInformation @ 0x1800EB620 (RtlSetDynamicTimeZoneInformation.c)
 *     RtlSetTimeZoneInformation @ 0x1800EB630 (RtlSetTimeZoneInformation.c)
 * Callees:
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     RtlWriteRegistryValue @ 0x18008F620 (RtlWriteRegistryValue.c)
 *     wcsnlen @ 0x18009BBD0 (wcsnlen.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall sub_1800EB6C0(wchar_t *ValueData, unsigned int a2)
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
  result = sub_180056CCC(2, L"TimeZoneInformation", 1, (HANDLE *)&Path);
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
