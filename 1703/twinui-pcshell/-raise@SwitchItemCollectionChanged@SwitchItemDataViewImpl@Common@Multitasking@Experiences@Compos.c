/*
 * XREFs of ?raise@SwitchItemCollectionChanged@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@ME$AAAXPE$AAUISwitchItemDataSource@34567@PE$AAUISwitchItemCollectionChangedEventArgs@34567@@Z @ 0x1801367F0
 * Callers:
 *     <none>
 * Callees:
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs_____ptr64___lambda_7f10f092c6e62c2be23d008bd0624c31___ @ 0x180136694 (Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_WindowsI_ea_180136694.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::SwitchItemCollectionChanged::raise(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD v6[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v6[0] = a2;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v6[1] = a3;
  Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs_____ptr64___lambda_7f10f092c6e62c2be23d008bd0624c31___(
    (Platform::Details **)(a1 + 48),
    (void *)(a1 + 136),
    (struct Platform::Details::EventLock *)v6);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
}
