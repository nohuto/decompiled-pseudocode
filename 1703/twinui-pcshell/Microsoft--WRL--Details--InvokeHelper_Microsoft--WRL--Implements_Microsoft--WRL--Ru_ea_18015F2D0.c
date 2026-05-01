/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_81861dd8cb8471af9a7f1ca79337880d__2__1_::Invoke @ 0x18015F2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18003A88C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ??$MarshallingEventHandlerWrapperHelper@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@$$ZV?$ComPtr@UISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@V?$ComPtr@UISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@9Microsoft@@@@YAJPEAU?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@PEAUICoreDispatcher@Core@UI@2@V?$ComPtr@UISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@V?$ComPtr@UISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@78@@Z @ 0x18015F070 (--$MarshallingEventHandlerWrapperHelper@PEAUISwitchItemDataSource@Common@Multitasking@Experience.c)
 *     ?Marshal@?$MarshallingEventHandlerWrapperMarshalling@PEAUISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@X@@SA?AV?$ComPtr@UISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@PEAUISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18015F298 (-Marshal@-$MarshallingEventHandlerWrapperMarshalling@PEAUISwitchItemCollectionChangedEventArgs@C.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_81861dd8cb8471af9a7f1ca79337880d__2__1_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  volatile signed __int32 *v5; // rbp
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v5 = *(volatile signed __int32 **)(a1 + 40);
  v6 = MarshallingEventHandlerWrapperMarshalling<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs *,void>::Marshal(
         &v11,
         a3);
  v7 = MarshallingEventHandlerWrapperMarshalling<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs *,void>::Marshal(
         &v12,
         a2);
  v8 = ___MarshallingEventHandlerWrapperHelper_PEAUISwitchItemDataSource_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PEAUISwitchItemCollectionChangedEventArgs_23456___ZV__ComPtr_UISwitchItemDataSource_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___WRL_Microsoft__V__ComPtr_UISwitchItemCollectionChangedEventArgs_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___9Microsoft____YAJPEAU__ITypedEventHandler_PEAUISwitchItemDataSource_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PEAUISwitchItemCollectionChangedEventArgs_23456__Foundation_Windows__PEAUICoreDispatcher_Core_UI_2_V__ComPtr_UISwitchItemDataSource_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___WRL_Microsoft__V__ComPtr_UISwitchItemCollectionChangedEventArgs_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___78__Z(
         v5,
         v3,
         v7,
         v6);
  v9 = v8;
  if ( v8 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v8);
  return v9;
}
