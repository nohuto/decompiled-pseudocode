/*
 * XREFs of ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x180122374
 * Callers:
 *     ?CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x18011C2F0 (-CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCr.c)
 *     ?CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18011DBEC (-CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEA.c)
 * Callees:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x180122770 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 *     std::unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___::_unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___ @ 0x1801231BC (std--unique_ptr__WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2.c)
 *     ?_Growmap@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@IEAAX_K@Z @ 0x18012359C (-_Growmap@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V.c)
 *     wil::ScopeExit__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x180124060 (wil--ScopeExit__lambda_d1cc878f49256a12ed651bb70f914db7___.c)
 *     std::make_unique__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_ @ 0x1801240D4 (std--make_unique__WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_.c)
 *     ??0?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@Platform@@QE$AAA@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x180124400 (--0-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Det.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18012825C (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView(
        _QWORD *a1,
        __int128 *a2,
        __int64 a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int64 v8; // r15
  __int64 v9; // r12
  _QWORD *v10; // r15
  int v11; // eax
  void *v12; // r14
  __int64 WeakReference; // rbx
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // rcx
  void *v17; // rdx
  unsigned int v18; // r8d
  const char *v19; // r9
  __int64 result; // rax
  __int64 v21; // rcx
  void *pData; // [rsp+28h] [rbp-79h] BYREF
  __int64 v23; // [rsp+30h] [rbp-71h] BYREF
  __int64 v24; // [rsp+38h] [rbp-69h]
  __int64 v25; // [rsp+40h] [rbp-61h]
  char v26; // [rsp+48h] [rbp-59h]
  void *v27; // [rsp+50h] [rbp-51h]
  _QWORD *v28; // [rsp+58h] [rbp-49h] BYREF
  _QWORD *v29; // [rsp+60h] [rbp-41h]
  __int64 v30; // [rsp+68h] [rbp-39h]
  _QWORD *v31; // [rsp+70h] [rbp-31h]
  __int64 v32; // [rsp+78h] [rbp-29h]
  __int64 v33; // [rsp+80h] [rbp-21h]
  __int128 v34; // [rsp+88h] [rbp-19h] BYREF
  int v35; // [rsp+98h] [rbp-9h]
  __int64 v36; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v37; // [rsp+A8h] [rbp+7h]
  __int64 v38; // [rsp+B0h] [rbp+Fh]
  char v39; // [rsp+B8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v32 = -2LL;
  v33 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  pData = a1 + 13;
  v6 = _Mtx_lock((_Mtx_t)(a1 + 13));
  if ( v6 )
    std::_Throw_C_error(v6);
  v7 = a1[27];
  if ( (((_BYTE)v7 + *((_BYTE *)a1 + 208)) & 1) == 0 && a1[25] <= (unsigned __int64)(v7 + 2) >> 1 )
    std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::_Growmap(a1 + 23);
  a1[26] &= 2LL * a1[25] - 1;
  v8 = a1[26] + a1[27];
  v9 = (v8 >> 1) & (a1[25] - 1LL);
  if ( !*(_QWORD *)(a1[24] + 8 * v9) )
    *(_QWORD *)(a1[24] + 8 * v9) = operator new(0x10uLL);
  v10 = (_QWORD *)(*(_QWORD *)(a1[24] + 8 * v9) + 8 * (v8 & 1));
  v27 = v10;
  v31 = v10;
  if ( v10 )
  {
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    *v10 = a3;
  }
  ++a1[27];
  v11 = _Mtx_unlock((_Mtx_t)(a1 + 13));
  if ( v11 )
    std::_Throw_C_error(v11);
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v31 = a1;
  if ( a3 )
  {
    v27 = Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
    v12 = (void *)Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
                    v27,
                    a3);
    pData = v12;
  }
  else
  {
    v12 = 0LL;
    pData = 0LL;
  }
  WeakReference = Platform::Details::GetWeakReference(v12);
  v27 = (void *)WeakReference;
  if ( v12 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v28 = a1;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v29 = a1;
  v30 = WeakReference;
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
  wil::ScopeExit__lambda_d1cc878f49256a12ed651bb70f914db7___(&v23, &v28);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *))(*v29 + 16LL))(v29);
  if ( v28 )
    (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
  v34 = *a2;
  v35 = *((_DWORD *)a2 + 4);
  v14 = v23;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  v36 = v14;
  v15 = v24;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  v37 = v15;
  v38 = v25;
  v25 = 0LL;
  v39 = v26;
  v26 = 0;
  std::make_unique__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_(
    &pData,
    &v34);
  if ( v39 )
  {
    v39 = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()(&v36);
  }
  v16 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( !SHCreateThread(lambda_e8537fd42700b698b39adf2393712a09_::_lambda_invoker_cdecl_, pData, 0, 0LL) )
  {
    wil::details::in1diag3::_Throw_GetLastError(retaddr, v17, v18, v19);
    __debugbreak();
  }
  pData = 0LL;
  result = std::unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___::_unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___(&pData);
  if ( v26 )
  {
    v26 = 0;
    result = lambda_d1cc878f49256a12ed651bb70f914db7_::operator()(&v23);
  }
  v21 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v24 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v23 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( WeakReference )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 16LL))(WeakReference);
  if ( a1 )
    result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  if ( a3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  return result;
}
