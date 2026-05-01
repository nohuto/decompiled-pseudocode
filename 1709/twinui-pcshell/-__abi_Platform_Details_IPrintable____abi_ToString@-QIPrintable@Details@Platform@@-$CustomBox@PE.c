/*
 * XREFs of ?__abi_Platform_Details_IPrintable____abi_ToString@?QIPrintable@Details@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@23@UE$AAAJPEAPE$AAVString@3@@Z @ 0x18014DFA0
 * Callers:
 *     ?__abi_Platform_Details_IPrintable____abi_ToString@?QIPrintable@Details@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@23@WBA@E$AAAJPEAPE$AAVString@3@@Z @ 0x18014EEA0 (-__abi_Platform_Details_IPrintable____abi_ToString@-QIPrintable@Details@Platform@@-_ea_18014EEA0.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     WindowsDeleteString_0 @ 0x1801E31C7 (WindowsDeleteString_0.c)
 *     WindowsDuplicateString_0 @ 0x1801E3435 (WindowsDuplicateString_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ___abi_Platform_Details_IPrintable____abi_ToString__QIPrintable_Details_Platform____CustomBox_PE_AAVXamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal___23_UE_AAAJPEAPE_AAVString_3__Z(
        __int64 a1,
        HSTRING *a2)
{
  HSTRING v3; // rax
  HSTRING v4; // rsi
  HRESULT v5; // eax
  HSTRING v6; // rdi
  HRESULT v7; // eax
  HSTRING v8; // rsi
  HSTRING newString; // [rsp+50h] [rbp+8h] BYREF
  HSTRING v11; // [rsp+60h] [rbp+18h] BYREF
  HSTRING v12; // [rsp+68h] [rbp+20h]

  if ( *(_BYTE *)(a1 + 72) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0LL;
  try
  {
    v3 = (HSTRING)__abi_details::__abi_ObjectToString(a1, 0LL);
    v4 = v3;
    v11 = v3;
    if ( v3 )
    {
      v5 = WindowsDuplicateString_0(v3, &newString);
      if ( v5 < 0 )
        __abi_WinRTraiseException(v5);
      v6 = newString;
    }
    else
    {
      v6 = 0LL;
    }
    WindowsDeleteString_0(v4);
    v12 = v6;
    if ( v6 )
    {
      v7 = WindowsDuplicateString_0(v6, &v11);
      if ( v7 < 0 )
        __abi_WinRTraiseException(v7);
      v8 = v11;
    }
    else
    {
      v8 = 0LL;
    }
    WindowsDeleteString_0(v6);
    *a2 = v8;
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
