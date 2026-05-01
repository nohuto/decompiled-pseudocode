/*
 * XREFs of _lambda_2e7b32d2edc288bf881b316e628c52db_::operator() @ 0x18003D170
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_2e7b32d2edc288bf881b316e628c52db__&___ptr64_1__1_::Invoke @ 0x180045050 (Microsoft--WRL--Details--InvokeHelper_IAsyncCallback__lambda_2e7b32d2edc288bf881b316e628c52db__-.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z @ 0x18003C58C (-SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z.c)
 *     ?SetOriginatingActivationPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@0@Z @ 0x18003C780 (-SetOriginatingActivationPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Col.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x18003C980 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x18003F7A8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043D94 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_f24a32e966739c7793173c20b5df6bb6__&___ptr64_ @ 0x180043E3C (Microsoft--WRL--Callback_IAsyncCallback__lambda_f24a32e966739c7793173c20b5df6bb6__-___ptr64_.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_2e7b32d2edc288bf881b316e628c52db_::operator()(__int64 a1)
{
  HWND v2; // r12
  int v3; // esi
  HWND v4; // r15
  HRESULT v5; // eax
  HRESULT v6; // eax
  struct Windows::Foundation::Collections::IPropertySet *v7; // r8
  struct Windows::Foundation::Collections::IPropertySet *v8; // rcx
  HWND v9; // rcx
  HWND v10; // rbx
  struct Windows::Foundation::Collections::IPropertySet *v11; // rdi
  Windows::Internal::Shell::Holographic *v12; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v13; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v14; // rcx
  char v16; // [rsp+30h] [rbp-71h]
  HWND v17; // [rsp+68h] [rbp-39h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v18; // [rsp+70h] [rbp-31h] BYREF
  Windows::Internal::Shell::Holographic *v19; // [rsp+78h] [rbp-29h] BYREF
  int v20; // [rsp+80h] [rbp-21h] BYREF
  unsigned int v21; // [rsp+84h] [rbp-1Dh] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v22; // [rsp+88h] [rbp-19h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v23; // [rsp+90h] [rbp-11h] BYREF
  _QWORD v24[2]; // [rsp+98h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp+7h] BYREF
  HSTRING string; // [rsp+C0h] [rbp+1Fh] BYREF

  v24[1] = -2LL;
  v23 = 0LL;
  v2 = 0LL;
  v17 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(**(_QWORD **)(a1 + 8) + 48LL))(
         *(_QWORD *)(a1 + 8),
         &v23);
  if ( v3 >= 0 )
  {
    v3 = WindowFromViewWrapper(v23, &v17);
    v2 = v17;
  }
  v22 = 0LL;
  v4 = 0LL;
  v17 = 0LL;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(**(_QWORD **)(a1 + 8) + 56LL))(
           *(_QWORD *)(a1 + 8),
           &v22);
    if ( v3 >= 0 )
    {
      v3 = WindowFromViewWrapper(v22, &v17);
      v4 = v17;
    }
  }
  v21 = 0;
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8), &v21);
  v20 = 0;
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 8) + 72LL))(*(_QWORD *)(a1 + 8), &v20);
  v24[0] = 0LL;
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 8) + 80LL))(*(_QWORD *)(a1 + 8), v24);
  v19 = 0LL;
  if ( v3 < 0 )
    goto LABEL_38;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    __debugbreak();
  }
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         string,
         &v19);
  if ( v3 < 0 )
    goto LABEL_38;
  v17 = (HWND)v19;
  if ( v19 )
    (*(void (__fastcall **)(Windows::Internal::Shell::Holographic *))(*(_QWORD *)v19 + 8LL))(v19);
  string = 0LL;
  v6 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &hstringHeader, &string);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v3 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
         string,
         0);
  if ( v17 )
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v3 < 0 )
    goto LABEL_38;
  v17 = 0LL;
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, HWND *))(a1 + 8))(
         *(_QWORD *)(a1 + 8),
         &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
         &v17);
  if ( v3 >= 0 )
  {
    v18 = 0LL;
    v3 = (*(__int64 (__fastcall **)(HWND, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v17 + 56LL))(
           v17,
           &v18);
    v8 = v18;
    if ( v3 >= 0 && v18 )
    {
      v3 = Windows::Internal::Shell::Holographic::SetOriginatingActivationPropertySet(v19, v18, v7);
      v8 = v18;
    }
    if ( v8 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  v9 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v3 < 0 )
  {
LABEL_38:
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 88LL))(*(_QWORD *)(a1 + 8), (unsigned int)v3);
  }
  else
  {
    v10 = *(HWND *)(a1 + 8);
    v17 = v10;
    if ( v10 )
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v10 + 8LL))(v10);
    Microsoft::WRL::Callback_IAsyncCallback__lambda_f24a32e966739c7793173c20b5df6bb6______ptr64_(&v18, &v17);
    v11 = v18;
    v16 = 0;
    v3 = CAppViewManager::_ShowViewAsyncWorker(*(_QWORD *)a1, v2, v4, v21, v20, v16, 0, 0, 0, v24[0], v19, v18, v17);
    if ( v11 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v10 )
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v12 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(Windows::Internal::Shell::Holographic *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v3;
}
