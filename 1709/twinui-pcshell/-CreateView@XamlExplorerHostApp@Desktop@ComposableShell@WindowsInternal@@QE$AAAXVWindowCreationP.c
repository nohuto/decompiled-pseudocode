/*
 * XREFs of ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x18014C8B4
 * Callers:
 *     ?CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180147F1C (-CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEA.c)
 *     ?CreateXamlExplorerHostWindow@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x180148338 (-CreateXamlExplorerHostWindow@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallbac.c)
 * Callees:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x18014CD24 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 *     std::unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___::_unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___ @ 0x18014D8E0 (std--unique_ptr__WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2.c)
 *     ?_Growmap@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@IEAAX_K@Z @ 0x18014DC04 (-_Growmap@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V.c)
 *     ??0?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@Platform@@QE$AAA@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x18014EA40 (--0-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Det.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18015258C (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView(
        _QWORD *a1,
        __int128 *a2,
        __int64 a3)
{
  int v6; // eax
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  _QWORD *v9; // r15
  int v10; // eax
  __int64 v11; // r14
  __int64 WeakReference; // rbx
  _QWORD *v13; // r14
  _QWORD *v14; // r15
  _DWORD *v15; // r14
  __int64 v16; // rcx
  const char *v17; // r9
  __int64 result; // rax
  __int64 v19; // rcx
  _DWORD *v20; // [rsp+28h] [rbp-79h] BYREF
  _QWORD *v21; // [rsp+30h] [rbp-71h] BYREF
  _QWORD *v22; // [rsp+38h] [rbp-69h]
  __int64 v23; // [rsp+40h] [rbp-61h]
  char v24; // [rsp+48h] [rbp-59h]
  void *v25; // [rsp+50h] [rbp-51h]
  _QWORD *v26; // [rsp+58h] [rbp-49h]
  __int64 v27; // [rsp+60h] [rbp-41h]
  __int64 v28; // [rsp+68h] [rbp-39h]
  _QWORD *v29; // [rsp+70h] [rbp-31h]
  _QWORD *v30; // [rsp+78h] [rbp-29h]
  __int64 v31; // [rsp+80h] [rbp-21h]
  __int128 v32; // [rsp+88h] [rbp-19h]
  int v33; // [rsp+98h] [rbp-9h]
  _QWORD *v34; // [rsp+A0h] [rbp-1h]
  _QWORD *v35; // [rsp+A8h] [rbp+7h]
  __int64 v36; // [rsp+B0h] [rbp+Fh]
  char v37; // [rsp+B8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v27 = -2LL;
  v28 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v20 = a1 + 13;
  v6 = _Mtx_lock((_Mtx_t)(a1 + 13));
  if ( v6 )
    std::_Throw_C_error(v6);
  if ( ((*((_BYTE *)a1 + 208) + (unsigned __int8)a1[27]) & 1) == 0 && a1[25] <= (unsigned __int64)(a1[27] + 2LL) >> 1 )
    std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::_Growmap(a1 + 23);
  a1[26] &= 2LL * a1[25] - 1;
  v7 = a1[26] + a1[27];
  v8 = (v7 >> 1) & (a1[25] - 1LL);
  if ( !*(_QWORD *)(a1[24] + 8 * v8) )
    *(_QWORD *)(a1[24] + 8 * v8) = operator new(0x10uLL);
  v9 = (_QWORD *)(*(_QWORD *)(a1[24] + 8 * v8) + 8 * (v7 & 1));
  v25 = v9;
  v26 = v9;
  if ( v9 )
  {
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    *v9 = a3;
  }
  ++a1[27];
  v10 = _Mtx_unlock((_Mtx_t)(a1 + 13));
  if ( v10 )
    std::_Throw_C_error(v10);
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v26 = a1;
  if ( a3 )
  {
    v25 = Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
    v11 = Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
            v25,
            a3);
    v20 = (_DWORD *)v11;
  }
  else
  {
    v11 = 0LL;
    v20 = 0LL;
  }
  WeakReference = Platform::Details::GetWeakReference(v11);
  v25 = (void *)WeakReference;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v29 = a1;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v30 = a1;
  v31 = WeakReference;
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v13 = a1;
  v21 = a1;
  if ( a1 )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    v13 = v21;
  }
  v14 = a1;
  v22 = a1;
  v23 = WeakReference;
  v24 = 1;
  if ( a1 )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
    v14 = v22;
    v13 = v21;
  }
  v32 = *a2;
  v33 = *((_DWORD *)a2 + 4);
  if ( v13 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v13 + 8LL))(v13);
    v14 = v22;
  }
  v34 = v13;
  if ( v14 )
    (*(void (__fastcall **)(_QWORD *))(*v14 + 8LL))(v14);
  v35 = v14;
  v36 = v23;
  v23 = 0LL;
  v37 = v24;
  v24 = 0;
  v15 = operator new(0x38uLL);
  *(_OWORD *)v15 = v32;
  v15[4] = v33;
  if ( v34 )
    (*(void (__fastcall **)(_QWORD *))(*v34 + 8LL))(v34);
  *((_QWORD *)v15 + 3) = v34;
  if ( v35 )
    (*(void (__fastcall **)(_QWORD *))(*v35 + 8LL))(v35);
  *((_QWORD *)v15 + 4) = v35;
  *((_QWORD *)v15 + 5) = v36;
  v36 = 0LL;
  *((_BYTE *)v15 + 48) = v37;
  v37 = 0;
  v20 = v15;
  v16 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v35 )
    (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
  if ( v34 )
    (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
  if ( !SHCreateThread(lambda_e8537fd42700b698b39adf2393712a09_::_lambda_invoker_cdecl_, v15, 0, 0LL) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x54,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
      v17);
    __debugbreak();
  }
  v20 = 0LL;
  result = std::unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___::_unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___(&v20);
  if ( v24 )
  {
    v24 = 0;
    result = lambda_d1cc878f49256a12ed651bb70f914db7_::operator()(&v21);
  }
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v22 )
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
  if ( v21 )
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
  if ( WeakReference )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 16LL))(WeakReference);
  if ( a1 )
    result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  if ( a3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  return result;
}
