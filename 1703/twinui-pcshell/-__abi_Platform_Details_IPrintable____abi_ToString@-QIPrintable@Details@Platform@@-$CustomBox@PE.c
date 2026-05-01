/*
 * XREFs of ?__abi_Platform_Details_IPrintable____abi_ToString@?QIPrintable@Details@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@23@UE$AAAJPEAPE$AAVString@3@@Z @ 0x180123988
 * Callers:
 *     ?__abi_Platform_Details_IPrintable____abi_ToString@?QIPrintable@Details@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@23@WBA@E$AAAJPEAPE$AAVString@3@@Z @ 0x180124C20 (-__abi_Platform_Details_IPrintable____abi_ToString@-QIPrintable@Details@Platform@@-_ea_180124C20.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     WindowsDeleteString_0 @ 0x1801952DE (WindowsDeleteString_0.c)
 *     WindowsDuplicateString_0 @ 0x180195382 (WindowsDuplicateString_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ___abi_Platform_Details_IPrintable____abi_ToString__QIPrintable_Details_Platform____CustomBox_PE_AAVXamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal___23_UE_AAAJPEAPE_AAVString_3__Z(
        __int64 a1,
        HSTRING *a2)
{
  unsigned int v3; // ebx
  HSTRING v4; // rax
  HSTRING v5; // rsi
  HRESULT v6; // eax
  HSTRING v7; // rdi
  HRESULT v8; // eax
  HSTRING v9; // rsi
  HSTRING newString; // [rsp+50h] [rbp+8h] BYREF
  HSTRING v12; // [rsp+60h] [rbp+18h] BYREF
  HSTRING v13; // [rsp+68h] [rbp+20h]

  v3 = 0;
  if ( *(_BYTE *)(a1 + 72) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0LL;
  try
  {
    v4 = (HSTRING)__abi_details::__abi_ObjectToString(a1, 0LL);
    v5 = v4;
    v12 = v4;
    if ( v4 )
    {
      v6 = WindowsDuplicateString_0(v4, &newString);
      if ( v6 < 0 )
        __abi_WinRTraiseException(v6);
      v7 = newString;
    }
    else
    {
      v7 = 0LL;
    }
    WindowsDeleteString_0(v5);
    v13 = v7;
    if ( v7 )
    {
      v8 = WindowsDuplicateString_0(v7, &v12);
      if ( v8 < 0 )
        __abi_WinRTraiseException(v8);
      v9 = v12;
    }
    else
    {
      v9 = 0LL;
    }
    WindowsDeleteString_0(v7);
    *a2 = v9;
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v3;
}
