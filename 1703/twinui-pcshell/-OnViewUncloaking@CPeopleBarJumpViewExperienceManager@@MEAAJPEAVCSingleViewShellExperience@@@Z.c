/*
 * XREFs of ?OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A4F10
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097AAC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1801816D8 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewUncloaking(
        CPeopleBarJumpViewExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  HWND v3; // rax
  HSTRING v4; // rcx
  HWND v5; // rdi
  HRESULT v6; // eax
  const WCHAR *StringRawBuffer; // rax
  const char *v8; // r9
  int v9; // ecx
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  INT32 result; // [rsp+40h] [rbp+8h] BYREF

  v3 = ExperienceManagerUtils::WindowFromViewWrapper(
         a2[3],
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  v4 = (HSTRING)*((_QWORD *)this + 38);
  result = 0;
  v5 = v3;
  v6 = WindowsCompareStringOrdinal(v4, 0LL, &result);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    JUMPOUT(0x1800A5003LL);
  }
  if ( result )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 38), 0LL);
    if ( !SetWindowTextW(v5, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xAD,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        v8);
  }
  v9 = *((_DWORD *)this + 63);
  v10 = 15LL;
  if ( v9 )
  {
    v11 = v9 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
          v10 = 7LL;
      }
      else
      {
        v10 = 11LL;
      }
    }
    else
    {
      v10 = 13LL;
    }
  }
  else
  {
    v10 = 14LL;
  }
  v13 = CSingleViewShellExperience::ShowBorder((char *)this + 8, v10, 1LL, 0LL, 0LL);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB0,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  return 0LL;
}
