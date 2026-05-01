/*
 * XREFs of ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x180069F70
 * Callers:
 *     ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180069978 (-BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_b923ede267b549ce3e612fdbda9e4264___1_IInspectable_____ptr64_IInspectable_____ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_b923ede267b549ce3e612fdbda9e4264___1_IInspectable_____ptr64_IInspectable_____ptr64_ @ 0x1800717DC (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEventHandler_impl.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008F4A0 (-InternalRelease@-$ComPtr@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180096048 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::EnsureUnboostCallback(CSingleViewShellExperience *this)
{
  char *v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  void (__fastcall *v9)(__int64); // rax
  __int64 *v10; // rdi
  int AgileReference; // eax
  unsigned int v12; // ebx
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16[2]; // [rsp+20h] [rbp-28h] BYREF
  CSingleViewShellExperience *v17; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v1 = (char *)this + 160;
  if ( !*((_QWORD *)this + 20) )
  {
    v3 = *((_QWORD *)this + 12);
    *(_QWORD *)v16 = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v17 = this;
    v4 = 0LL;
    v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = 0LL;
    v7 = 0LL;
    if ( v5 )
    {
      v8 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::___IInspectable_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_b923ede267b549ce3e612fdbda9e4264___1_IInspectable_____ptr64_IInspectable_____ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_b923ede267b549ce3e612fdbda9e4264___1_IInspectable_____ptr64_IInspectable_____ptr64_(
             v5,
             v16);
      v3 = *(_QWORD *)v16;
      v4 = v8;
      v7 = v8;
      v6 = v8;
    }
    v20 = v4;
    if ( v3 )
    {
      v9 = *(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL);
      if ( (char *)v9 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v3);
      else
        v9(v3);
      v6 = v7;
    }
    if ( v6 )
    {
      v19 = v1;
      v10 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v19);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v10);
      AgileReference = RoGetAgileReference(0LL, &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b, v4, v10);
      v12 = AgileReference;
      if ( AgileReference >= 0 )
      {
        v12 = 0;
LABEL_13:
        Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v20);
        return v12;
      }
      v15 = (unsigned int)AgileReference;
      v14 = 1038LL;
    }
    else
    {
      v12 = -2147024882;
      v14 = 1037LL;
      v15 = 2147942414LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v15,
      v16[0]);
    goto LABEL_13;
  }
  return 0LL;
}
