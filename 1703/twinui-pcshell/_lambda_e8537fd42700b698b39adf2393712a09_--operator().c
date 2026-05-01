/*
 * XREFs of _lambda_e8537fd42700b698b39adf2393712a09_::operator() @ 0x1801228E0
 * Callers:
 *     _lambda_e8537fd42700b698b39adf2393712a09_::_lambda_invoker_cdecl_ @ 0x180122C70 (_lambda_e8537fd42700b698b39adf2393712a09_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x180122770 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 *     Windows::UI::Xaml::ApplicationInitializationCallback::ApplicationInitializationCallback__lambda_48eef4ac22d2d23d7627f0d26dc0219c___ @ 0x18012417C (Windows--UI--Xaml--ApplicationInitializationCallback--ApplicationInitializationCallback__lambda_.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall lambda_e8537fd42700b698b39adf2393712a09_::operator()(__int64 a1, char *a2)
{
  int v3; // r14d
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  HRESULT v12; // eax
  int ActivationFactory; // eax
  __int64 v14; // rsi
  __int64 v15; // rbx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 result; // rax
  int v21[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-A0h]
  __int64 v25; // [rsp+40h] [rbp-98h]
  char v26; // [rsp+48h] [rbp-90h]
  __int64 v27; // [rsp+50h] [rbp-88h]
  __int128 v28; // [rsp+60h] [rbp-78h] BYREF
  int v29; // [rsp+70h] [rbp-68h]
  __int64 v30; // [rsp+80h] [rbp-58h]
  __int64 v31; // [rsp+88h] [rbp-50h]
  __int64 v32; // [rsp+90h] [rbp-48h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-40h] BYREF
  HSTRING string; // [rsp+B0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v30 = -2LL;
  try
  {
    v28 = *(_OWORD *)a2;
    v3 = *((_DWORD *)a2 + 4);
    v4 = a2 + 24;
    v5 = *((_QWORD *)a2 + 3);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)a2 + 3));
    v23 = v5;
    v6 = v4[1];
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(v4[1]);
    v24 = v6;
    v25 = v4[2];
    v4[2] = 0LL;
    v26 = *((_BYTE *)v4 + 24);
    *((_BYTE *)v4 + 24) = 0;
    v7 = v4[2];
    if ( v7 )
    {
      v4[2] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = v4[1];
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( *v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
    operator delete(a2);
    v9 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v10 = Windows::UI::Xaml::ApplicationInitializationCallback::ApplicationInitializationCallback__lambda_48eef4ac22d2d23d7627f0d26dc0219c___(v9);
    v11 = v10;
    v22 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v31 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *(_QWORD *)v21 = 0LL;
    string = 0LL;
    v12 = WindowsCreateStringReference(L"Windows.UI.Xaml.Application", 0x1Bu, &hstringHeader, &string);
    if ( v12 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
    ActivationFactory = RoGetActivationFactory(string, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v21);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
        (const char *)(unsigned int)ActivationFactory);
    v14 = *(_QWORD *)v21;
    if ( *(_QWORD *)v21 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v21 + 8LL))(*(_QWORD *)v21);
    v32 = v14;
    v15 = 0LL;
    v22 = 0LL;
    if ( v14 )
    {
      v16 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v14)(
              v14,
              &_uuidof__AUIFrameworkApplicationStaticsPrivate_Xaml_UI_Windows__,
              &v22);
      if ( v16 < 0 )
        __abi_WinRTraiseException(v16);
      v15 = v22;
    }
    v27 = v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v27 = v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v29 = v3;
    v17 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v15 + 48LL))(v15, &v28, v11);
    if ( v17 < 0 )
      __abi_WinRTraiseException(v17);
    v26 = 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v18 = *(_QWORD *)v21;
    if ( *(_QWORD *)v21 )
    {
      *(_QWORD *)v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v26 )
    {
      v26 = 0;
      lambda_d1cc878f49256a12ed651bb70f914db7_::operator()(&v23);
    }
    v19 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    result = 0LL;
  }
  catch ( ... )
  {
    return 0xFFFFFFFFLL;
  }
  return result;
}
