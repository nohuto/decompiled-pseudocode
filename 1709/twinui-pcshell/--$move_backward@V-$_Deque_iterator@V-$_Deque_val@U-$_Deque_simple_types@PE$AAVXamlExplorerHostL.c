/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00@Z @ 0x18014E6D8
 * Callers:
 *     ?erase@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@0@Z @ 0x18014D9D8 (-erase@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V-$a.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>>(
        __int64 **a1,
        __int64 a2,
        __int64 **a3,
        __int64 a4)
{
  __int64 **v4; // rbx
  __int64 ***v5; // rcx
  unsigned __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned __int64 v10; // r15
  __int64 *v11; // rax
  __int64 **v12; // rcx
  __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 ***v21; // rax
  __int64 **v22; // rax
  __int64 v25; // [rsp+98h] [rbp+10h]

  v4 = a1;
  v5 = *(__int64 ****)a4;
  v7 = *(_QWORD *)(a4 + 16);
  v8 = *(_QWORD *)(a2 + 16);
  if ( *a3 )
    v9 = **a3;
  else
    v9 = 0LL;
  v10 = (unsigned __int64)a3[2];
  v11 = 0LL;
  v25 = v9;
  if ( v5 )
  {
    v12 = *v5;
    if ( v12 )
      v11 = *v12;
  }
  if ( v11 )
    v13 = *v11;
  else
    v13 = 0LL;
  v14 = v7;
  if ( v8 != v10 )
  {
    v15 = v8;
    do
    {
      --v10;
      v16 = --v14 & 1;
      v17 = (*(_QWORD *)(v9 + 16) - 1LL) & (v10 >> 1);
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * v17) + 8 * (v10 & 1));
      v19 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * ((*(_QWORD *)(v13 + 16) - 1LL) & (v14 >> 1)));
      if ( v18 != *(_QWORD *)(v19 + 8 * v16) )
      {
        if ( v18 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 8LL))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * v17)
                                                                            + 8 * (v10 & 1)));
        v20 = *(_QWORD *)(v19 + 8 * v16);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        v9 = v25;
        *(_QWORD *)(v19 + 8 * v16) = v18;
      }
    }
    while ( v10 != v15 );
    v4 = a1;
  }
  *v4 = 0LL;
  v4[1] = 0LL;
  v21 = *(__int64 ****)a4;
  *(_QWORD *)(a4 + 16) = v14;
  if ( v21 )
  {
    v22 = *v21;
    if ( v22 )
      *v4 = *v22;
  }
  v4[2] = (__int64 *)v14;
  return v4;
}
