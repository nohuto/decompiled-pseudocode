/*
 * XREFs of FastGetProfileStringFromIDW @ 0x1C0073C00
 * Callers:
 *     xxxODI_ColorInit @ 0x1C00737A0 (xxxODI_ColorInit.c)
 * Callees:
 *     FastGetProfileStringW @ 0x1C0073D50 (FastGetProfileStringW.c)
 *     RtlLoadStringOrError @ 0x1C0073FB0 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileStringFromIDW(
        PCUNICODE_STRING Source,
        __int64 a2,
        ULONG a3,
        __int64 a4,
        NTSTRSAFE_PWSTR pszDest,
        size_t a6,
        int a7)
{
  size_t cchDest; // [rsp+28h] [rbp-E0h]
  _BYTE v10[160]; // [rsp+40h] [rbp-C8h] BYREF

  RtlLoadStringOrError(a3, v10);
  LODWORD(cchDest) = a6;
  return FastGetProfileStringW(Source, pszDest, cchDest, a7);
}
