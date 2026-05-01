/*
 * XREFs of ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18019A160
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x180199514 (-IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?IsCompatibilityKeyboardEnabled@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x18019A09C (-IsCompatibilityKeyboardEnabled@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_DesktopSplitXAMLKeyboard@@@wil@@SA_NXZ @ 0x18019E528 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_DesktopSplitXAMLKeyboard@@@wil@@SA_NX.c)
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1801A1B48 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1801A2DC4 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x1801DEA74 (IsUserAssignedAccessSingleApp.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=31
__int64 __fastcall TouchKeyboardExperienceManager::PerformDelayedInitialization(TouchKeyboardExperienceManager *this)
{
  HWND Window; // rax
  __int64 v3; // rcx
  WCHAR *v4; // rax
  WCHAR *v5; // rbx
  int v6; // esi
  int PolicyInt; // eax
  const WCHAR *v9; // rax
  __int64 v10; // rsi
  HRESULT v11; // eax
  int v12; // eax
  HRESULT v13; // eax
  HRESULT v14; // eax
  int v15; // eax
  HRESULT v16; // eax
  HRESULT v17; // eax
  int v18; // eax
  HRESULT v19; // eax
  HRESULT v20; // eax
  int v21; // eax
  HRESULT v22; // eax
  HRESULT v23; // eax
  int v24; // eax
  HRESULT v25; // eax
  HRESULT v26; // eax
  int v27; // eax
  TouchKeyboardExperienceManager *v28; // rcx
  HRESULT v29; // eax
  HRESULT v30; // eax
  int v31; // eax
  HRESULT v32; // eax
  HRESULT v33; // eax
  int v34; // eax
  TouchKeyboardExperienceManager *v35; // rcx
  HRESULT v36; // eax
  HRESULT v37; // eax
  int v38; // eax
  HRESULT v39; // eax
  HRESULT v40; // eax
  int v41; // eax
  HRESULT v42; // eax
  HRESULT v43; // eax
  int v44; // eax
  __int64 v45; // [rsp+68h] [rbp-A0h] BYREF
  WCHAR *v46; // [rsp+70h] [rbp-98h]
  WCHAR *v47; // [rsp+78h] [rbp-90h]
  const WCHAR *v48[5]; // [rsp+80h] [rbp-88h] BYREF
  WNDCLASSEXW v49; // [rsp+A8h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+F8h] [rbp-10h] BYREF
  HSTRING string; // [rsp+110h] [rbp+8h] BYREF
  HSTRING_HEADER v52; // [rsp+118h] [rbp+10h] BYREF
  HSTRING v53; // [rsp+130h] [rbp+28h] BYREF
  HSTRING_HEADER v54; // [rsp+138h] [rbp+30h] BYREF
  HSTRING v55; // [rsp+150h] [rbp+48h] BYREF
  HSTRING_HEADER v56; // [rsp+158h] [rbp+50h] BYREF
  HSTRING v57; // [rsp+170h] [rbp+68h] BYREF
  HSTRING_HEADER v58; // [rsp+178h] [rbp+70h] BYREF
  HSTRING v59; // [rsp+190h] [rbp+88h] BYREF
  HSTRING_HEADER v60; // [rsp+198h] [rbp+90h] BYREF
  HSTRING v61; // [rsp+1B0h] [rbp+A8h] BYREF
  HSTRING_HEADER v62; // [rsp+1B8h] [rbp+B0h] BYREF
  HSTRING v63; // [rsp+1D0h] [rbp+C8h] BYREF
  HSTRING_HEADER v64; // [rsp+1D8h] [rbp+D0h] BYREF
  HSTRING v65; // [rsp+1F0h] [rbp+E8h] BYREF
  HSTRING_HEADER v66; // [rsp+1F8h] [rbp+F0h] BYREF
  HSTRING v67; // [rsp+210h] [rbp+108h] BYREF
  HSTRING_HEADER v68; // [rsp+218h] [rbp+110h] BYREF
  HSTRING v69; // [rsp+230h] [rbp+128h] BYREF
  HSTRING_HEADER v70; // [rsp+238h] [rbp+130h] BYREF
  HSTRING v71; // [rsp+250h] [rbp+148h] BYREF
  HSTRING_HEADER v72; // [rsp+258h] [rbp+150h] BYREF
  HSTRING v73; // [rsp+270h] [rbp+168h] BYREF
  HSTRING_HEADER v74; // [rsp+278h] [rbp+170h] BYREF
  HSTRING v75; // [rsp+290h] [rbp+188h] BYREF
  HSTRING_HEADER v76; // [rsp+298h] [rbp+190h] BYREF
  HSTRING v77; // [rsp+2B0h] [rbp+1A8h] BYREF
  HSTRING_HEADER v78; // [rsp+2B8h] [rbp+1B0h] BYREF
  HSTRING v79; // [rsp+2D0h] [rbp+1C8h] BYREF
  HSTRING_HEADER v80; // [rsp+2D8h] [rbp+1D0h] BYREF
  HSTRING v81; // [rsp+2F0h] [rbp+1E8h] BYREF
  HSTRING_HEADER v82; // [rsp+2F8h] [rbp+1F0h] BYREF
  HSTRING v83; // [rsp+310h] [rbp+208h] BYREF
  HSTRING_HEADER v84; // [rsp+318h] [rbp+210h] BYREF
  HSTRING v85; // [rsp+330h] [rbp+228h] BYREF
  HSTRING_HEADER v86; // [rsp+338h] [rbp+230h] BYREF
  HSTRING v87; // [rsp+350h] [rbp+248h] BYREF
  HSTRING_HEADER v88; // [rsp+358h] [rbp+250h] BYREF
  HSTRING v89; // [rsp+370h] [rbp+268h] BYREF
  HSTRING_HEADER v90; // [rsp+378h] [rbp+270h] BYREF
  HSTRING v91; // [rsp+390h] [rbp+288h] BYREF
  char v92[24]; // [rsp+398h] [rbp+290h] BYREF
  __int64 v93; // [rsp+3B0h] [rbp+2A8h]
  wil::details::in1diag3 *retaddr; // [rsp+3E0h] [rbp+2D8h]

  v48[1] = (const WCHAR *)-2LL;
  memset(&v49, 0, sizeof(v49));
  v49.cbSize = 80;
  v49.lpfnWndProc = (WNDPROC)_AccessibilityEMWndProc;
  v49.lpszClassName = L"KBEMWndClass";
  RegisterClassExW(&v49);
  Window = CreateWindowExW(0, L"KBEMWndClass", L"KBEMWnd", 0, 0, 0, 0, 0, HWND_MESSAGE, 0LL, 0LL, 0LL);
  *((_QWORD *)this + 47) = Window;
  SetWindowLongPtrW(Window, -21, (LONG_PTR)this - 48);
  v3 = *((_QWORD *)this + 73);
  if ( v3 )
  {
    *((_QWORD *)this + 73) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_QWORD *)this + 73) = 0LL;
  v4 = (WCHAR *)operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v47 = v4;
  v48[2] = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_17:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x249,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v48[3] = v4;
  *((_DWORD *)v4 + 5) = 1;
  *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRemoteTabTipAdapter>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v5 = &KeyboardHosting::TabTipAdapter::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)v5 + 1) = &KeyboardHosting::TabTipAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRemoteTabTipAdapter>'};
  *((_QWORD *)v5 + 3) = 0LL;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 5) = 0LL;
  *((_QWORD *)v5 + 6) = 0LL;
  *((_QWORD *)v5 + 7) = 0LL;
  *((_QWORD *)v5 + 8) = 0LL;
  *((_QWORD *)v5 + 9) = 0LL;
  *((_QWORD *)v5 + 10) = 0LL;
  *((_QWORD *)v5 + 11) = 0LL;
  *((_QWORD *)v5 + 12) = 0LL;
  memset(v5 + 56, 0, 0x60uLL);
  v5[104] = 1;
  *((_BYTE *)v5 + 210) = 0;
  *((_QWORD *)v5 + 29) = 0LL;
  *((_QWORD *)v5 + 30) = 0LL;
  *((_QWORD *)v5 + 29) = 0LL;
  *((_QWORD *)v5 + 30) = 7LL;
  v5[108] = 0;
  v5[124] = 0;
  *(_QWORD *)(v5 + 126) = 0LL;
  v5[130] = 0;
  *((_QWORD *)v5 + 33) = 0LL;
  *((_DWORD *)v5 + 68) = 0;
  *((_QWORD *)v5 + 35) = 0LL;
  *((_QWORD *)v5 + 36) = 0LL;
  v46 = v5;
  v47 = 0LL;
  v6 = KeyboardHosting::TabTipAdapter::RuntimeClassInitialize(
         (KeyboardHosting::TabTipAdapter *)v5,
         (TouchKeyboardExperienceManager *)((char *)this - 48));
  if ( v6 >= 0 )
  {
    if ( v5 )
      (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v5 + 8LL))(v5);
    *((_QWORD *)this + 73) = v5;
    if ( v5 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = 0;
  }
  else if ( v5 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v6 < 0 )
    goto LABEL_17;
  LODWORD(v45) = 0;
  PolicyInt = PolicyManager_GetPolicyInt(L"Handwriting", L"PanelDefaultModeDocked", &v45);
  if ( PolicyInt < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x24C,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)PolicyInt);
  v9 = L"docked";
  if ( !(_DWORD)v45 )
    v9 = L"floating";
  v48[0] = v9;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v92, v48);
  string = 0LL;
  v11 = WindowsCreateStringReference(L"DefaultHandWritingPositionType", 0x1Eu, &hstringHeader, &string);
  if ( v11 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
  v12 = KeyboardHosting::TabTipAdapter::SetShellPreference(
          *((KeyboardHosting::TabTipAdapter **)this + 73),
          string,
          *(HSTRING *)(v10 + 24));
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x254,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
  string = 0LL;
  v93 = 0LL;
  v55 = 0LL;
  v13 = WindowsCreateStringReference(L"true", 4u, &v54, &v55);
  if ( v13 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
  v53 = 0LL;
  v14 = WindowsCreateStringReference(L"SkipCheckCanWideSizeFit", 0x17u, &v52, &v53);
  if ( v14 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
  v15 = KeyboardHosting::TabTipAdapter::SetShellPreference(*((KeyboardHosting::TabTipAdapter **)this + 73), v53, v55);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x255,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
  v53 = 0LL;
  v55 = 0LL;
  v59 = 0LL;
  v16 = WindowsCreateStringReference(L"true", 4u, &v58, &v59);
  if ( v16 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
  v57 = 0LL;
  v17 = WindowsCreateStringReference(L"SkipCheckCanFullSizeFit", 0x17u, &v56, &v57);
  if ( v17 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
  v18 = KeyboardHosting::TabTipAdapter::SetShellPreference(*((KeyboardHosting::TabTipAdapter **)this + 73), v57, v59);
  if ( v18 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x256,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v18);
  v57 = 0LL;
  v59 = 0LL;
  v63 = 0LL;
  v19 = WindowsCreateStringReference(L"yes", 3u, &v62, &v63);
  if ( v19 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19);
  v61 = 0LL;
  v20 = WindowsCreateStringReference(L"ChsNarrowLayoutsFollowVelocity", 0x1Eu, &v60, &v61);
  if ( v20 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
  v21 = KeyboardHosting::TabTipAdapter::SetShellPreference(*((KeyboardHosting::TabTipAdapter **)this + 73), v61, v63);
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x259,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v21);
  v61 = 0LL;
  v63 = 0LL;
  v67 = 0LL;
  v22 = WindowsCreateStringReference(L"1", 1u, &v66, &v67);
  if ( v22 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
  v65 = 0LL;
  v23 = WindowsCreateStringReference(L"Paste_Disabled", 0xEu, &v64, &v65);
  if ( v23 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23);
  v24 = KeyboardHosting::TabTipAdapter::SetShellPreference(*((KeyboardHosting::TabTipAdapter **)this + 73), v65, v67);
  if ( v24 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x25C,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v24);
  v65 = 0LL;
  v67 = 0LL;
  v71 = 0LL;
  v25 = WindowsCreateStringReference(L"true", 4u, &v70, &v71);
  if ( v25 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25);
  v69 = 0LL;
  v26 = WindowsCreateStringReference(L"AddInputPanelGutter", 0x13u, &v68, &v69);
  if ( v26 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26);
  v27 = KeyboardHosting::TabTipAdapter::SetShellPreference(*((KeyboardHosting::TabTipAdapter **)this + 73), v69, v71);
  if ( v27 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x25F,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v27);
  v69 = 0LL;
  v71 = 0LL;
  if ( (unsigned int)IsUserAssignedAccessSingleApp(-4LL)
    || TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(v28) )
  {
    v75 = 0LL;
    v29 = WindowsCreateStringReference(L"0", 1u, &v74, &v75);
    if ( v29 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v29);
    v73 = 0LL;
    v30 = WindowsCreateStringReference(L"IsSettingsLauncherAvailable", 0x1Bu, &v72, &v73);
    if ( v30 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v30);
    v31 = KeyboardHosting::TabTipAdapter::SetShellPreference(*((KeyboardHosting::TabTipAdapter **)this + 73), v73, v75);
    if ( v31 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x269,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v31);
    v73 = 0LL;
    v75 = 0LL;
    v79 = 0LL;
    v32 = WindowsCreateStringReference(L"1", 1u, &v78, &v79);
    if ( v32 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v32);
    v77 = 0LL;
    v33 = WindowsCreateStringReference(L"Dictation_Disabled", 0x12u, &v76, &v77);
    if ( v33 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v33);
    v34 = KeyboardHosting::TabTipAdapter::SetShellPreference(*((KeyboardHosting::TabTipAdapter **)this + 73), v77, v79);
    v35 = retaddr;
    if ( v34 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26A,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v34);
    v77 = 0LL;
    v79 = 0LL;
    if ( !TouchKeyboardExperienceManager::IsCompatibilityKeyboardEnabled(v35) )
    {
      v83 = 0LL;
      v36 = WindowsCreateStringReference(L"0", 1u, &v82, &v83);
      if ( v36 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v36);
      v81 = 0LL;
      v37 = WindowsCreateStringReference(L"KeyboardModeEnabled_full", 0x18u, &v80, &v81);
      if ( v37 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v37);
      v38 = KeyboardHosting::TabTipAdapter::SetShellPreference(
              *((KeyboardHosting::TabTipAdapter **)this + 73),
              v81,
              v83);
      if ( v38 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x26F,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v38);
      v81 = 0LL;
      v83 = 0LL;
      v87 = 0LL;
      v39 = WindowsCreateStringReference(L"0", 1u, &v86, &v87);
      if ( v39 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v39);
      v85 = 0LL;
      v40 = WindowsCreateStringReference(L"KeyboardModeEnabled_full106", 0x1Bu, &v84, &v85);
      if ( v40 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v40);
      v41 = KeyboardHosting::TabTipAdapter::SetShellPreference(
              *((KeyboardHosting::TabTipAdapter **)this + 73),
              v85,
              v87);
      if ( v41 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x270,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v41);
      v85 = 0LL;
      v87 = 0LL;
    }
  }
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_DesktopSplitXAMLKeyboard>::__private_IsEnabled() )
  {
    v91 = 0LL;
    v42 = WindowsCreateStringReference(L"1", 1u, &v90, &v91);
    if ( v42 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v42);
    v89 = 0LL;
    v43 = WindowsCreateStringReference(L"KeyboardModeEnabled_split", 0x19u, &v88, &v89);
    if ( v43 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v43);
    v44 = KeyboardHosting::TabTipAdapter::SetShellPreference(*((KeyboardHosting::TabTipAdapter **)this + 73), v89, v91);
    if ( v44 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x278,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v44);
    v89 = 0LL;
    v91 = 0LL;
  }
  return 0LL;
}
