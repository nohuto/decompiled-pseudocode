/*
 * XREFs of ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x180123558
 * Callers:
 *     ?erase@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@0@Z @ 0x1801232B4 (-erase@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V-$a.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::operator+(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD **v3; // r9
  _QWORD ***v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v4 = **(_QWORD *****)a1;
    if ( v4 )
      v3 = *v4;
  }
  v5 = *(_QWORD *)(a1 + 16);
  *a2 = 0LL;
  v6 = a3 + v5;
  a2[1] = 0LL;
  if ( v3 && *v3 )
    *a2 = **v3;
  a2[2] = v6;
  return a2;
}
