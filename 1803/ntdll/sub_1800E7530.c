/*
 * XREFs of sub_1800E7530 @ 0x1800E7530
 * Callers:
 *     RtlSetDynamicTimeZoneInformation @ 0x1800E7490 (RtlSetDynamicTimeZoneInformation.c)
 *     RtlSetTimeZoneInformation @ 0x1800E74A0 (RtlSetTimeZoneInformation.c)
 * Callees:
 *     sub_18000AF44 @ 0x18000AF44 (sub_18000AF44.c)
 *     RtlWriteRegistryValue @ 0x180089A30 (RtlWriteRegistryValue.c)
 *     wcsnlen @ 0x180090E20 (wcsnlen.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall sub_1800E7530(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  size_t v5; // rax
  int v6; // r14d
  __int64 result; // rax
  size_t v8; // rax
  int v9; // r13d
  size_t v10; // rax
  int v11; // edi
  int v12; // edi
  int *v13; // rax
  int v14; // [rsp+70h] [rbp+40h] BYREF
  int v15; // [rsp+80h] [rbp+50h] BYREF
  __int64 v16; // [rsp+88h] [rbp+58h] BYREF

  v2 = a1 + 4;
  v5 = wcsnlen((const wchar_t *)(a1 + 4), 0x20uLL);
  v6 = v5;
  if ( v5 >= 0x20 )
    return 3221225485LL;
  v8 = wcsnlen((const wchar_t *)(a1 + 88), 0x20uLL);
  v9 = v8;
  if ( v8 >= 0x20 )
    return 3221225485LL;
  if ( a2 < 0x1B0 )
  {
    v11 = 0;
  }
  else
  {
    v10 = wcsnlen((const wchar_t *)(a1 + 172), 0x80uLL);
    v11 = v10;
    if ( v10 >= 0x80 )
      return 3221225485LL;
  }
  result = sub_18000AF44(2, (__int64)L"TimeZoneInformation", 1, &v16);
  if ( (int)result >= 0 )
  {
    if ( (int)RtlWriteRegistryValue(0x40000000, v16, L"Bias", 4, a1, 4) < 0
      || (int)RtlWriteRegistryValue(0x40000000, v16, L"StandardName", 1, v2, 2 * v6 + 2) < 0
      || (int)RtlWriteRegistryValue(0x40000000, v16, L"StandardBias", 4, a1 + 84, 4) < 0
      || (int)RtlWriteRegistryValue(0x40000000, v16, L"StandardStart", 3, a1 + 68, 16) < 0
      || (int)RtlWriteRegistryValue(0x40000000, v16, L"DaylightName", 1, a1 + 88, 2 * v9 + 2) < 0
      || (int)RtlWriteRegistryValue(0x40000000, v16, L"DaylightBias", 4, a1 + 168, 4) < 0
      || (int)RtlWriteRegistryValue(0x40000000, v16, L"DaylightStart", 3, a1 + 152, 16) < 0
      || a2 < 0x1B0 )
    {
      LOWORD(v14) = 0;
      v12 = RtlWriteRegistryValue(0x40000000, v16, L"TimeZoneKeyName", 1, (__int64)&v14, 2);
      if ( v12 >= 0 )
      {
        v15 = *(unsigned __int8 *)(a1 + 428);
        v13 = &v15;
        goto LABEL_21;
      }
    }
    else
    {
      v12 = RtlWriteRegistryValue(0x40000000, v16, L"TimeZoneKeyName", 1, a1 + 172, 2 * v11 + 2);
      if ( v12 >= 0 )
      {
        v14 = *(unsigned __int8 *)(a1 + 428);
        v13 = &v14;
LABEL_21:
        v12 = RtlWriteRegistryValue(0x40000000, v16, L"DynamicDaylightTimeDisabled", 4, (__int64)v13, 4);
      }
    }
    ZwClose();
    return (unsigned int)v12;
  }
  return result;
}
