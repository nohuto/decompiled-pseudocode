/*
 * XREFs of Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_1236e2c0be9b000750d1b0bdd8ae8f82__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_ @ 0x1801E3BEC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_10764c1d64f4a25c831c35f7f52c83d4___::Run @ 0x18008B730 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_10764c1d64f4a25c831c35f7f52c83d4___--Run.c)
 *     Microsoft::WRL::EventSource_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_1236e2c0be9b000750d1b0bdd8ae8f82___ @ 0x180091860 (Microsoft--WRL--EventSource_Windows--Internal--Shell--Popups--IPopupPropertyChangedEventHandler_.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800541E8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801E6048 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_1236e2c0be9b000750d1b0bdd8ae8f82__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_(
        unsigned int *a1,
        __int64 a2,
        __int64 a3)
{
  volatile int *v5; // rdx
  Microsoft::WRL::Details::EventTargetArray *v6; // rbx
  _QWORD *i; // rsi
  int v8; // eax
  int v9; // ebp
  Microsoft::WRL::Details::EventTargetArray *(__fastcall *v10)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *); // rax
  __int64 (*v11)(); // rax
  Microsoft::WRL::Details::EventTargetArray *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v13, a2);
  v6 = v13;
  for ( i = (_QWORD *)*((_QWORD *)v13 + 2); i != *((_QWORD **)v6 + 3); ++i )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, *a1);
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
