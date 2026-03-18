/*
 * XREFs of AslPathToSystemPath_Ustr @ 0x14072F104
 * Callers:
 *     AslPathToSystemPath @ 0x14072F0D8 (AslPathToSystemPath.c)
 * Callees:
 *     RtlStringCchCatW @ 0x14006DAE4 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AslUnicodeStringCreate @ 0x14072E7B8 (AslUnicodeStringCreate.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathToSystemPath_Ustr(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  wchar_t *v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  wchar_t v7; // ax
  wchar_t pszDest[264]; // [rsp+30h] [rbp-238h] BYREF

  memset(pszDest, 0, 0x208uLL);
  *(_QWORD *)&DestinationString->Length = 0LL;
  v4 = pszDest;
  DestinationString->Buffer = 0LL;
  v5 = 260LL;
  v6 = 0;
  while ( v5 != -2147483386 )
  {
    v7 = *(wchar_t *)((char *)v4 + (char *)L"\\SystemRoot" - (char *)pszDest);
    if ( !v7 )
      break;
    *v4++ = v7;
    if ( !--v5 )
    {
      --v4;
      v6 = -2147483643;
      break;
    }
  }
  *v4 = 0;
  if ( v6 < 0 )
    goto LABEL_7;
  if ( RtlStringCchCatW(pszDest, 0x104uLL, pszSrc) >= 0 )
  {
    v6 = AslUnicodeStringCreate(DestinationString, pszDest);
    if ( v6 < 0 )
    {
LABEL_7:
      AslLogCallPrintf(1LL);
      return (unsigned int)v6;
    }
    return 0LL;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 3221225485LL;
  }
}
