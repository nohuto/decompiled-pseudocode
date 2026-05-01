/*
 * XREFs of GetSidStringFromToken @ 0x18030AD3C
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x18022E510 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 *     IsUserAssignedAccessSingleApp @ 0x18030AE84 (IsUserAssignedAccessSingleApp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18030AE58 (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall GetSidStringFromToken(HANDLE TokenHandle, LPWSTR *StringSid)
{
  const char *v4; // r9
  PSID *v6; // rbx
  unsigned int LastError; // edi
  const char *v8; // r9
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  SIZE_T cb; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(cb) = 0;
  if ( !GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, (PDWORD)&cb) && GetLastError() != 122 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x20,
             (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
             v4);
  v6 = (PSID *)CoTaskMemAlloc((unsigned int)cb);
  if ( v6 )
  {
    if ( GetTokenInformation(TokenHandle, TokenUser, v6, cb, (PDWORD)&cb) )
    {
      Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(StringSid);
      StringSid[1] = (LPWSTR)-1LL;
      StringSid[2] = (LPWSTR)-1LL;
      if ( ConvertSidToStringSidW(*v6, StringSid) )
      {
        LastError = 0;
        goto LABEL_12;
      }
      v9 = 37LL;
    }
    else
    {
      v9 = 36LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v9,
                  (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
                  v8);
  }
  else
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
      (const char *)0x8007000ELL);
  }
LABEL_12:
  if ( v6 )
    CoTaskMemFree(v6);
  return LastError;
}
