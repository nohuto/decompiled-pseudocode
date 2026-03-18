/*
 * XREFs of LdrpGetResourceFileName @ 0x140156A08
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x140013300 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     __report_rangecheckfailure @ 0x1401DD43C (__report_rangecheckfailure.c)
 */

int __fastcall LdrpGetResourceFileName(__int64 a1, __int64 a2, const WCHAR *a3, UNICODE_STRING *a4)
{
  int v7; // edx
  int v8; // ecx
  size_t v9; // rsi
  unsigned __int64 v10; // rsi
  int result; // eax
  WCHAR Source[264]; // [rsp+20h] [rbp-248h] BYREF

  if ( !a1 || !a4 || !a3 )
    return -1073741811;
  v7 = *(unsigned __int16 *)(a1 + 88);
  v8 = *(unsigned __int16 *)(a1 + 72);
  if ( (unsigned int)(v8 - v7) >= 0x208 || (unsigned __int16)v8 <= (unsigned __int16)v7 )
    return -1073020927;
  v9 = (unsigned int)(v8 - v7);
  memmove(Source, *(const void **)(a1 + 80), v9);
  v10 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v10 >= 0x208 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)Source + v10) = 0;
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
