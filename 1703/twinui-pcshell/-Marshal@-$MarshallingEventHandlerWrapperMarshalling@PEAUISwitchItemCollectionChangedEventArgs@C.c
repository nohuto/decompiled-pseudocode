/*
 * XREFs of ?Marshal@?$MarshallingEventHandlerWrapperMarshalling@PEAUISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@X@@SA?AV?$ComPtr@UISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@PEAUISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18015F298
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_81861dd8cb8471af9a7f1ca79337880d__2__1_::Invoke @ 0x18015F2D0 (Microsoft--WRL--Details--InvokeHelper_Microsoft--WRL--Implements_Microsoft--WRL--Ru_ea_18015F2D0.c)
 *     Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_65d205de72712ec95d83c1b5e9d87c76__2__1_::Invoke @ 0x180164ED0 (Microsoft--WRL--Details--InvokeHelper_Microsoft--WRL--Implements_Microsoft--WRL--Ru_ea_180164ED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall MarshallingEventHandlerWrapperMarshalling<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs *,void>::Marshal(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
