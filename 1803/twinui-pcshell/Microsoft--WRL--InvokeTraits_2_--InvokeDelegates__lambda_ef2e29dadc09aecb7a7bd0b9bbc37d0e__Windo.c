/*
 * XREFs of Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty___ @ 0x180261840
 * Callers:
 *     ?ViewVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIApplicationView@@@Z @ 0x18008A8E0 (-ViewVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIApplicationView@@@Z.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e___ @ 0x1800FB0D4 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Internal--Composabl.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800541E8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801E6048 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty___(
        __int64 a1,
        __int64 a2,
        RTL_SRWLOCK *a3)
{
  volatile int *v5; // rdx
  Microsoft::WRL::Details::EventTargetArray *v6; // rbx
  struct IUnknown **i; // rdi
  int v8; // eax
  int v9; // esi
  Microsoft::WRL::Details::EventTargetArray *(__fastcall *v10)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *); // rax
  __int64 (*v11)(); // rax
  Microsoft::WRL::Details::EventTargetArray *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v13, a2);
  v6 = v13;
  for ( i = (struct IUnknown **)*((_QWORD *)v13 + 2); i != *((struct IUnknown ***)v6 + 3); ++i )
  {
    v8 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))(*i)->lpVtbl[1].QueryInterface)(
           *i,
           **(_QWORD **)a1,
           **(unsigned int **)(a1 + 8));
    v9 = v8;
    if ( v8 < 0 )
    {
      RoTransformError((unsigned int)v8, 0LL, 0LL);
      if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -1996357631 )
        Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
          a3,
          *i);
    }
  }
  if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference(
                        (Microsoft::WRL::Details::EventTargetArray *)((char *)v6 + 12),
                        v5) )
  {
    v10 = *(Microsoft::WRL::Details::EventTargetArray *(__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *))(*(_QWORD *)v6 + 24LL);
    if ( v10 == Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
      Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(v6, (const struct std::nothrow_t *)1);
    else
      v10(v6, (const struct std::nothrow_t *)1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v11 = *(__int64 (**)())(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( v11 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
      else
        ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *))v11)(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return 0LL;
}
