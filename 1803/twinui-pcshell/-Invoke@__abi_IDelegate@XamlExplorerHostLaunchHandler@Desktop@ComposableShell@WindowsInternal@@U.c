/*
 * XREFs of ?Invoke@__abi_IDelegate@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Z @ 0x1801FB0E8
 * Callers:
 *     ?Invoke@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Z @ 0x1801FB0C0 (-Invoke@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVWind.c)
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x1801FDF68 (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@Co_ea_1801FDF68.c)
 * Callees:
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
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
    memset_0(&v7, 0, sizeof(v7));
    *a3 = v7;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)a1 + 24LL))(a1, a2, a3);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}
