/*
 * XREFs of _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1801FCF60
 * Callers:
 *     wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::_ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x1801FCC20 (wil--details--ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___--_ScopeExitFn__lambda_d1cc.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_ThreadData @ 0x1801FCDDC (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2_--ThreadData--_.c)
 *     _lambda_e8537fd42700b698b39adf2393712a09_::operator() @ 0x1801FD0E0 (_lambda_e8537fd42700b698b39adf2393712a09_--operator().c)
 *     ??_GThreadData@?1??CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@345@@Z@QEAAPEAXI@Z @ 0x1801FD39C (--_GThreadData@-1--CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AA.c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x1801FD62C (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$remove@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@0AEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x1801FC5B0 (--$remove@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHa.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x1801FC944 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHand.c)
 *     ?erase@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@0@Z @ 0x1802002E8 (-erase@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V-$a.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_d1cc878f49256a12ed651bb70f914db7_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  _QWORD *v6; // r9
  __int64 *v7; // rax
  _QWORD *v8; // rdi
  __int64 **v9; // r9
  __int64 *v10; // r8
  __int64 *v11; // rdx
  __int64 *v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  int v16; // eax
  __int128 v18; // [rsp+20h] [rbp-49h] BYREF
  __int64 *v19; // [rsp+30h] [rbp-39h]
  __int64 *v20[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v21[3]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v22[3]; // [rsp+70h] [rbp+7h] BYREF
  char v23[56]; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+D0h] [rbp+67h] BYREF
  struct _Mtx_internal_imp_t *v25; // [rsp+D8h] [rbp+6Fh]
  _QWORD *v26; // [rsp+E0h] [rbp+77h]

  v20[3] = (__int64 *)-2LL;
  v2 = Platform::Details::ResolveWeakReference(
         &_uuidof__AVXamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal__,
         a1 + 16);
  v24 = v2;
  v3 = __abi_winrt_ptr_ctor(v2);
  v24 = v3;
  __abi_winrt_ptr_dtor(v2);
  if ( v3 )
  {
    v4 = (struct _Mtx_internal_imp_t *)(*(_QWORD *)a1 + 104LL);
    v25 = v4;
    v5 = _Mtx_lock(v4);
    if ( v5 )
      std::_Throw_C_error(v5);
    v26 = v21;
    v6 = (_QWORD *)(*(_QWORD *)a1 + 184LL);
    v7 = (__int64 *)(*(_QWORD *)(*(_QWORD *)a1 + 216LL) + *(_QWORD *)(*(_QWORD *)a1 + 208LL));
    *((_QWORD *)&v18 + 1) = 0LL;
    v19 = v7;
    *(_QWORD *)&v18 = *v6;
    v8 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
           v21,
           (__int64)&v18);
    v10 = v9[3];
    v11 = (__int64 *)((char *)v9[4] + (_QWORD)v10);
    v20[1] = 0LL;
    v20[2] = v11;
    v12 = *v9;
    v20[0] = *v9;
    v18 = 0LL;
    v19 = v10;
    v13 = 0LL;
    if ( v9 )
      v13 = v12;
    *(_QWORD *)&v18 = v13;
    v14 = std::remove<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
            (__int64)v23,
            (__int64 **)&v18,
            v20,
            &v24);
    v15 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
            v22,
            v14);
    std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::erase(
      *(_QWORD *)a1 + 184LL,
      &v18,
      v15,
      v8);
    v16 = _Mtx_unlock(v4);
    if ( v16 )
      std::_Throw_C_error(v16);
  }
  return __abi_winrt_ptr_dtor(v3);
}
