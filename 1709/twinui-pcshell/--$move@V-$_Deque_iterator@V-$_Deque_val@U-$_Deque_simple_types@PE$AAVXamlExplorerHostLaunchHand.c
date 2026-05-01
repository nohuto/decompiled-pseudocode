/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00@Z @ 0x18014E834
 * Callers:
 *     ?erase@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@0@Z @ 0x18014D9D8 (-erase@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V-$a.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 ***v4; // rsi
  __int64 ****v6; // rax
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 **v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r12
  __int64 **v12; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // [rsp+A0h] [rbp+40h]
  __int64 v22; // [rsp+A8h] [rbp+48h]
  __int64 v23; // [rsp+B0h] [rbp+50h]

  v4 = 0LL;
  if ( *(_QWORD *)a4 )
  {
    v6 = **(__int64 ******)a4;
    if ( v6 )
      v4 = *v6;
  }
  v7 = 0LL;
  v8 = *(_QWORD *)(a3 + 16);
  v23 = v8;
  if ( *(_QWORD *)a2 )
  {
    v9 = **(__int64 ****)a2;
    if ( v9 )
      v7 = *v9;
  }
  v10 = *(_QWORD *)(a2 + 16);
  if ( v7 )
    v11 = *v7;
  else
    v11 = 0LL;
  if ( v4 && (v12 = *v4) != 0LL && *v12 )
    v13 = **v12;
  else
    v13 = 0LL;
  v14 = *(_QWORD *)(a4 + 16);
  if ( v10 != v8 )
  {
    v15 = v10;
    do
    {
      v16 = v14 & 1;
      v21 = v16;
      v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * ((*(_QWORD *)(v11 + 16) - 1LL) & (v15 >> 1)))
                      + 8 * (v15 & 1));
      v18 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * ((*(_QWORD *)(v13 + 16) - 1LL) & (v14 >> 1)));
      v22 = v18;
      if ( v17 != *(_QWORD *)(v18 + 8 * v16) )
      {
        if ( v17 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
          v16 = v21;
          v18 = v22;
        }
        v19 = *(_QWORD *)(v18 + 8 * v16);
        if ( v19 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          v16 = v21;
          v18 = v22;
        }
        v8 = v23;
        *(_QWORD *)(v18 + 8 * v16) = v17;
      }
      ++v14;
      ++v15;
    }
    while ( v15 != v8 );
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 && *v4 )
    *a1 = **v4;
  a1[2] = (__int64 *)v14;
  return a1;
}
