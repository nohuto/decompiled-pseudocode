/*
 * XREFs of Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8f655d1437979cea0f95b51a9e4ac40d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs_____ptr64___ @ 0x18010B514
 * Callers:
 *     ??$InvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJ$$QEAPEAVApplicationViewBackedViewHostItem@@$$QEAPEAVPresentationReadyChangedEventArgs@@@Z @ 0x18010A07C (--$InvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@-$As.c)
 * Callees:
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180061578 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8f655d1437979cea0f95b51a9e4ac40d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs_____ptr64___(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rbx
  struct IUnknown **i; // rdi
  int v7; // eax
  int v8; // esi
  __int64 v10; // [rsp+68h] [rbp+20h]

  v5 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 12));
    v5 = a2;
    v10 = a2;
  }
  for ( i = *(struct IUnknown ***)(v5 + 16); i != *(struct IUnknown ***)(v5 + 24); ++i )
  {
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64))(*i)->lpVtbl[1].QueryInterface)(
           *i,
           **a1,
           (*a1[1] + 56LL) & -(__int64)(*a1[1] != 0LL));
    v8 = v7;
    if ( v7 < 0 )
    {
      RoTransformError((unsigned int)v7, 0LL, 0LL);
      if ( v8 == -2147417848 || v8 == -2147023174 || v8 == -1996357631 )
        Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
          a3,
          *i);
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return 0LL;
}
