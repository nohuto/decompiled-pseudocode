/*
 * XREFs of InitializeUserOrMachineLangList @ 0x180005C60
 * Callers:
 *     RtlpInitializeUserList @ 0x18000505C (RtlpInitializeUserList.c)
 *     RtlpQueryDefaultUILanguage @ 0x180005B30 (RtlpQueryDefaultUILanguage.c)
 *     InitializeTEBUserLangList @ 0x180005E78 (InitializeTEBUserLangList.c)
 * Callees:
 *     RtlpSetProcUserMachineLangList @ 0x180005D20 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004FA38 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180052B54 (RtlpMuiRegCreateLanguageList.c)
 */

__int64 __fastcall InitializeUserOrMachineLangList(__int64 a1, __int64 a2, __int64 *a3, int a4, char a5)
{
  int v6; // edi
  __int64 PreferredUILanguages; // rdx
  __int64 LanguageList; // rax
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0;
  v6 = a2;
  if ( a3 && a1 && (unsigned int)a2 <= 1 && (unsigned int)(a4 - 2) <= 1 )
  {
    if ( a5 && a4 == 3 )
    {
      LODWORD(PreferredUILanguages) = RtlpSetProcUserMachineLangList(a1, a2);
      if ( (int)PreferredUILanguages >= 0 )
      {
        if ( v6 == 1 )
        {
          *a3 = *(_QWORD *)(a1 + 64);
        }
        else if ( !v6 )
        {
          *a3 = *(_QWORD *)(a1 + 56);
        }
      }
      return (unsigned int)PreferredUILanguages;
    }
    PreferredUILanguages = (unsigned int)RtlpMuiRegLoadPreferredUILanguages(a1, a2, a2, a4, (__int64)&v11, (__int64)a3);
    if ( !*a3 )
    {
      LOBYTE(PreferredUILanguages) = v6 != 1;
      LanguageList = RtlpMuiRegCreateLanguageList(1LL, PreferredUILanguages, a1);
      *a3 = LanguageList;
      if ( !LanguageList )
      {
        LODWORD(PreferredUILanguages) = -1073741801;
        return (unsigned int)PreferredUILanguages;
      }
      LODWORD(PreferredUILanguages) = 0;
    }
    if ( (_DWORD)PreferredUILanguages && (_DWORD)PreferredUILanguages != -1073741801 && v11 )
      LODWORD(PreferredUILanguages) = 0;
    return (unsigned int)PreferredUILanguages;
  }
  return 3221225485LL;
}
