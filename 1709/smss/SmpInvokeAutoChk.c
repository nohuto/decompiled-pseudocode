/*
 * XREFs of SmpInvokeAutoChk @ 0x140004E30
 * Callers:
 *     SmpExecuteCommand @ 0x1400025D8 (SmpExecuteCommand.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140001C54 (RtlStringCbPrintfW.c)
 *     SmpExecuteImage @ 0x140002C6C (SmpExecuteImage.c)
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpInvokeAutoChk(const UNICODE_STRING *a1, __int64 a2, PCUNICODE_STRING Source, __int16 a4)
{
  int v8; // r9d
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t pszDest[512]; // [rsp+50h] [rbp-B0h] BYREF

  if ( (a4 & 0x10) != 0 )
  {
    if ( RtlStringCbPrintfW(pszDest, 0x400uLL, L"%wZ program not found - skipping AUTOCHECK\n", a1) >= 0 )
    {
      RtlInitUnicodeStringEx(&Destination, pszDest);
      NtDisplayString(&Destination);
    }
  }
  else
  {
    *(_DWORD *)&Destination.Length = 0x4000000;
    Destination.Buffer = pszDest;
    if ( RtlAppendUnicodeStringToString(&Destination, a1) >= 0
      && RtlAppendUnicodeToString(&Destination, L" ") >= 0
      && RtlAppendUnicodeStringToString(&Destination, Source) >= 0 )
    {
      SmpExecuteImage((__int64)a1, a2, (__int64)&Destination, v8, 0LL, a4 & 0xFFFB, 0LL);
    }
  }
  return 0LL;
}
