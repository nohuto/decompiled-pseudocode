/*
 * XREFs of ?add_SwitchItemCollectionChanged@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18015FAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPrepareForInitialPresentationEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPrepareForInitialPresentationEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18005D384 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wi.c)
 *     ??$MakeMarshallingEventHandlerWrapper@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@V?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJPEAU?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@V?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18015F5C0 (--$MakeMarshallingEventHandlerWrapper@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@PEAPEAU345@@Z @ 0x18015F9C8 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase::add_SwitchItemCollectionChanged(
        __int64 a1,
        volatile signed __int32 *a2,
        struct IUnknown **a3)
{
  volatile signed __int32 *v6; // rdi
  int v7; // eax
  int v8; // ebx
  volatile signed __int32 *v9; // rcx
  struct IUnknown *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  volatile signed __int32 *v13; // [rsp+50h] [rbp+20h] BYREF
  struct IUnknown *v14; // [rsp+58h] [rbp+28h] BYREF

  v6 = a2;
  v13 = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = v13;
  }
  if ( *(_BYTE *)(a1 + 56) )
  {
    v7 = MakeMarshallingEventHandlerWrapper<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs *>>>>(
           (void *)a2,
           &v13);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x37,
        (__int64)"internal\\shellcommoncomposable\\inc\\SwitchItemDataSourceBase.h",
        (const char *)(unsigned int)v7);
      v9 = v13;
      if ( v13 )
        goto LABEL_17;
      return (unsigned int)v8;
    }
    v6 = v13;
  }
  if ( !v6 )
    return (unsigned int)-2147024809;
  v14 = 0LL;
  v8 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs *>>(
         (__int64)v6,
         &v14);
  if ( v8 >= 0 )
  {
    if ( !v14 )
    {
      v8 = -2147024809;
      goto LABEL_16;
    }
    v8 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPrepareForInitialPresentationEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
           a1 + 32,
           v14,
           *(void **)(*(_QWORD *)v6 + 24LL),
           a3);
  }
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
  }
LABEL_16:
  v9 = v13;
  if ( v13 )
  {
LABEL_17:
    v13 = 0LL;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v8;
}
