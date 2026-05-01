/*
 * XREFs of _lambda_3c4ff4ccd576f8db880f0fb482543cc9_::operator() @ 0x18003E8A0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_3c4ff4ccd576f8db880f0fb482543cc9__&___ptr64__1_long_::Invoke @ 0x180046CD0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_180046CD0.c)
 * Callees:
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x18003DA38 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180041DB0 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_3c4ff4ccd576f8db880f0fb482543cc9_::operator()(__int64 a1, unsigned int a2)
{
  HWND v3; // r12
  int v4; // edi
  __int64 v5; // rcx
  HWND v6; // r15
  HWND v7; // rbx
  HWND v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v11; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v12; // rcx
  HWND v14; // [rsp+30h] [rbp-30h] BYREF
  HWND v15[5]; // [rsp+38h] [rbp-28h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v16; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+48h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v18; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+58h] BYREF

  v17 = a2;
  v15[1] = (HWND)-2LL;
  v18 = 0LL;
  v3 = 0LL;
  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(**(_QWORD **)(a1 + 8) + 48LL))(
         *(_QWORD *)(a1 + 8),
         &v18);
  if ( v4 >= 0 )
  {
    v19 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))v18)(
           v18,
           &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
           &v19);
    if ( v4 >= 0 )
    {
      v4 = WindowFromViewWrapper(v18, &v14);
      v3 = v14;
    }
    v5 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v16 = 0LL;
  v6 = 0LL;
  v15[0] = 0LL;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(**(_QWORD **)(a1 + 8) + 56LL))(
           *(_QWORD *)(a1 + 8),
           &v16);
    if ( v4 >= 0 )
    {
      v4 = WindowFromViewWrapper(v16, v15);
      v6 = v15[0];
    }
  }
  v17 = 0;
  if ( v4 < 0
    || (v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 64LL))(
               *(_QWORD *)(a1 + 8),
               &v17),
        v4 < 0) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 72LL))(*(_QWORD *)(a1 + 8), (unsigned int)v4);
  }
  else
  {
    v7 = *(HWND *)(a1 + 8);
    v15[2] = v7;
    if ( v7 )
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = 0LL;
    v15[3] = 0LL;
    v9 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 3) = 1;
      *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v10[2] = v7;
      if ( v7 )
        (*(void (__fastcall **)(HWND))(*(_QWORD *)v7 + 8LL))(v7);
      *v10 = off_1801FC5E0;
      v8 = (HWND)v10;
    }
    v15[4] = v8;
    v4 = CAppViewManager::_SwitchAsyncWorker(*(_QWORD *)a1, v3, v6, v17, v16, v8);
    if ( v8 )
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v7 )
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v11 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v4;
}
