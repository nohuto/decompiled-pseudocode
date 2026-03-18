/*
 * XREFs of ?SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z @ 0x1C01B7C44
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C00DAAA4 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall SetFilterKeys(struct _UNICODE_STRING *a1, struct tagFILTERKEYS *a2)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  wchar_t pszDest[40]; // [rsp+20h] [rbp-88h] BYREF

  RtlStringCchPrintfW(pszDest, 0x28uLL, L"%d", *((unsigned int *)a2 + 1));
  v4 = FastWriteProfileStringW(a1, 15LL, L"Flags", pszDest);
  RtlStringCchPrintfW(pszDest, 0x28uLL, L"%d", *((unsigned int *)a2 + 2));
  v5 = FastWriteProfileStringW(a1, 15LL, L"DelayBeforeAcceptance", pszDest) & v4;
  RtlStringCchPrintfW(pszDest, 0x28uLL, L"%d", *((unsigned int *)a2 + 3));
  v6 = FastWriteProfileStringW(a1, 15LL, L"AutoRepeatDelay", pszDest) & v5;
  RtlStringCchPrintfW(pszDest, 0x28uLL, L"%d", *((unsigned int *)a2 + 4));
  v7 = FastWriteProfileStringW(a1, 15LL, L"AutoRepeatRate", pszDest) & v6;
  RtlStringCchPrintfW(pszDest, 0x28uLL, L"%d", *((unsigned int *)a2 + 5));
  return v7 & (unsigned int)FastWriteProfileStringW(a1, 15LL, L"BounceTime", pszDest);
}
