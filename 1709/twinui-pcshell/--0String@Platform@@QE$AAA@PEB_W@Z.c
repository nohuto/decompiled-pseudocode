/*
 * XREFs of ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x1801474C4
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x180147510 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 *     ?ThrowPlatformException@details@wil@@YAXAEBUFailureInfo@2@PEB_W@Z @ 0x180147720 (-ThrowPlatformException@details@wil@@YAXAEBUFailureInfo@2@PEB_W@Z.c)
 *     ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x180171838 (-CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU-$IVector@PE$AAUI.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     WindowsCreateString_0 @ 0x1801E3398 (WindowsCreateString_0.c)
 *     wcslen_0 @ 0x1801E5797 (wcslen_0.c)
 */

HSTRING __fastcall Platform::String::String(HSTRING a1, const wchar_t *a2)
{
  UINT32 v4; // eax
  HRESULT v5; // eax
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = a1;
  if ( !a2 )
    return 0LL;
  string = 0LL;
  v4 = wcslen_0(a2);
  v5 = WindowsCreateString_0(a2, v4, &string);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  return string;
}
