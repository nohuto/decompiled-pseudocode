/*
 * XREFs of ?ToString@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@Platform@@UE$AAAPE$AAVString@3@XZ @ 0x18014E9F8
 * Callers:
 *     ?ToString@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@Platform@@WBA@E$AAAPE$AAVString@3@XZ @ 0x18014F020 (-ToString@-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@W_ea_18014F020.c)
 * Callees:
 *     WindowsDeleteString_0 @ 0x1801E31C7 (WindowsDeleteString_0.c)
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
