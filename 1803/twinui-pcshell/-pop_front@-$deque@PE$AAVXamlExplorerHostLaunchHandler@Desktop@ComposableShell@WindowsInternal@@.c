/*
 * XREFs of ?pop_front@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAAXXZ @ 0x1802007A4
 * Callers:
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x1801FDF68 (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@Co_ea_1801FDF68.c)
 *     ?erase@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@0@Z @ 0x1802002E8 (-erase@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V-$a.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::pop_front(
        _QWORD *a1)
{
  __int64 result; // rax

  result = __abi_winrt_ptr_dtor(*(_QWORD *)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[3] >> 1))) + 8 * (a1[3] & 1LL)));
  if ( a1[4]-- == 1LL )
    a1[3] = 0LL;
  else
    ++a1[3];
  return result;
}
