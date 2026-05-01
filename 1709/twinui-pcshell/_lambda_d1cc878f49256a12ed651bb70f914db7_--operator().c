/*
 * XREFs of _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x18014CD24
 * Callers:
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x18014C8B4 (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 *     _lambda_e8537fd42700b698b39adf2393712a09_::operator() @ 0x18014CEB4 (_lambda_e8537fd42700b698b39adf2393712a09_--operator().c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_ThreadData @ 0x18014D248 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2_--ThreadData--_.c)
 *     std::unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___::_unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___ @ 0x18014D8E0 (std--unique_ptr__WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2.c)
 *     wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::_ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x18014D974 (wil--details--ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___--_ScopeExitFn__lambda_d1cc.c)
 * Callees:
 *     ?erase@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@0@Z @ 0x18014D9D8 (-erase@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V-$a.c)
 *     ??$remove@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@0AEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x18014E490 (--$remove@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHa.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall lambda_d1cc878f49256a12ed651bb70f914db7_::operator()(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rcx
  _QWORD **v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD **v12; // rcx
  _QWORD **v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rcx
  int v16; // eax
  __int128 v17; // [rsp+20h] [rbp-39h] BYREF
  __int64 v18; // [rsp+30h] [rbp-29h]
  _QWORD v19[3]; // [rsp+38h] [rbp-21h] BYREF
  __int128 v20; // [rsp+50h] [rbp-9h] BYREF
  __int64 v21; // [rsp+60h] [rbp+7h]
  __int64 v22; // [rsp+68h] [rbp+Fh]
  char v23[64]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+67h] BYREF
  struct _Mtx_internal_imp_t *v25; // [rsp+C8h] [rbp+6Fh]
  __int128 *v26; // [rsp+D0h] [rbp+77h]

  v22 = -2LL;
  v2 = Platform::Details::ResolveWeakReference(
         &_uuidof__AVXamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal__,
         a1 + 16);
  v3 = v2;
  v24 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v24 = v3;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v4 = (struct _Mtx_internal_imp_t *)(*(_QWORD *)a1 + 104LL);
    v25 = v4;
    v5 = _Mtx_lock(v4);
    if ( v5 )
      std::_Throw_C_error(v5);
    v26 = &v20;
    v6 = *(_QWORD *)a1 + 184LL;
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 216LL) + *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    v8 = *(_QWORD ***)v6;
    v20 = 0LL;
    if ( v8 )
    {
      v9 = *v8;
      if ( v9 )
        *(_QWORD *)&v20 = *v9;
    }
    v21 = v7;
    v10 = *(_QWORD *)(v6 + 24);
    v11 = v10 + *(_QWORD *)(v6 + 32);
    v19[1] = 0LL;
    v19[2] = v11;
    v12 = *(_QWORD ***)v6;
    v19[0] = *(_QWORD *)v6;
    v17 = 0LL;
    v18 = v10;
    v13 = 0LL;
    if ( v6 )
      v13 = v12;
    *(_QWORD *)&v17 = v13;
    v14 = ((__int64 (__fastcall *)(char *, __int128 *, _QWORD *, __int64 *))std::remove<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>)(
            v23,
            &v17,
            v19,
            &v24);
    v17 = 0LL;
    if ( *(_QWORD *)v14 )
    {
      v15 = **(_QWORD ***)v14;
      if ( v15 )
        *(_QWORD *)&v17 = *v15;
    }
    v18 = *(_QWORD *)(v14 + 16);
    ((void (__fastcall *)(__int64, _QWORD *, __int128 *, __int128 *))std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::erase)(
      *(_QWORD *)a1 + 184LL,
      v19,
      &v17,
      &v20);
    v16 = _Mtx_unlock(v4);
    if ( v16 )
      std::_Throw_C_error(v16);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
