/*
 * XREFs of ?__abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x180150ABC
 * Callers:
 *     ?__abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAJPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x18014EB60 (-__abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnLaunched@-QIApplicationOverrides@Xaml@UI@W.c)
 * Callees:
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x18014D2B0 (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnLaunched__QIApplicationOverrides_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJPE_AAVLaunchActivatedEventArgs_Activation_ApplicationModel_4__Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 240) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    _OnLaunched__QIApplicationOverrides_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__ME_AAAXPE_AAVLaunchActivatedEventArgs_Activation_ApplicationModel_4__Z(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
