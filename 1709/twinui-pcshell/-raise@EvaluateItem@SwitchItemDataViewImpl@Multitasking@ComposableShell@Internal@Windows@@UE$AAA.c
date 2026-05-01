/*
 * XREFs of ?raise@EvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataView@3456@PE$AAUIEvaluateItemEventArgs@3456@@Z @ 0x18016B250
 * Callers:
 *     <none>
 * Callees:
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_1b5508b209f22f7e86a2f99e7c3de27f___ @ 0x18016B0D4 (Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows--Internal--Co.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::EvaluateItem::raise(
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
  Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_1b5508b209f22f7e86a2f99e7c3de27f___(
    (Platform::Details **)(a1 + 64),
    (RTL_SRWLOCK *)(a1 + 136),
    v6);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
}
