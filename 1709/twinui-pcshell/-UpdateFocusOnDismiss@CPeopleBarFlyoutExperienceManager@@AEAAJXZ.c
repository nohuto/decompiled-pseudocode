/*
 * XREFs of ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x1800AF12C
 * Callers:
 *     ?OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800AE540 (-OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroying@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800AE5A0 (-OnViewDestroying@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Reset@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x1800AE714 (-Reset@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?HasFullScreenViewVisible@CPeopleBarFlyoutExperienceManager@@AEAAHXZ @ 0x1800AEF8C (-HasFullScreenViewVisible@CPeopleBarFlyoutExperienceManager@@AEAAHXZ.c)
 *     ??$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@@WRL@Microsoft@@@012@$$QEAPEAVDebounceDetection@CPeopleBarFlyoutExperienceManager@@@Z @ 0x1800B0720 (--$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@PEA.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::UpdateFocusOnDismiss(CPeopleBarFlyoutExperienceManager *this)
{
  CPeopleBarFlyoutExperienceManager::DebounceDetection *v2; // rbx
  HWND ForegroundWindow; // rsi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rcx
  HWND WindowW; // rax
  __int64 v15[2]; // [rsp+38h] [rbp-49h] BYREF
  WCHAR ClassName[56]; // [rsp+48h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v15[1] = -2LL;
  v2 = (CPeopleBarFlyoutExperienceManager *)((char *)this + 656);
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Reset((CPeopleBarFlyoutExperienceManager *)((char *)this + 656));
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
    v15[0] = (__int64)v2;
    Microsoft::WRL::Details::MakeAndInitialize<CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification,CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification,CPeopleBarFlyoutExperienceManager::DebounceDetection *>(
      (char *)v2 + 8,
      v15);
    if ( GetAsyncKeyState(1) >= 0 )
    {
      CPeopleBarFlyoutExperienceManager::DebounceDetection::Reset(v2);
      goto LABEL_7;
    }
  }
  else if ( ForegroundWindow == ExperienceManagerUtils::WindowFromViewWrapper(
                                  *((ExperienceManagerUtils **)this + 17),
                                  v4) )
  {
    if ( (unsigned int)CPeopleBarFlyoutExperienceManager::HasFullScreenViewVisible(this) )
    {
      v15[0] = 0LL;
      v5 = (__int64 *)*((_QWORD *)this + 40);
      v6 = *v5;
      v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v15);
      v8 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v6 + 24))(
             v5,
             &IID_IRealmActivationHistory,
             &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
             v7);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15[0] + 24LL))(v15[0], 0xFFFFLL);
        v9 = v8;
        if ( v8 >= 0 )
        {
          v13 = v15[0];
          if ( v15[0] )
          {
            v15[0] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          }
          return 0LL;
        }
        v10 = 801LL;
      }
      else
      {
        v10 = 800LL;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      v11 = v15[0];
      if ( v15[0] )
      {
        v15[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    else
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( SetForegroundWindow(WindowW) )
        return 0LL;
      v9 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)0x80004005LL);
    }
    return v9;
  }
  return 0LL;
}
