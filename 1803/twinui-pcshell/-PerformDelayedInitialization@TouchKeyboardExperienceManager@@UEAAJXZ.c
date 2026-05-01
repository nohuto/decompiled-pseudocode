/*
 * XREFs of ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180240230
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapter@KeyboardHosting@@$$QEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x18023B0D8 (--$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@De.c)
 *     ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x18023E7EC (-IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802413A0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@wil@@CAX_N.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_EnhancingXamlSipExperience@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180241454 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_EnhancingXamlSipExperience@@@wil@@CA.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802414B0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CA.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_KeyboardSettingsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18024150C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_KeyboardSettingsDesktop@@@wil@@CAX_N.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180242C70 (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802437D8 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802439A8 (-UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateEmojiInputAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180243F48 (-UpdateEmojiInputAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802440D0 (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802443C4 (-UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180244658 (-UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802449FC (-UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180244B84 (-UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18024D588 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x18030AE84 (IsUserAssignedAccessSingleApp.c)
 */

// Hidden C++ exception states: #wind=36
__int64 __fastcall TouchKeyboardExperienceManager::PerformDelayedInitialization(TouchKeyboardExperienceManager *this)
{
  HWND Window; // rax
  TouchKeyboardExperienceManager *v3; // rsi
  KeyboardHosting::TabTipAdapter **v4; // r14
  int v5; // eax
  unsigned int v6; // ebx
  int PolicyInt; // eax
  const wchar_t *v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  TouchKeyboardExperienceManager *v21; // rcx
  int v22; // eax
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  int v25; // eax
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // eax
  __int64 v31; // [rsp+68h] [rbp-A0h] BYREF
  struct TouchKeyboardExperienceManager *v32[3]; // [rsp+70h] [rbp-98h] BYREF
  WNDCLASSEXW v33; // [rsp+88h] [rbp-80h] BYREF
  HSTRING_HEADER v34; // [rsp+D8h] [rbp-30h] BYREF
  HSTRING v35; // [rsp+F0h] [rbp-18h]
  HSTRING_HEADER v36; // [rsp+F8h] [rbp-10h] BYREF
  HSTRING v37; // [rsp+110h] [rbp+8h]
  HSTRING_HEADER hstringHeader; // [rsp+118h] [rbp+10h] BYREF
  HSTRING v39; // [rsp+130h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v32[1] = (struct TouchKeyboardExperienceManager *)-2LL;
  memset_0(&v33, 0, sizeof(v33));
  v33.cbSize = 80;
  v33.lpfnWndProc = (WNDPROC)_AccessibilityEMWndProc;
  v33.lpszClassName = L"KBEMWndClass";
  RegisterClassExW(&v33);
  Window = CreateWindowExW(0, L"KBEMWndClass", L"KBEMWnd", 0, 0, 0, 0, 0, HWND_MESSAGE, 0LL, 0LL, 0LL);
  *((_QWORD *)this + 51) = Window;
  v3 = (TouchKeyboardExperienceManager *)((char *)this - 48);
  SetWindowLongPtrW(Window, -21, (LONG_PTR)this - 48);
  v32[0] = (TouchKeyboardExperienceManager *)((char *)this - 48);
  v4 = (KeyboardHosting::TabTipAdapter **)((char *)this + 616);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 77);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::TabTipAdapter,KeyboardHosting::TabTipAdapter,TouchKeyboardExperienceManager *>(
         (KeyboardHosting::TabTipAdapter **)this + 77,
         v32);
  v6 = v5;
  if ( v5 >= 0 )
  {
    LODWORD(v31) = 0;
    PolicyInt = PolicyManager_GetPolicyInt(L"Handwriting", L"PanelDefaultModeDocked", &v31);
    if ( PolicyInt < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        930LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)PolicyInt);
    v9 = L"floating";
    if ( (_DWORD)v31 )
      v9 = L"docked";
    v32[0] = (struct TouchKeyboardExperienceManager *)v9;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v34, (const WCHAR **)v32);
    v39 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"DefaultHandWritingPositionType",
      0x1Fu,
      0x1Eu);
    v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v39, *(HSTRING *)(v10 + 24));
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        938LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    v39 = 0LL;
    v35 = 0LL;
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"true", 5u, 4u);
    v39 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"SkipCheckCanWideSizeFit",
      0x18u,
      0x17u);
    v12 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v39, v37);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        939LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    v39 = 0LL;
    v37 = 0LL;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v34, L"true", 5u, 4u);
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"SkipCheckCanFullSizeFit", 0x18u, 0x17u);
    v13 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v37, v35);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        940LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
    v37 = 0LL;
    v35 = 0LL;
    v39 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"yes", 4u, 3u);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v34, L"ChsNarrowLayoutsFollowVelocity", 0x1Fu, 0x1Eu);
    v14 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v35, v39);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        943LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    v35 = 0LL;
    v39 = 0LL;
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"1", 2u, 1u);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v34, L"Paste_Disabled", 0xFu, 0xEu);
    v15 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v35, v37);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        946LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
    v35 = 0LL;
    v37 = 0LL;
    v39 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v34, L"MultiUserAware", 0xFu, 0xEu);
    v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v35, v39);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        949LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
    v35 = 0LL;
    v39 = 0LL;
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"true", 5u, 4u);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v34, L"AddInputPanelGutter", 0x14u, 0x13u);
    v17 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v35, v37);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        952LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
    v35 = 0LL;
    v37 = 0LL;
    v39 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v34, L"EnableInAppAnimation", 0x15u, 0x14u);
    v18 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v35, v39);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        955LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v18);
    v35 = 0LL;
    v39 = 0LL;
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"1", 2u, 1u);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v34, L"NarrowTwoRowCandidateBar", 0x19u, 0x18u);
    v19 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v35, v37);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        958LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
    v35 = 0LL;
    v37 = 0LL;
    v39 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v34, L"FloatingCandidateWindowEnabled", 0x1Fu, 0x1Eu);
    v20 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v35, v39);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        961LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v20);
    v35 = 0LL;
    v39 = 0LL;
    if ( (unsigned int)IsUserAssignedAccessSingleApp(-4LL)
      || TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(v21) )
    {
      v37 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"0", 2u, 1u);
      v35 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v34, L"IsSettingsLauncherAvailable", 0x1Cu, 0x1Bu);
      v22 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v35, v37);
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          965LL,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v22);
      v35 = 0LL;
      v37 = 0LL;
    }
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"0", 2u, 1u);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v34,
      L"SuppressPositionSettingWhenOnly1ItemIsAvailable",
      0x30u,
      0x2Fu);
    v23 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v35, v37);
    v24 = retaddr;
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        968LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v23);
    v35 = 0LL;
    v37 = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::ReportUsageToService(v24);
    v39 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v34, L"NarrowScalingEnabled", 0x15u, 0x14u);
    v25 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v35, v39);
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        973LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v25);
    v35 = 0LL;
    v39 = 0LL;
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"1", 2u, 1u);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v34, L"WideScalingEnabled", 0x13u, 0x12u);
    v26 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v35, v37);
    v27 = retaddr;
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        976LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v26);
    v35 = 0LL;
    v37 = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::ReportUsageToService(v27);
    wil::Feature<__WilFeatureTraits_Feature_EnhancingXamlSipExperience>::ReportUsageToService(v28);
    wil::Feature<__WilFeatureTraits_Feature_KeyboardSettingsDesktop>::ReportUsageToService();
    v39 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"ms-settings:regionlanguage",
      0x1Bu,
      0x1Au);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v34,
      L"KeyboardSettingsLauncherTargetUri",
      0x22u,
      0x21u);
    v29 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v35, v39);
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        992LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v29);
    v35 = 0LL;
    v39 = 0LL;
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"1", 2u, 1u);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v34,
      L"KeyboardSettingsDevice_IsTypingLauncherPageAvailable",
      0x35u,
      0x34u);
    v30 = KeyboardHosting::TabTipAdapter::SetShellPreference(*v4, v35, v37);
    if ( v30 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        993LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v30);
    v35 = 0LL;
    v37 = 0LL;
    TouchKeyboardExperienceManager::UpdateFullLayoutAvailability(v3);
    TouchKeyboardExperienceManager::UpdateWideLayoutAvailability(v3);
    TouchKeyboardExperienceManager::UpdateNarrowLayoutAvailability(v3);
    TouchKeyboardExperienceManager::UpdateSplitLayoutAvailability(v3);
    TouchKeyboardExperienceManager::UpdateDockedModeAvailability(v3);
    TouchKeyboardExperienceManager::UpdateDictationAvailability(v3);
    TouchKeyboardExperienceManager::UpdateHandwritingAvailability(v3);
    TouchKeyboardExperienceManager::UpdateEmojiInputAvailability(v3);
    TouchKeyboardExperienceManager::SubscribeTouchKeyboardWnfNotifications(v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39F,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
