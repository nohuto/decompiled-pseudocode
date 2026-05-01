/*
 * XREFs of ??0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z @ 0x180178B8C
 * Callers:
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x180171608 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     WindowsDuplicateString_0 @ 0x1801E3435 (WindowsDuplicateString_0.c)
 */

HSTRING __fastcall Platform::String::String(HSTRING a1, HSTRING a2)
{
  __int64 v2; // rbx
  HRESULT v3; // eax
  HSTRING newString; // [rsp+30h] [rbp+8h] BYREF

  newString = a1;
  v2 = 0LL;
  if ( a2 )
  {
    v3 = WindowsDuplicateString_0(a2, &newString);
    if ( v3 < 0 )
      __abi_WinRTraiseException(v3);
    return newString;
  }
  return (HSTRING)v2;
}
