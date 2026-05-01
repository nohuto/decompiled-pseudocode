/*
 * XREFs of ?OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180077120
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18006B838 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180018630 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18006C0CC (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_fe210b1289c3c46e19802a64f8cd29ca___ @ 0x180075EE0 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_180075EE0.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x180076654 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStartExperienceManager::OnViewHidden(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  HWND v7; // rax
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // [rsp+20h] [rbp-78h]
  int v12; // [rsp+20h] [rbp-78h]
  int v13; // [rsp+20h] [rbp-78h]
  char *v14; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v16[2]; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v15[1] = -2LL;
  if ( *((_BYTE *)this + 552) )
  {
    *((_BYTE *)this + 552) = 0;
    v7 = ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 30), a2);
    EnableWindow(v7, 1);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v16, (const WCHAR **)off_18031DF38);
    v9 = ExperienceManagerUtils::RaiseReactivatedEvent(
           *((ExperienceManagerUtils **)this + 30),
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 86),
           *((HSTRING *)this + 28),
           *((HSTRING *)this + 29),
           *(HSTRING *)(v8 + 24),
           0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x292,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v9,
        v13);
      return v10;
    }
  }
  else
  {
    v3 = CExperienceManagerAnimationHelper::End((CStartExperienceManager *)((char *)this + 488));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x296,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v3,
        v11);
  }
  CSingleViewShellExperience::ShowBorder((__int64)this + 216, 0LL, 0LL, 0LL, 0LL);
  v15[0] = 0LL;
  v14 = (char *)this - 88;
  *(_QWORD *)&v16[0] = &v14;
  *((_QWORD *)&v16[0] + 1) = v15;
  v4 = Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_fe210b1289c3c46e19802a64f8cd29ca___(
         (RTL_SRWLOCK *)this + 4,
         v16);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x29C,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v4,
    v12);
  return v5;
}
