/*
 * XREFs of ?erase@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@0@Z @ 0x18014D9D8
 * Callers:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x18014CD24 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 * Callees:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00@Z @ 0x18014E6D8 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostL.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00@Z @ 0x18014E834 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHand.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD **v5; // r10
  __int64 v6; // rcx
  __int64 v8; // rdx
  _QWORD **v9; // r8
  __int64 v10; // r9
  __int64 v11; // r11
  __int64 v12; // r14
  __int64 v13; // rdi
  _QWORD **v14; // rax
  __int64 v15; // rcx
  bool v16; // zf
  _QWORD **v17; // rax
  __int64 v18; // rcx
  _QWORD **v19; // rax
  __int64 v20; // rdx
  _QWORD ***v21; // rcx
  _QWORD *v22; // rax
  __int128 v24; // [rsp+20h] [rbp-60h] BYREF
  __int64 v25; // [rsp+30h] [rbp-50h]
  __int128 v26; // [rsp+38h] [rbp-48h] BYREF
  __int64 v27; // [rsp+48h] [rbp-38h]
  __int128 v28; // [rsp+50h] [rbp-30h] BYREF
  __int64 v29; // [rsp+60h] [rbp-20h]
  _BYTE v30[24]; // [rsp+68h] [rbp-18h] BYREF

  v5 = 0LL;
  v6 = *(_QWORD *)(a3 + 16);
  if ( a1 )
    v5 = *(_QWORD ***)a1;
  v8 = *(_QWORD *)(a4 + 16);
  v9 = 0LL;
  if ( a1 )
    v9 = *(_QWORD ***)a1;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = v10 + *(_QWORD *)(a1 + 32);
  v12 = v6 - v10;
  v13 = v8 - v6;
  if ( v6 - v10 >= (unsigned __int64)(v11 - v8) )
  {
    v28 = 0LL;
    if ( v5 && *v5 )
      *(_QWORD *)&v28 = **v5;
    v17 = *(_QWORD ***)a1;
    v29 = v6;
    v27 = v11;
    v26 = (unsigned __int64)v17;
    v24 = 0LL;
    if ( v9 && *v9 )
      *(_QWORD *)&v24 = **v9;
    v25 = v8;
    ((void (__fastcall *)(_BYTE *, __int128 *, __int128 *, __int128 *))std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>>)(
      v30,
      &v24,
      &v26,
      &v28);
    for ( ; v13; --v13 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8)
                                  + 8
                                  * ((*(_QWORD *)(a1 + 16) - 1LL) & ((unsigned __int64)(*(_QWORD *)(a1 + 32)
                                                                                      - 1LL
                                                                                      + *(_QWORD *)(a1 + 24)) >> 1)))
                      + 8LL * ((*(_DWORD *)(a1 + 32) - 1 + *(_DWORD *)(a1 + 24)) & 1));
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      v16 = (*(_QWORD *)(a1 + 32))-- == 1LL;
      if ( v16 )
        *(_QWORD *)(a1 + 24) = 0LL;
    }
  }
  else
  {
    v24 = 0LL;
    if ( v9 && *v9 )
      *(_QWORD *)&v24 = **v9;
    v25 = v8;
    v26 = 0LL;
    if ( v5 && *v5 )
      *(_QWORD *)&v26 = **v5;
    v14 = *(_QWORD ***)a1;
    v27 = v6;
    v29 = v10;
    v28 = (unsigned __int64)v14;
    ((void (__fastcall *)(_BYTE *, __int128 *, __int128 *, __int128 *))std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>>)(
      v30,
      &v28,
      &v26,
      &v24);
    for ( ; v13; --v13 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8)
                                  + 8 * ((*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 24) >> 1)))
                      + 8 * (*(_QWORD *)(a1 + 24) & 1LL));
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v16 = (*(_QWORD *)(a1 + 32))-- == 1LL;
      if ( v16 )
        *(_QWORD *)(a1 + 24) = 0LL;
      else
        ++*(_QWORD *)(a1 + 24);
    }
  }
  v19 = 0LL;
  v20 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    v21 = **(_QWORD *****)a1;
    if ( v21 )
      v19 = *v21;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v19 )
  {
    v22 = *v19;
    if ( v22 )
      *a2 = *v22;
  }
  a2[2] = v20 + v12;
  return a2;
}
