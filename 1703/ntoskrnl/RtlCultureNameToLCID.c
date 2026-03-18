/*
 * XREFs of RtlCultureNameToLCID @ 0x1405B86E0
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x140157530 (RtlpMuiRegLoadLicInformation.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1405B83AC (_RtlpMuiRegInitAnyLanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1405D2FB8 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x140747D68 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140748098 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1407485F0 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x140748810 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140748934 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlMuiRegAddLIPParent @ 0x140748D1C (_RtlMuiRegAddLIPParent.c)
 * Callees:
 *     DownLevelLanguageNameToLangID @ 0x140157950 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     __report_rangecheckfailure @ 0x1401DD43C (__report_rangecheckfailure.c)
 */

bool __fastcall RtlCultureNameToLCID(unsigned __int16 *a1, _DWORD *a2)
{
  char v2; // bl
  unsigned __int16 v4; // r8
  const void *v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned __int16 v8; // ax
  _WORD v10[88]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      v4 = *a1;
      if ( *a1 )
      {
        v5 = (const void *)*((_QWORD *)a1 + 1);
        if ( v5 )
        {
          if ( (unsigned int)v4 + 2 <= 0x55 )
          {
            v6 = v4;
            memmove(v10, v5, v4);
            v7 = v6 >> 1;
            if ( v7 >= 85 )
              _report_rangecheckfailure();
            v10[v7] = 0;
            v8 = DownLevelLanguageNameToLangID(v10, 2);
            *a2 = v8;
            return v8 != 0;
          }
        }
      }
    }
  }
  return v2;
}
