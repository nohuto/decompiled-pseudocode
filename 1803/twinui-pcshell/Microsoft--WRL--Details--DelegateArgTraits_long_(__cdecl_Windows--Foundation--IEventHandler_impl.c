/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_b923ede267b549ce3e612fdbda9e4264___1_IInspectable_____ptr64_IInspectable_____ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_b923ede267b549ce3e612fdbda9e4264___1_IInspectable_____ptr64_IInspectable_____ptr64_ @ 0x1800717DC
 * Callers:
 *     ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x180069F70 (-EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::___IInspectable_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_b923ede267b549ce3e612fdbda9e4264___1_IInspectable_____ptr64_IInspectable_____ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_b923ede267b549ce3e612fdbda9e4264___1_IInspectable_____ptr64_IInspectable_____ptr64_(
        __int64 a1,
        _QWORD *a2)
{
  void (*v4)(void); // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    v4 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
    if ( (char *)v4 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
    else
      v4();
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_QWORD *)(a1 + 16) != a2 )
  {
    *(_QWORD *)(a1 + 16) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = a2[1];
  *(_QWORD *)a1 = off_180319268;
  return a1;
}
