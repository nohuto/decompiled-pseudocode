/*
 * XREFs of GetSidStringFromToken @ 0x1801DE800
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x180187A70 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 *     IsUserAssignedAccessSingleApp @ 0x1801DEA74 (IsUserAssignedAccessSingleApp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
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
             (void *)0x1E,
             (__int64)"base\\embedded\\sys\\lockdown\\config\\assignedaccessconfig.cpp",
             v4);
  v6 = (PSID *)CoTaskMemAlloc((unsigned int)cb);
  if ( v6 )
  {
    if ( GetTokenInformation(TokenHandle, TokenUser, v6, cb, (PDWORD)&cb) )
    {
      if ( *StringSid )
      {
        LocalFree(*StringSid);
        *StringSid = 0LL;
      }
      StringSid[1] = (LPWSTR)-1LL;
      StringSid[2] = (LPWSTR)-1LL;
      if ( ConvertSidToStringSidW(*v6, StringSid) )
      {
        LastError = 0;
        goto LABEL_14;
      }
      v9 = 35LL;
    }
    else
    {
      v9 = 34LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v9,
                  (__int64)"base\\embedded\\sys\\lockdown\\config\\assignedaccessconfig.cpp",
                  v8);
  }
  else
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21,
      (__int64)"base\\embedded\\sys\\lockdown\\config\\assignedaccessconfig.cpp",
      (const char *)0x8007000ELL);
  }
LABEL_14:
  if ( v6 )
    CoTaskMemFree(v6);
  return LastError;
}
