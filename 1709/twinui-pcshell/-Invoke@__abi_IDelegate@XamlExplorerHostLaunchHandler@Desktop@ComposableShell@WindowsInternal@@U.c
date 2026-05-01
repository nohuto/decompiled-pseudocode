/*
 * XREFs of ?Invoke@__abi_IDelegate@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Z @ 0x18014A584
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Desktop_XamlExplorerHostLaunchHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@2345@UE$AAAJPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Z @ 0x18014A4F0 (-__abi_WindowsInternal_ComposableShell_Desktop_XamlExplorerHostLaunchHandler___abi_IDelegate____.c)
 *     ?Invoke@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Z @ 0x18014A5F0 (-Invoke@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVWind.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_IDelegate::Invoke(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a3 )
  {
    memset(&v7, 0, sizeof(v7));
    *a3 = v7;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)a1 + 24LL))(a1, a2, a3);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}
