/*
 * XREFs of ??$CreateAgileHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1800016A4
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1800012F8 (-Add@-$AgileEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOpt.c)
 * Callees:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_02a86428158461f4dc557e8a6d2b58da___1_IInspectable_____ptr64_IInspectable_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_02a86428158461f4dc557e8a6d2b58da___1_IInspectable_____ptr64_IInspectable_____ptr64_ @ 0x18000179C (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEventHandler_impl.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180003D04 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F60 (-InternalRelease@-$ComPtr@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800070E4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<IInspectable *>>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  int AgileReference; // ebx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  void *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v16; // [rsp+40h] [rbp+20h] BYREF
  _QWORD *v17; // [rsp+48h] [rbp+28h] BYREF

  *a2 = 0LL;
  v16 = 0LL;
  v17 = &v16;
  v4 = (_QWORD *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v17);
  AgileReference = 0;
  v6 = v4;
  v7 = *v4;
  if ( a1 )
  {
    if ( v7 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    AgileReference = RoGetAgileReference(0LL, &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b, a1, v6);
LABEL_5:
    if ( AgileReference < 0 )
      goto LABEL_13;
    goto LABEL_6;
  }
  *v4 = 0LL;
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    goto LABEL_5;
  }
LABEL_6:
  v8 = v16;
  v16 = 0LL;
  v9 = 0LL;
  v17 = v8;
  v10 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = 0LL;
  v12 = 0LL;
  if ( v10 )
  {
    v13 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::___IInspectable_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_02a86428158461f4dc557e8a6d2b58da___1_IInspectable_____ptr64_IInspectable_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_02a86428158461f4dc557e8a6d2b58da___1_IInspectable_____ptr64_IInspectable_____ptr64_(
            v10,
            &v17);
    v8 = v17;
    v9 = (_QWORD *)v13;
    v11 = v13;
    v12 = v13;
  }
  v17 = v9;
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    v11 = v12;
  }
  if ( v11 )
  {
    v17 = 0LL;
    AgileReference = 0;
    *a2 = v9;
  }
  else
  {
    AgileReference = -2147024882;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v17);
LABEL_13:
  v14 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
  }
  return (unsigned int)AgileReference;
}
