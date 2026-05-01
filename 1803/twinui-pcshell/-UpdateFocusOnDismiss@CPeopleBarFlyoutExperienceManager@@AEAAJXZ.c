/*
 * XREFs of ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x18016DADC
 * Callers:
 *     ?OnViewDestroying@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016C780 (-OnViewDestroying@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016C7C0 (-OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     _lambda_45861fbdbb3a9f108cf523e23389264f_::operator() @ 0x18016AF7C (_lambda_45861fbdbb3a9f108cf523e23389264f_--operator().c)
 *     ?BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x18016B278 (-BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x18016B658 (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::UpdateFocusOnDismiss(CPeopleBarFlyoutExperienceManager *this)
{
  __int64 *v2; // rdi
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v3; // rcx
  HWND ForegroundWindow; // rsi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  HWND WindowW; // rax
  __int64 v12; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-41h] BYREF
  WCHAR ClassName[56]; // [rsp+58h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v13[2] = -2LL;
  v2 = (__int64 *)((char *)this + 656);
  *((_QWORD *)this + 82) = 0LL;
  v3 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)*((_QWORD *)this + 83);
  if ( v3 )
  {
    CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2 + 1);
  }
  ForegroundWindow = GetForegroundWindow();
  if ( GetClassNameW(ForegroundWindow, ClassName, 50)
    && (CompareStringOrdinal(ClassName, -1, L"Shell_TrayWnd", -1, 1) == 2
     || CompareStringOrdinal(ClassName, -1, L"Shell_SecondaryTrayWnd", -1, 1) == 2) )
  {
    CPeopleBarFlyoutExperienceManager::DebounceDetection::BlockImmediateReshow((CPeopleBarFlyoutExperienceManager::DebounceDetection *)v2);
    return 0LL;
  }
  if ( ForegroundWindow != (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
                                   *((ExperienceManagerUtils **)this + 17),
                                   v5) )
    return 0LL;
  LODWORD(v12) = 0;
  v13[0] = this;
  v13[1] = &v12;
  lambda_45861fbdbb3a9f108cf523e23389264f_::operator()(v13);
  if ( (_DWORD)v12 )
  {
    v12 = 0LL;
    v7 = *((_QWORD *)this + 40);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v8 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v7 + 24LL))(
           v7,
           &IID_IRealmActivationHistory,
           &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
           &v12);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 24LL))(v12, 0xFFFFLL);
      v9 = v8;
      if ( v8 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        return 0LL;
      }
      v10 = 798LL;
    }
    else
    {
      v10 = 797LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  else
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( SetForegroundWindow(WindowW) )
      return 0LL;
    v9 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)0x80004005LL);
  }
  return v9;
}
