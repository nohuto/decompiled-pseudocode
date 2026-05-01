/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_0d418b8bc300e25981cc499a36a21cfc___ @ 0x18003A950
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_33ae1f57d3bf46c1270e08142e9d9c0c___::Run @ 0x18003AED0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_33ae1f57d3bf46c1270e08142e9d9c0c___--Run.c)
 *     ??$InvokeAll@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@4567@@Z @ 0x1800FAC94 (--$InvokeAll@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindow.c)
 * Callees:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___ @ 0x18001B5A0 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Wind.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18025257C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_0d418b8bc300e25981cc499a36a21cfc___(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  RTL_SRWLOCK *v2; // rdi
  volatile int *Ptr; // rbx
  unsigned int v6; // edi
  volatile int *v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 + 1;
  Ptr = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  if ( a1->Ptr )
  {
    Ptr = (volatile int *)a1->Ptr;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(a1->Ptr);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( !Ptr )
    return 0LL;
  v9 = *a2;
  v6 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___(
         (_QWORD **)&v9,
         Ptr,
         (__int64)a1);
  if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(Ptr + 3), v7) )
  {
    (*(void (__fastcall **)(volatile int *, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v6;
}
