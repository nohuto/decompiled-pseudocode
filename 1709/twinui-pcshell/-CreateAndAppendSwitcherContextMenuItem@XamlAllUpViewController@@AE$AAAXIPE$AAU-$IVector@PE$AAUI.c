/*
 * XREFs of ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x180171838
 * Callers:
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitcherViewModel@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180170EAC (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitch.c)
 * Callees:
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x1801474C4 (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 *     ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x1801718E8 (-CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     WindowsDeleteString_0 @ 0x1801E31C7 (WindowsDeleteString_0.c)
 */

// Hidden C++ exception states: #wind=4
HRESULT __fastcall XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(__int64 a1, UINT a2, __int64 a3)
{
  HSTRING v5; // rcx
  HSTRING v6; // rbx
  __int64 v7; // rcx
  WCHAR Buffer[264]; // [rsp+30h] [rbp-228h] BYREF

  LoadStringW(&_ImageBase, a2, Buffer, 260);
  v6 = Platform::String::String(v5, Buffer);
  WindowsDeleteString_0(0LL);
  XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v7, a2, v6, a3);
  return WindowsDeleteString_0(v6);
}
