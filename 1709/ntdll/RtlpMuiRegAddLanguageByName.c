/*
 * XREFs of RtlpMuiRegAddLanguageByName @ 0x1800FBC58
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1800FE3E0 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlpIsALicensedLIPLanguage @ 0x1800509D4 (RtlpIsALicensedLIPLanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180050D2C (RtlpIsALicensedRegularLanguage.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800FBAA8 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x1800FCBC4 (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1800FE080 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1800FE148 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegInitPartialLanguage @ 0x1800FE38C (_RtlpMuiRegInitPartialLanguage.c)
 */

__int64 __fastcall RtlpMuiRegAddLanguageByName(_QWORD *a1, void *a2, wchar_t *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  char v10; // cl
  _WORD v11[16]; // [rsp+20h] [rbp-48h] BYREF

  result = RtlpMuiRegInitAnyLanguage(a1, v11);
  if ( (int)result < 0 )
    return result;
  v10 = v11[0];
  if ( (v11[0] & 4) != 0 )
  {
    result = RtlpMuiRegInitLIPLanguage(a1, a2, v11);
  }
  else
  {
    if ( (v11[0] & 2) == 0 )
      goto LABEL_7;
    result = RtlpMuiRegInitPartialLanguage(a1, a2, v11);
  }
  v10 = v11[0];
LABEL_7:
  if ( (int)result >= 0 )
  {
    if ( (v10 & 4) != 0 )
      result = RtlpIsALicensedLIPLanguage((__int64)a1, a3);
    else
      result = RtlpIsALicensedRegularLanguage(a1, a3);
    if ( (int)result >= 0 )
    {
      v11[0] |= 0x820u;
      RtlpMuiRegAddAlternateCodePage((__int64)v11, a2);
      return RtlpMuiRegGetOrAddLangInfo(a1 + 3, v11, a6);
    }
  }
  return result;
}
