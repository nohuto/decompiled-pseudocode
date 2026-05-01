/*
 * XREFs of ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180098480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180096F04 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D0E34 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1801D2ED4 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnViewCreated(
        CActionCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  int v4; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  int v6; // edi
  __int64 v7; // rdx
  HWND v9; // rax
  int v10; // eax
  struct tagRECT v11; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = CSingleViewShellExperience::SetPreferentialRMSettings((char *)this + 16, 1LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x554,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( *((_QWORD *)this + 5) )
  {
    *(_QWORD *)&v11.left = 0x100000001LL;
    *(_QWORD *)&v11.right = 0x100000001LL;
    v6 = CSingleViewShellExperience::SetPosition((CActionCenterExperienceManager *)((char *)this + 16), &v11);
    if ( v6 < 0 )
    {
      v7 = 1369LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
  v9 = ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v5);
  if ( !v9 || SetPropW(v9, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v10 = *((_DWORD *)this + 60);
    if ( v10 )
    {
      if ( v10 == 4 )
      {
        v6 = CActionCenterExperienceManager::RaiseApplicationEvent(
               (CActionCenterExperienceManager *)((char *)this - 104),
               L"ControlCenterInvoked",
               1);
        if ( v6 < 0 )
        {
          v7 = 1392LL;
          goto LABEL_6;
        }
      }
    }
    else
    {
      v6 = CActionCenterExperienceManager::RaiseApplicationEvent(
             (CActionCenterExperienceManager *)((char *)this - 104),
             L"NotificationsInvoked",
             1);
      if ( v6 < 0 )
      {
        v7 = 1388LL;
        goto LABEL_6;
      }
    }
    *((_DWORD *)this + 60) = 3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x566,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
}
