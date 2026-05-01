/*
 * XREFs of ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x1800A2C58
 * Callers:
 *     ?OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A2260 (-OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroying@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A22B0 (-OnViewDestroying@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Reset@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x1800A22E4 (-Reset@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?HasFullScreenViewVisible@CPeopleBarFlyoutExperienceManager@@AEAAHXZ @ 0x1800A2AB8 (-HasFullScreenViewVisible@CPeopleBarFlyoutExperienceManager@@AEAAHXZ.c)
 *     ??$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@QEAV23@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@@WRL@Microsoft@@@012@$$QEBQEAVDebounceDetection@CPeopleBarFlyoutExperienceManager@@@Z @ 0x1800A3F40 (--$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@QEA.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::UpdateFocusOnDismiss(CPeopleBarFlyoutExperienceManager *this)
{
  CPeopleBarFlyoutExperienceManager::DebounceDetection *v2; // rbx
  HWND ForegroundWindow; // rsi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rcx
  HWND WindowW; // rax
  _QWORD v12[2]; // [rsp+38h] [rbp-49h] BYREF
  WCHAR ClassName[56]; // [rsp+48h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v12[1] = -2LL;
  v2 = (CPeopleBarFlyoutExperienceManager *)((char *)this + 592);
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Reset((CPeopleBarFlyoutExperienceManager *)((char *)this + 592));
  ForegroundWindow = GetForegroundWindow();
  if ( GetClassNameW(ForegroundWindow, ClassName, 50)
    && (CompareStringOrdinal(ClassName, -1, L"Shell_TrayWnd", -1, 1) == 2
     || CompareStringOrdinal(ClassName, -1, L"Shell_SecondaryTrayWnd", -1, 1) == 2) )
  {
    if ( GetAsyncKeyState(1) >= 0 )
    {
LABEL_7:
      *(_QWORD *)v2 = GetTickCount64();
      return 0LL;
    }
    v12[0] = v2;
    Microsoft::WRL::Details::MakeAndInitialize<CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification,CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification,CPeopleBarFlyoutExperienceManager::DebounceDetection * const>(
      (char *)v2 + 8,
      v12);
    if ( GetAsyncKeyState(1) >= 0 )
    {
      CPeopleBarFlyoutExperienceManager::DebounceDetection::Reset(v2);
      goto LABEL_7;
    }
  }
  else if ( ForegroundWindow == ExperienceManagerUtils::WindowFromViewWrapper(
                                  *((ExperienceManagerUtils **)this + 9),
                                  v4) )
  {
    if ( (unsigned int)CPeopleBarFlyoutExperienceManager::HasFullScreenViewVisible(this) )
    {
      v12[0] = 0LL;
      v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, GUID *, _QWORD *))(**((_QWORD **)this + 32) + 24LL))(
             *((_QWORD *)this + 32),
             &IID_IRealmActivationHistory,
             &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
             v12);
      v6 = v5;
      if ( v5 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v12[0] + 24LL))(v12[0], 0xFFFFLL);
        v6 = v5;
        if ( v5 >= 0 )
        {
          v10 = v12[0];
          if ( v12[0] )
          {
            v12[0] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
          return 0LL;
        }
        v7 = 571LL;
      }
      else
      {
        v7 = 570LL;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      v8 = v12[0];
      if ( v12[0] )
      {
        v12[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
    else
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( SetForegroundWindow(WindowW) )
        return 0LL;
      v6 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x248,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)0x80004005LL);
    }
    return v6;
  }
  return 0LL;
}
