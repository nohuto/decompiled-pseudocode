/*
 * XREFs of RtlpSetTimeZoneInformationWorker @ 0x1800EB0D0
 * Callers:
 *     RtlSetDynamicTimeZoneInformation @ 0x1800EB030 (RtlSetDynamicTimeZoneInformation.c)
 *     RtlSetTimeZoneInformation @ 0x1800EB040 (RtlSetTimeZoneInformation.c)
 * Callees:
 *     RtlpGetRegistryHandle @ 0x180067320 (RtlpGetRegistryHandle.c)
 *     RtlWriteRegistryValue @ 0x18008C780 (RtlWriteRegistryValue.c)
 *     wcsnlen @ 0x180096940 (wcsnlen.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

__int64 __fastcall RtlpSetTimeZoneInformationWorker(__int64 a1, unsigned int a2)
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
  HANDLE Handle; // [rsp+88h] [rbp+58h] BYREF

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
  result = RtlpGetRegistryHandle(2, L"TimeZoneInformation", 1, &Handle);
  if ( (int)result >= 0 )
  {
    if ( (int)RtlWriteRegistryValue(0x40000000, Handle, L"Bias", 4, a1, 4) < 0
      || (int)RtlWriteRegistryValue(0x40000000, Handle, L"StandardName", 1, v2, 2 * v6 + 2) < 0
      || (int)RtlWriteRegistryValue(0x40000000, Handle, L"StandardBias", 4, a1 + 84, 4) < 0
      || (int)RtlWriteRegistryValue(0x40000000, Handle, L"StandardStart", 3, a1 + 68, 16) < 0
      || (int)RtlWriteRegistryValue(0x40000000, Handle, L"DaylightName", 1, a1 + 88, 2 * v9 + 2) < 0
      || (int)RtlWriteRegistryValue(0x40000000, Handle, L"DaylightBias", 4, a1 + 168, 4) < 0
      || (int)RtlWriteRegistryValue(0x40000000, Handle, L"DaylightStart", 3, a1 + 152, 16) < 0
      || a2 < 0x1B0 )
    {
      LOWORD(v14) = 0;
      v12 = RtlWriteRegistryValue(0x40000000, Handle, L"TimeZoneKeyName", 1, (__int64)&v14, 2);
      if ( v12 >= 0 )
      {
        v15 = *(unsigned __int8 *)(a1 + 428);
        v13 = &v15;
        goto LABEL_21;
      }
    }
    else
    {
      v12 = RtlWriteRegistryValue(0x40000000, Handle, L"TimeZoneKeyName", 1, a1 + 172, 2 * v11 + 2);
      if ( v12 >= 0 )
      {
        v14 = *(unsigned __int8 *)(a1 + 428);
        v13 = &v14;
LABEL_21:
        v12 = RtlWriteRegistryValue(0x40000000, Handle, L"DynamicDaylightTimeDisabled", 4, (__int64)v13, 4);
      }
    }
    NtClose(Handle);
    return (unsigned int)v12;
  }
  return result;
}
