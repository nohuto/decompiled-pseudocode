/*
 * XREFs of ?erase@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@0@Z @ 0x1802002E8
 * Callers:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1801FCF60 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 * Callees:
 *     ??$_Move_no_deprecate@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00@Z @ 0x1801FC190 (--$_Move_no_deprecate@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorer.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00@Z @ 0x1801FC4D8 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostL.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x1801FC944 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHand.c)
 *     ?pop_back@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAAXXZ @ 0x180200754 (-pop_back@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V.c)
 *     ?pop_front@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAAXXZ @ 0x1802007A4 (-pop_front@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@.c)
 */

_QWORD *__fastcall std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::erase(
        __int64 **a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // r10
  __int64 *v6; // rcx
  __int64 v7; // r9
  __int64 *v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 v14; // r9
  __int64 *v15; // rax
  __int128 v17; // [rsp+20h] [rbp-49h] BYREF
  __int64 v18; // [rsp+30h] [rbp-39h]
  __int128 v19; // [rsp+38h] [rbp-31h] BYREF
  __int64 *v20; // [rsp+48h] [rbp-21h]
  __int64 *v21; // [rsp+50h] [rbp-19h] BYREF
  __int64 v22; // [rsp+58h] [rbp-11h]
  __int64 v23; // [rsp+60h] [rbp-9h]
  __int64 *v24[3]; // [rsp+68h] [rbp-1h] BYREF
  _QWORD v25[3]; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v26[3]; // [rsp+98h] [rbp+2Fh] BYREF

  v17 = 0LL;
  v18 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
          v24,
          a3)[2];
  if ( a1 )
    *(_QWORD *)&v17 = *a1;
  v19 = 0LL;
  v6 = (__int64 *)std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
                    v24,
                    v5)[2];
  v20 = v6;
  if ( a1 )
    *(_QWORD *)&v19 = *a1;
  v8 = a1[3];
  v9 = v7 - (_QWORD)v8;
  v10 = (__int64)v6 - v7;
  if ( (__int64 *)(v7 - (_QWORD)v8) >= (__int64 *)((char *)a1[4] + (_QWORD)v8 - (char *)v6) )
  {
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
      v25,
      (__int64)&v17);
    v13 = *a1;
    v22 = 0LL;
    v21 = v13;
    v23 = v14;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
      v26,
      (__int64)&v19);
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
      &v19,
      (__int64)v25);
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
      &v17,
      (__int64)&v21);
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
      v24,
      (__int64)v26);
    std::_Move_no_deprecate<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>>(
      (__int64)v25,
      v24,
      (__int64 **)&v17,
      (__int64)&v19);
    for ( ; v10; --v10 )
      std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::pop_back(a1);
  }
  else
  {
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
      v26,
      (__int64)&v19);
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
      v25,
      (__int64)&v17);
    v11 = *a1;
    v22 = 0LL;
    v23 = v12;
    v21 = v11;
    std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>>(
      (__int64)v24,
      &v21,
      (__int64)v25,
      (__int64)v26);
    for ( ; v10; --v10 )
      std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::pop_front(a1);
  }
  v15 = a1[3];
  *((_QWORD *)&v19 + 1) = 0LL;
  v20 = v15;
  *(_QWORD *)&v19 = *a1;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
    &v17,
    (__int64)&v19);
  v18 += v9;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
    a2,
    (__int64)&v17);
  return a2;
}
