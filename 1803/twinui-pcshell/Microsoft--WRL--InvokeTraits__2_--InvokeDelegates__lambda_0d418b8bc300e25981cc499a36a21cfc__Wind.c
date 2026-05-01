/*
 * XREFs of Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___ @ 0x18001B5A0
 * Callers:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_0d418b8bc300e25981cc499a36a21cfc___ @ 0x18003A950 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--Vi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18003AA14 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Inte.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18025257C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___(
        _QWORD **a1,
        volatile int *a2,
        __int64 a3)
{
  unsigned int MatchingRestrictedErrorInfo; // edi
  _QWORD *v6; // rbx
  _QWORD *v7; // r10
  __int64 v8; // r14
  _QWORD *v9; // rsi
  int v10; // eax
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v13; // [rsp+78h] [rbp+20h]

  MatchingRestrictedErrorInfo = 0;
  v6 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(a2);
    v6 = v7;
    v13 = v7;
  }
  v8 = v6[4];
  v9 = (_QWORD *)v6[2];
  while ( v9 != (_QWORD *)v6[3] )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(*v9, **a1, *a1[1]);
    MatchingRestrictedErrorInfo = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 || v10 == -2147418105 || v10 == -2147418094 )
    {
      RoTransformError((unsigned int)v10, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *v9);
      MatchingRestrictedErrorInfo = 0;
LABEL_14:
      v8 += 8LL;
      ++v9;
    }
    else
    {
      if ( v10 >= 0 )
        goto LABEL_14;
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v12 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(MatchingRestrictedErrorInfo, &v12);
        if ( (MatchingRestrictedErrorInfo & 0x80000000) == 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v9, v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        v6 = v13;
        break;
      }
      RoTransformError(MatchingRestrictedErrorInfo, 0LL, 0LL);
      MatchingRestrictedErrorInfo = 0;
      v8 += 8LL;
      ++v9;
    }
  }
  if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v6 + 12), a2) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 24LL))(v6, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return MatchingRestrictedErrorInfo;
}
