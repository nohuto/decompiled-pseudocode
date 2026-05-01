/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Desktop_XamlExplorerHostLaunchHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@2345@UE$AAAJPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Z @ 0x1801FB920
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?Invoke@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Z @ 0x1801FB0C0 (-Invoke@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVWind.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Desktop_XamlExplorerHostLaunchHandler___abi_IDelegate____abi_Invoke__Q__abi_IDelegate_XamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal__2345_UE_AAAJPE_AAVWindow_Xaml_UI_Windows__PEAUHWND_____Z(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  int v6; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    if ( a3 )
    {
      memset_0(&v6, 0, sizeof(v6));
      *a3 = v6;
    }
    WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::Invoke(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
