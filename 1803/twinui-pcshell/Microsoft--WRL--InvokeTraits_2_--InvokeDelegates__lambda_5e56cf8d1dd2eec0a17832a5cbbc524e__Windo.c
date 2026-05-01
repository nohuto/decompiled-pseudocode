/*
 * XREFs of Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_5e56cf8d1dd2eec0a17832a5cbbc524e__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___ @ 0x18007DF74
 * Callers:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_5e56cf8d1dd2eec0a17832a5cbbc524e___ @ 0x18007DE9C (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18007DE9C.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800541E8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___lambda_ac37171d66894d0304dff38577cb7028___1_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::Invoke @ 0x18007E0B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18007E0B0.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801E6048 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_5e56cf8d1dd2eec0a17832a5cbbc524e__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  volatile int *v5; // rdx
  Microsoft::WRL::Details::EventTargetArray *v6; // rbx
  _QWORD *i; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 (__fastcall *v11)(__int64, __int64, __int64); // rax
  int v12; // eax
  int v13; // edi
  Microsoft::WRL::Details::EventTargetArray *(__fastcall *v14)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *); // rax
  __int64 (*v15)(); // rax
  Microsoft::WRL::Details::EventTargetArray *v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v17, a2);
  v6 = v17;
  for ( i = (_QWORD *)*((_QWORD *)v17 + 2); i != *((_QWORD **)v6 + 3); ++i )
  {
    v8 = (**a1 + 24LL) & -(__int64)(**a1 != 0LL);
    v9 = *i;
    v10 = *a1[1];
    v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)*i + 24LL);
    if ( v11 == Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::___Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___lambda_ac37171d66894d0304dff38577cb7028___1_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::Invoke )
      v12 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::___Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___lambda_ac37171d66894d0304dff38577cb7028___1_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::Invoke(
              v9,
              v8,
              v10);
    else
      v12 = v11(v9, v8, v10);
    v13 = v12;
    if ( v12 < 0 )
    {
      RoTransformError((unsigned int)v12, 0LL, 0LL);
      if ( v13 == -2147417848 || v13 == -2147023174 || v13 == -1996357631 )
        Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
          a3,
          *i);
    }
  }
  if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference(
          (Microsoft::WRL::Details::EventTargetArray *)((char *)v6 + 12),
          v5) )
  {
    v14 = *(Microsoft::WRL::Details::EventTargetArray *(__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *))(*(_QWORD *)v6 + 24LL);
    if ( v14 == Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
      Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(v6, (const struct std::nothrow_t *)1);
    else
      v14(v6, (const struct std::nothrow_t *)1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v15 = *(__int64 (**)())(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( v15 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
      else
        ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *))v15)(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return 0LL;
}
