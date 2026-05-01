/*
 * XREFs of ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180093AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180181774 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x180183448 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnViewCreated(
        CActionCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  int v4; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  HWND v9; // rax
  struct tagRECT v10; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = CSingleViewShellExperience::SetPreferentialRMSettings((char *)this + 16, 1LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4BC,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( *((_QWORD *)this + 5) )
  {
    *(_QWORD *)&v10.left = 0x100000001LL;
    *(_QWORD *)&v10.right = 0x100000001LL;
    v6 = CSingleViewShellExperience::SetPosition((CActionCenterExperienceManager *)((char *)this + 16), &v10);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x4C1,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  v9 = ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v5);
  if ( v9 && !SetPropW(v9, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v7 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4CE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)0x80004005LL);
    return v7;
  }
  return 0LL;
}
