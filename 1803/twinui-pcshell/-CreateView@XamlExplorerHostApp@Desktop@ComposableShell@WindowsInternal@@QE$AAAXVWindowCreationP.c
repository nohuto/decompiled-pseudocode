/*
 * XREFs of ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x1801FD62C
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1801FA99C (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180098DA4 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018D988 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::_lambda_d1cc878f49256a12ed651bb70f914db7_ @ 0x1801FC64C (_lambda_d1cc878f49256a12ed651bb70f914db7_--_lambda_d1cc878f49256a12ed651bb70f914db7_.c)
 *     ??0?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@Platform@@QE$AAA@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x1801FC790 (--0-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Det.c)
 *     wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x1801FC858 (wil--details--ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___--ScopeExitFn__lambda_d1cc8.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_ @ 0x1801FCBD8 (_lambda_d1cc878f49256a12ed651bb70f914db7_--__lambda_d1cc878f49256a12ed651bb70f914db7_.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1801FCF60 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 *     ?push_back@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAAXAEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x1802007F0 (-push_back@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView(
        __int64 a1,
        __int128 *a2,
        __int64 a3)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // r14
  Platform::Details *v8; // rdi
  Platform::Details *WeakReference; // rbx
  _DWORD *v10; // rdi
  const char *v11; // r9
  __int64 v13; // [rsp+28h] [rbp-69h] BYREF
  Platform::Details *v14; // [rsp+30h] [rbp-61h]
  __int64 v15[3]; // [rsp+38h] [rbp-59h] BYREF
  char v16; // [rsp+50h] [rbp-41h]
  __int64 v17[6]; // [rsp+58h] [rbp-39h] BYREF
  __int128 v18; // [rsp+88h] [rbp-9h]
  int v19; // [rsp+98h] [rbp+7h]
  __int64 v20[3]; // [rsp+A0h] [rbp+Fh] BYREF
  char v21; // [rsp+B8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v17[3] = -2LL;
  v13 = __abi_winrt_ptr_ctor(a3);
  v14 = (Platform::Details *)(a1 + 104);
  v5 = _Mtx_lock((_Mtx_t)(a1 + 104));
  if ( v5 )
    std::_Throw_C_error(v5);
  std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::push_back(a1 + 184, &v13);
  v6 = _Mtx_unlock((_Mtx_t)(a1 + 104));
  if ( v6 )
    std::_Throw_C_error(v6);
  v7 = __abi_winrt_ptr_ctor(a1);
  v17[4] = v7;
  if ( v13 )
  {
    v14 = (Platform::Details *)Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
    v8 = Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
           v14,
           v13);
    v14 = v8;
  }
  else
  {
    v8 = 0LL;
    v14 = 0LL;
  }
  WeakReference = (Platform::Details *)Platform::Details::GetWeakReference(v8);
  v14 = WeakReference;
  __abi_winrt_ptr_dtor((__int64)v8);
  v17[0] = __abi_winrt_ptr_ctor(a1);
  v17[1] = __abi_winrt_ptr_ctor(v7);
  v17[2] = (__int64)WeakReference;
  if ( WeakReference )
    (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
  lambda_d1cc878f49256a12ed651bb70f914db7_::_lambda_d1cc878f49256a12ed651bb70f914db7_(v15, v17);
  v16 = 1;
  lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(v17);
  v18 = *a2;
  v19 = *((_DWORD *)a2 + 4);
  wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___(
    (__int64)v20,
    (__int64)v15);
  v10 = operator new(0x38uLL);
  *(_OWORD *)v10 = v18;
  v10[4] = v19;
  wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___(
    (__int64)(v10 + 6),
    (__int64)v20);
  v17[5] = (__int64)v10;
  if ( v21 )
  {
    v21 = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()((__int64)v20);
  }
  lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(v20);
  if ( !SHCreateThread(
          (LPTHREAD_START_ROUTINE)lambda_e8537fd42700b698b39adf2393712a09_::_lambda_invoker_cdecl_,
          v10,
          0,
          0LL) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x54,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
      v11);
  if ( v16 )
  {
    v16 = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()((__int64)v15);
  }
  lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(v15);
  if ( WeakReference )
    (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)WeakReference + 16LL))(WeakReference);
  __abi_winrt_ptr_dtor(v7);
  return __abi_winrt_ptr_dtor(v13);
}
