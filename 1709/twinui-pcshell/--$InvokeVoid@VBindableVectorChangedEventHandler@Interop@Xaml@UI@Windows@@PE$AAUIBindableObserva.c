/*
 * XREFs of ??$InvokeVoid@VBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@PE$AAUIBindableObservableVector@2345@PE$AAVObject@Platform@@@EventSource@Platform@@QEAAXPEAUEventLock@Details@1@PE$AAUIBindableObservableVector@Interop@Xaml@UI@Windows@@PE$AAVObject@1@@Z @ 0x180165D00
 * Callers:
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x180165DE8 (-Notify@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x180174EF0 (-Notify@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 * Callees:
 *     Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_d66e6f301efedd367be46813d365bb79___ @ 0x180165B84 (Platform--EventSource--DoInvokeVoid_Windows--UI--Xaml--Interop--BindableVectorChangedEventHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Platform::EventSource::InvokeVoid<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler,Windows::UI::Xaml::Interop::IBindableObservableVector __gc *,Platform::Object __gc *>(
        Platform::Details **a1,
        RTL_SRWLOCK *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v8[0] = a3;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  v8[1] = a4;
  Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_d66e6f301efedd367be46813d365bb79___(
    a1,
    a2,
    v8);
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
}
