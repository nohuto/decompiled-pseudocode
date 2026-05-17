/*
 * XREFs of RtlpLangNameInMultiSzString @ 0x180050DA0
 * Callers:
 *     RtlpIsALicensedLIPLanguage @ 0x1800509D4 (RtlpIsALicensedLIPLanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180050D2C (RtlpIsALicensedRegularLanguage.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EBE60 (RtlpAddLanguagesToMultiSZ.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x1800FDD20 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1800FEB6C (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     _wcsicmp @ 0x1800925A0 (_wcsicmp.c)
 */

char __fastcall RtlpLangNameInMultiSzString(wchar_t *String1, wchar_t *String2)
{
  char v2; // bl
  const wchar_t *v4; // rdi
  __int64 v5; // rax

  v2 = 0;
  v4 = String1;
  if ( String1 && String2 )
  {
    while ( *v4 )
    {
      if ( !wcsicmp(v4, String2) )
        return 1;
      v5 = -1LL;
      do
        ++v5;
      while ( v4[v5] );
      v4 += v5 + 1;
      if ( !v4 )
        return v2;
    }
  }
  return v2;
}
