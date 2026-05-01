/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_65d205de72712ec95d83c1b5e9d87c76__2__1_::Invoke @ 0x180164ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18003A88C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?Marshal@?$MarshallingEventHandlerWrapperMarshalling@PEAUISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@X@@SA?AV?$ComPtr@UISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@PEAUISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18015F298 (-Marshal@-$MarshallingEventHandlerWrapperMarshalling@PEAUISwitchItemCollectionChangedEventArgs@C.c)
 *     ??$MarshallingEventHandlerWrapperHelper@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W4SwitchItemProperty@23456@$$ZV?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@W4723456@@@YAJPEAU?$ITypedEventHandler@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W4SwitchItemProperty@23456@@Foundation@Windows@@PEAUICoreDispatcher@Core@UI@2@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@W4SwitchItemProperty@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180164D08 (--$MarshallingEventHandlerWrapperHelper@PEAUISwitchItem@Common@Multitasking@Experiences@Composab.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_65d205de72712ec95d83c1b5e9d87c76__2__1_::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rbx
  volatile signed __int32 *v5; // rdi
  _QWORD *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v5 = *(volatile signed __int32 **)(a1 + 40);
  v6 = MarshallingEventHandlerWrapperMarshalling<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs *,void>::Marshal(
         &v10,
         a2);
  v7 = ___MarshallingEventHandlerWrapperHelper_PEAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__W4SwitchItemProperty_23456___ZV__ComPtr_UISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___WRL_Microsoft__W4723456___YAJPEAU__ITypedEventHandler_PEAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__W4SwitchItemProperty_23456__Foundation_Windows__PEAUICoreDispatcher_Core_UI_2_V__ComPtr_UISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___WRL_Microsoft__W4SwitchItemProperty_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Z(
         v5,
         v3,
         v6,
         a3);
  v8 = v7;
  if ( v7 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v7);
  return v8;
}
