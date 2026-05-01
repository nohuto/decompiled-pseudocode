/*
 * XREFs of Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_580d0bd5d4367160b721ed6c73d01f7d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs_____ptr64___ @ 0x1801BAF94
 * Callers:
 *     ?RaiseEvent@AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@UEAAXXZ @ 0x1801BC260 (-RaiseEvent@AsyncEventWorkItem@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holog.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800541E8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801E6048 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_580d0bd5d4367160b721ed6c73d01f7d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs_____ptr64___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  volatile int *v5; // rdx
  Microsoft::WRL::Details::EventTargetArray *v6; // rbx
  _QWORD *i; // r14
  __int64 v8; // rcx
  int v9; // eax
  int v10; // esi
  Microsoft::WRL::Details::EventTargetArray *(__fastcall *v11)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *); // rax
  __int64 (*v12)(); // rax
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v15; // [rsp+68h] [rbp+20h] BYREF

  v14[1] = -2LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v15, a2);
  v6 = v15;
  for ( i = (_QWORD *)*((_QWORD *)v15 + 2); i != *((_QWORD **)v6 + 3); ++i )
  {
    v14[0] = *i;
    v8 = *(_QWORD *)(a1 + 136);
    if ( !v8 )
      __fastfail(7u);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 16LL))(v8, v14);
    v10 = v9;
    if ( v9 < 0 )
    {
      RoTransformError((unsigned int)v9, 0LL, 0LL);
      if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 )
        Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
          a3,
          *i);
    }
  }
  if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference(
                        (Microsoft::WRL::Details::EventTargetArray *)((char *)v6 + 12),
                        v5) )
  {
    v11 = *(Microsoft::WRL::Details::EventTargetArray *(__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *))(*(_QWORD *)v6 + 24LL);
    if ( v11 == Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
      Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(v6, (const struct std::nothrow_t *)1);
    else
      v11(v6, (const struct std::nothrow_t *)1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v12 = *(__int64 (**)())(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( v12 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
      else
        ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *, __int64 (*)()))v12)(
          Microsoft::WRL::Details::ModuleBase::module_,
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount);
    }
  }
  return 0LL;
}
