/*
 * XREFs of Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6fa41624ad117cbea5b5b5fb1da71b97__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen_____ptr64_IInspectable_____ptr64___ @ 0x1801380B4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___::Run @ 0x1800548F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___--Run.c)
 *     _lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator() @ 0x18008AB9C (_lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800541E8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801E6048 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6fa41624ad117cbea5b5b5fb1da71b97__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen_____ptr64_IInspectable_____ptr64___(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  int MatchingRestrictedErrorInfo; // edi
  volatile int *v6; // rdx
  Microsoft::WRL::Details::EventTargetArray *v7; // rbx
  Microsoft::WRL::Details::EventTargetArray **v8; // r14
  _QWORD *i; // rsi
  unsigned int v10; // eax
  Microsoft::WRL::Details::EventTargetArray *(__fastcall *v11)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *); // rax
  void (*v12)(void); // rax
  Microsoft::WRL::Details::EventTargetArray *v14[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v14[2] = (Microsoft::WRL::Details::EventTargetArray *)-2LL;
  MatchingRestrictedErrorInfo = 0;
  v14[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)v14, a2);
  v7 = v14[0];
  v8 = (Microsoft::WRL::Details::EventTargetArray **)*((_QWORD *)v14[0] + 4);
  for ( i = (_QWORD *)*((_QWORD *)v14[0] + 2); i != *((_QWORD **)v7 + 3); ++i )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, **a1, *a1[1]);
    MatchingRestrictedErrorInfo = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 || v10 == -2147418105 || v10 == -2147418094 )
    {
      RoTransformError(v10, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        a3,
        *i);
      MatchingRestrictedErrorInfo = 0;
    }
    if ( MatchingRestrictedErrorInfo < 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v14[1] = *v8;
        v15 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo((unsigned int)MatchingRestrictedErrorInfo, &v15);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v15);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
        v7 = v14[0];
        break;
      }
      RoTransformError((unsigned int)MatchingRestrictedErrorInfo, 0LL, 0LL);
      MatchingRestrictedErrorInfo = 0;
    }
    ++v8;
  }
  if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference(
                        (Microsoft::WRL::Details::EventTargetArray *)((char *)v7 + 12),
                        v6) )
  {
    v11 = *(Microsoft::WRL::Details::EventTargetArray *(__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *))(*(_QWORD *)v7 + 24LL);
    if ( v11 == Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
      Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(v7, (const struct std::nothrow_t *)1);
    else
      v11(v7, (const struct std::nothrow_t *)1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v12 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( (char *)v12 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
      else
        v12();
    }
  }
  return (unsigned int)MatchingRestrictedErrorInfo;
}
