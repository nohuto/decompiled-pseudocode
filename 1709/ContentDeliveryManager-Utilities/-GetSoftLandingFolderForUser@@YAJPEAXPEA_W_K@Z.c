/*
 * XREFs of ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800920E0
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18006A720 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18006ADE0 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002EBC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18002615C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     IsOpenStateExplicitPresent @ 0x1800B4CD8 (IsOpenStateExplicitPresent.c)
 */

__int64 __fastcall GetSoftLandingFolderForUser(HANDLE hToken, WCHAR *lpPathName, __int64 a3)
{
  __int64 v5; // rax
  const char *v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdx
  HRESULT v9; // eax
  unsigned int v10; // edi
  DWORD LastError; // edi
  unsigned int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v15 = a3;
  if ( !(unsigned __int8)IsOpenStateExplicitPresent() || !(unsigned __int8)IsOpenStateExplicitPresent() )
    return 2147942527LL;
  v5 = OpenStateExplicit(hToken, L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy");
  v7 = v5;
  if ( !v5 )
  {
    v8 = 23LL;
    goto LABEL_19;
  }
  v15 = 260LL;
  if ( !(unsigned int)GetStateFolder(v5, 1LL, lpPathName, &v15) )
  {
    v8 = 26LL;
    goto LABEL_19;
  }
  v15 = 260LL;
  v9 = PathCchCombine(lpPathName, 0x104uLL, lpPathName, L"Tips");
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( ImpersonateLoggedOnUser(hToken) )
    {
      if ( CreateDirectoryW(lpPathName, 0LL) || (LastError = GetLastError(), LastError == 183) )
      {
        if ( !RevertToSelf() )
        {
          v8 = 44LL;
          goto LABEL_19;
        }
      }
      else
      {
        if ( !RevertToSelf() )
        {
          v8 = 39LL;
          goto LABEL_19;
        }
        if ( LastError )
        {
          v12 = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x28,
                  (__int64)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
                  (const char *)LastError);
LABEL_20:
          v10 = v12;
          goto LABEL_22;
        }
      }
      v10 = 0;
      goto LABEL_22;
    }
    v8 = 32LL;
LABEL_19:
    v12 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)v8,
            (__int64)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
            v6);
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1E,
    (__int64)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
    (const char *)(unsigned int)v9);
LABEL_22:
  if ( v7 )
    CloseState(v7);
  return v10;
}
