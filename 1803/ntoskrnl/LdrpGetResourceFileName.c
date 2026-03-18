/*
 * XREFs of LdrpGetResourceFileName @ 0x14016DD70
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14013DC84 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     __report_rangecheckfailure @ 0x14021F8EC (__report_rangecheckfailure.c)
 */

int __fastcall LdrpGetResourceFileName(__int64 a1, __int64 a2, const WCHAR *a3, UNICODE_STRING *a4)
{
  int v7; // edx
  int v8; // ecx
  unsigned int v9; // eax
  __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  int result; // eax
  WCHAR Source[264]; // [rsp+20h] [rbp-248h] BYREF

  if ( !a1 || !a4 || !a3 )
    return -1073741811;
  v7 = *(unsigned __int16 *)(a1 + 88);
  v8 = *(unsigned __int16 *)(a1 + 72);
  v9 = v8 - v7;
  if ( (unsigned int)(v8 - v7) >= 0x208 || (unsigned __int16)v8 <= (unsigned __int16)v7 )
    return -1073020927;
  v10 = v9;
  memmove(Source, *(const void **)(a1 + 80), v9);
  v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v11 >= 0x208 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)Source + v11) = 0;
  result = RtlAppendUnicodeToString(a4, Source);
  if ( result >= 0 )
  {
    RtlAppendUnicodeToString(a4, a3);
    RtlAppendUnicodeToString(a4, L"\\");
    result = RtlAppendUnicodeToString(a4, *(PCWSTR *)(a1 + 96));
    if ( result >= 0 )
      return RtlAppendUnicodeToString(a4, L".mui");
  }
  return result;
}
