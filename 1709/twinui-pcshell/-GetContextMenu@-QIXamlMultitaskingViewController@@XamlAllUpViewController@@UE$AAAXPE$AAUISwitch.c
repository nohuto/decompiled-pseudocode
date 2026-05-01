/*
 * XREFs of ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitcherViewModel@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180170EAC
 * Callers:
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitcherViewModel@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180178030 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAUISwi.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800A01E4 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x18014DF2C (-get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ.c)
 *     ?GetApplicationViewsFromLayout@XamlAllUpViewController@@AE$AAAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x1801713F8 (-GetApplicationViewsFromLayout@XamlAllUpViewController@@AE$AAAJPEAUIAppLayout@@PEAIPEAPEAUIAppli.c)
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x180171608 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 *     ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x180171838 (-CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU-$IVector@PE$AAUI.c)
 *     ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x1801718E8 (-CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@.c)
 *     ??0?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@QE$AAA@XZ @ 0x180174614 (--0-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInt.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18017AA5C (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 *     WindowsDeleteString_0 @ 0x1801E31C7 (WindowsDeleteString_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall _GetContextMenu__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__PE_AAUISwitcherViewModel_Switcher_Experiences_5WindowsInternal___Z(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  HSTRING v6; // rax
  TabletModeHelpers *v7; // rcx
  HSTRING v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int AppViewFromSwitchItem; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rsi
  int v18; // r15d
  __int64 v19; // rbx
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rcx
  int ApplicationViewsFromLayout; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  HSTRING v28; // rbx
  __int64 result; // rax
  __int64 v30; // [rsp+30h] [rbp-40h] BYREF
  HSTRING v31; // [rsp+38h] [rbp-38h] BYREF
  __int64 v32; // [rsp+40h] [rbp-30h] BYREF
  __int64 v33; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v34[4]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  HSTRING string; // [rsp+B8h] [rbp+48h] BYREF

  v34[1] = -2LL;
  string = (HSTRING)Platform::Details::Heap::Allocate(0x88uLL, 0xB0uLL);
  v6 = (HSTRING)Platform::Collections::Vector<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>,1>::Vector<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>,1>(string);
  v8 = v6;
  string = v6;
  if ( v6 )
    v9 = (__int64)(v6 + 2);
  else
    v9 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v34[2] = v9;
  if ( v8 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16LL))(v8);
  if ( TabletModeHelpers::IsTabletMode(v7) )
  {
    v32 = 0LL;
    AppViewFromSwitchItem = XamlBaseViewController::GetAppViewFromSwitchItem(v10, a2, &v32);
    if ( AppViewFromSwitchItem < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x2D,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)AppViewFromSwitchItem);
      __debugbreak();
    }
    v30 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 152) + 24LL))(*(_QWORD *)(a1 + 152), &v30);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 80LL))(v30, 1LL);
    v17 = v32;
    if ( v15 != 2 || (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 184LL))(v30, v32) )
    {
      XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v16, 1501LL, v9);
      XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v27, 1502LL, v9);
    }
    else
    {
      v18 = v30;
      v19 = 0LL;
      v33 = 0LL;
      v20 = 0LL;
      v34[0] = 0LL;
      v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 80LL))(v30, 1LL);
      if ( v21 )
      {
        ApplicationViewsFromLayout = XamlAllUpViewController::GetApplicationViewsFromLayout(
                                       v18,
                                       (unsigned int)&string,
                                       (unsigned int)&v33,
                                       (unsigned int)v34,
                                       v21);
        v19 = v33;
        v20 = v34[0];
      }
      else
      {
        ApplicationViewsFromLayout = 0;
      }
      if ( ApplicationViewsFromLayout >= 0 )
      {
        v31 = 0LL;
        string = 0LL;
        XamlAllUpViewController::GetTabletModeContextMenuItemString(v22, v19, 1509LL, &v31);
        XamlAllUpViewController::GetTabletModeContextMenuItemString(v24, v20, 1510LL, &string);
        XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v25, 1509LL, v31, v9);
        XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v26, 1510LL, string, v9);
        WindowsDeleteString_0(string);
        WindowsDeleteString_0(v31);
      }
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v22, 1507LL, v9);
    v12 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  else
  {
    XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v10, 1501LL, v9);
    XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v11, 1502LL, v9);
  }
  XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v12, 1508LL, v9);
  v28 = (HSTRING)Windows::UI::Xaml::IWindow::Content::get(v9);
  string = v28;
  result = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING))(*(_QWORD *)a3 + 216LL))(a3, a2, v28);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  if ( v28 )
    result = (*(__int64 (__fastcall **)(HSTRING))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return result;
}
