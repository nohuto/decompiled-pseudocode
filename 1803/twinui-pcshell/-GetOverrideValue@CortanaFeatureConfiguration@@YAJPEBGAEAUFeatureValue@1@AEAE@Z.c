/*
 * XREFs of ?GetOverrideValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x18006163C
 * Callers:
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180061DB4 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetOverrideValue(
        LPCWSTR lpValue,
        const unsigned __int16 *a2,
        struct CortanaFeatureConfiguration::FeatureValue *a3,
        unsigned __int8 *a4)
{
  __int64 v8; // rdx
  HRESULT String; // ebx
  __int64 v10; // rdx
  int pdwType; // [rsp+20h] [rbp-268h]
  DWORD pvData; // [rsp+40h] [rbp-248h] BYREF
  DWORD pcbData[3]; // [rsp+44h] [rbp-244h] BYREF
  WCHAR sourceString[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  *(_BYTE *)a3 = 0;
  if ( *(int *)a2 < 0 )
    goto LABEL_13;
  if ( *(int *)a2 <= 1 )
  {
    pvData = 0;
    pcbData[0] = 4;
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting\\Override",
           lpValue,
           0x10u,
           0LL,
           &pvData,
           pcbData) )
    {
      return 0LL;
    }
    *((_DWORD *)a2 + 1) = pvData;
LABEL_12:
    *(_BYTE *)a3 = 1;
    return 0LL;
  }
  if ( *(_DWORD *)a2 == 2 )
  {
    memset_0(sourceString, 0, 0x208uLL);
    pvData = 520;
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting\\Override",
           lpValue,
           2u,
           0LL,
           sourceString,
           &pvData) )
    {
      return 0LL;
    }
    v8 = -1LL;
    do
      ++v8;
    while ( sourceString[v8] );
    String = WindowsCreateString(sourceString, v8, (HSTRING *)a2 + 1);
    if ( String >= 0 )
      goto LABEL_12;
    v10 = 219LL;
  }
  else
  {
LABEL_13:
    String = -2147024809;
    v10 = 226LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
    (const char *)(unsigned int)String,
    pdwType);
  return (unsigned int)String;
}
