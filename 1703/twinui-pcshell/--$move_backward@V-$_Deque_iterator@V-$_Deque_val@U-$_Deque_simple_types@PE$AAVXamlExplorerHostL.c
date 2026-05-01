/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00@Z @ 0x180124214
 * Callers:
 *     ?erase@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@0@Z @ 0x1801232B4 (-erase@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V-$a.c)
 * Callees:
 *     ??$_Move_backward1@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@0V10@Urandom_access_iterator_tag@0@2@Z @ 0x1801244FC (--$_Move_backward1@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlE.c)
 */

__int64 __fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD **v4; // rax
  __int64 v6; // rcx
  _QWORD *v8; // rax
  __int64 ***v9; // rdx
  __int64 *v10; // rax
  __int64 **v11; // rdx
  __int64 v12; // rax
  __int64 ***v13; // rdx
  __int64 *v14; // rax
  __int64 **v15; // rdx
  __int64 v16; // rdx
  __int128 v18; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+40h] [rbp-30h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]

  v4 = *(_QWORD ***)a4;
  v6 = 0LL;
  v20 = 0LL;
  if ( v4 )
  {
    v8 = *v4;
    if ( v8 )
      *(_QWORD *)&v20 = *v8;
  }
  v9 = *(__int64 ****)a3;
  v21 = *(_QWORD *)(a4 + 16);
  v10 = 0LL;
  if ( v9 )
  {
    v11 = *v9;
    if ( v11 )
      v10 = *v11;
  }
  if ( v10 )
    v12 = *v10;
  else
    v12 = 0LL;
  *((_QWORD *)&v18 + 1) = *(_QWORD *)(a3 + 16);
  v13 = *(__int64 ****)a2;
  *(_QWORD *)&v18 = v12;
  v14 = 0LL;
  v19 = v18;
  if ( v13 )
  {
    v15 = *v13;
    if ( v15 )
      v14 = *v15;
  }
  v16 = *(_QWORD *)(a2 + 16);
  if ( v14 )
    v6 = *v14;
  *(_QWORD *)&v18 = v6;
  *((_QWORD *)&v18 + 1) = v16;
  std::_Move_backward1<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>>(
    a1,
    &v18,
    &v19,
    &v20);
  return a1;
}
