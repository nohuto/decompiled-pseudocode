/*
 * XREFs of ?raise@EvaluateItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAUISwitchItemDataView@34567@PE$AAUIEvaluateItemEventArgs@34567@@Z @ 0x180135EB0
 * Callers:
 *     <none>
 * Callees:
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IEvaluateItemEventArgs_____ptr64___lambda_7a0b87a188e4e8316e3fbac9b291e873___ @ 0x180135D14 (Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_WindowsInternal--Comp.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::EvaluateItem::raise(
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
  Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IEvaluateItemEventArgs_____ptr64___lambda_7a0b87a188e4e8316e3fbac9b291e873___(
    (Platform::Details **)(a1 + 64),
    (void *)(a1 + 136),
    (struct Platform::Details::EventLock *)v6);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
}
