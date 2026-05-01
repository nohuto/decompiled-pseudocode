/*
 * XREFs of ??$_Move_backward_unchecked1@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00U_General_ptr_iterator_tag@0@@Z @ 0x1801FC0E8
 * Callers:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00@Z @ 0x1801FC4D8 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostL.c)
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1801F9514 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 */

_OWORD *__fastcall std::_Move_backward_unchecked1<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>>(
        _OWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v8; // r10
  __int64 v9; // rdx
  unsigned __int64 v10; // r10
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  _OWORD *result; // rax

  while ( 1 )
  {
    v8 = a3[1];
    if ( *(_QWORD *)(a2 + 8) == v8 )
      break;
    v9 = *a3;
    v10 = v8 - 1;
    a3[1] = v10;
    v11 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * ((v10 >> 1) & (*(_QWORD *)(v9 + 16) - 1LL)));
    v12 = a4[1] - 1;
    v13 = *a4;
    a4[1] = v12;
    __abi_winrt_ptr_assign(
      (__int64 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * ((v12 >> 1) & (*(_QWORD *)(v13 + 16) - 1LL))) + 8 * (v12 & 1)),
      *(_QWORD *)(v11 + 8 * (v10 & 1)));
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
