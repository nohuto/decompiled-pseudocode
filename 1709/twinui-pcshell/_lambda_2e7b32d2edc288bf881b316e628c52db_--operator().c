/*
 * XREFs of _lambda_2e7b32d2edc288bf881b316e628c52db_::operator() @ 0x18003E2C0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_2e7b32d2edc288bf881b316e628c52db__&___ptr64__1_long_::Invoke @ 0x180046D50 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_180046D50.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z @ 0x18003D68C (-SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z.c)
 *     ?SetOriginatingActivationPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@0@Z @ 0x18003D838 (-SetOriginatingActivationPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Col.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x18003DA38 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x180041168 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_2e7b32d2edc288bf881b316e628c52db_::operator()(__int64 a1)
{
  HWND v2; // r12
  int v3; // edi
  HWND v4; // r15
  HRESULT v5; // eax
  HRESULT v6; // eax
  Windows::Internal::Shell::Holographic *v7; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v8; // r8
  struct Windows::Foundation::Collections::IPropertySet *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  Windows::Internal::Shell::Holographic *v15; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v16; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v17; // rcx
  char v19; // [rsp+30h] [rbp-D8h]
  Windows::Internal::Shell::Holographic *v20; // [rsp+68h] [rbp-A0h] BYREF
  int v21; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v22; // [rsp+74h] [rbp-94h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v23; // [rsp+78h] [rbp-90h] BYREF
  __int64 v24; // [rsp+80h] [rbp-88h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v25; // [rsp+88h] [rbp-80h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v26; // [rsp+90h] [rbp-78h] BYREF
  Windows::Internal::Shell::Holographic *v27; // [rsp+98h] [rbp-70h] BYREF
  HWND v28; // [rsp+A0h] [rbp-68h] BYREF
  HWND v29; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v30[5]; // [rsp+B0h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+D8h] [rbp-30h] BYREF
  HSTRING string; // [rsp+F0h] [rbp-18h] BYREF
  HSTRING_HEADER v33; // [rsp+F8h] [rbp-10h] BYREF
  HSTRING v34; // [rsp+110h] [rbp+8h] BYREF

  v30[1] = -2LL;
  v26 = 0LL;
  v2 = 0LL;
  v28 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(**(_QWORD **)(a1 + 8) + 48LL))(
         *(_QWORD *)(a1 + 8),
         &v26);
  if ( v3 >= 0 )
  {
    v3 = WindowFromViewWrapper(v26, &v28);
    v2 = v28;
  }
  v25 = 0LL;
  v4 = 0LL;
  v29 = 0LL;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(**(_QWORD **)(a1 + 8) + 56LL))(
           *(_QWORD *)(a1 + 8),
           &v25);
    if ( v3 >= 0 )
    {
      v3 = WindowFromViewWrapper(v25, &v29);
      v4 = v29;
    }
  }
  v22 = 0;
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8), &v22);
  v21 = 0;
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 8) + 72LL))(*(_QWORD *)(a1 + 8), &v21);
  v30[0] = 0LL;
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 8) + 80LL))(*(_QWORD *)(a1 + 8), v30);
  v20 = 0LL;
  if ( v3 < 0 )
    goto LABEL_44;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    __debugbreak();
  }
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         string,
         &v20);
  string = 0LL;
  if ( v3 < 0 )
    goto LABEL_44;
  v27 = v20;
  if ( v20 )
    (*(void (__fastcall **)(Windows::Internal::Shell::Holographic *))(*(_QWORD *)v20 + 8LL))(v20);
  v34 = 0LL;
  v6 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &v33, &v34);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v3 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
         v34,
         0);
  v34 = 0LL;
  v7 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(Windows::Internal::Shell::Holographic *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v3 < 0 )
    goto LABEL_44;
  v24 = 0LL;
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 8))(
         *(_QWORD *)(a1 + 8),
         &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
         &v24);
  if ( v3 >= 0 )
  {
    v23 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v24 + 56LL))(
           v24,
           &v23);
    v9 = v23;
    if ( v3 >= 0 && v23 )
    {
      v3 = Windows::Internal::Shell::Holographic::SetOriginatingActivationPropertySet(v20, v23, v8);
      v9 = v23;
    }
    if ( v9 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  v10 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v3 < 0 )
  {
LABEL_44:
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 88LL))(*(_QWORD *)(a1 + 8), (unsigned int)v3);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8);
    v30[2] = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = 0LL;
    v30[3] = 0LL;
    v13 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    if ( v13 )
    {
      *((_DWORD *)v13 + 3) = 1;
      *v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v14[2] = v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      *v14 = off_1801FC630;
      v12 = v14;
    }
    v30[4] = v12;
    v19 = 0;
    v3 = CAppViewManager::_ShowViewAsyncWorker(*(_QWORD *)a1, v2, v4, v22, v21, v19, 0, 0, 0, v30[0], v20, v12);
    if ( v12 )
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(Windows::Internal::Shell::Holographic *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)v3;
}
