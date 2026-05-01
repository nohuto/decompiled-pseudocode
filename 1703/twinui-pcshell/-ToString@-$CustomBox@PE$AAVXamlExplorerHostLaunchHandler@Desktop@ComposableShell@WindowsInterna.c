/*
 * XREFs of ?ToString@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@Platform@@UE$AAAPE$AAVString@3@XZ @ 0x1801243B8
 * Callers:
 *     ?ToString@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@Platform@@WBA@E$AAAPE$AAVString@3@XZ @ 0x180124DA0 (-ToString@-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@W_ea_180124DA0.c)
 * Callees:
 *     WindowsDeleteString_0 @ 0x1801952DE (WindowsDeleteString_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::ToString(
        __int64 a1)
{
  __int64 v1; // rbx

  v1 = __abi_details::__abi_ObjectToString(a1, 0LL);
  WindowsDeleteString_0(0LL);
  WindowsDeleteString_0(0LL);
  return v1;
}
