/*
 * XREFs of __Platform_ReleaseSRWLockShared @ 0x1801E2FB0
 * Callers:
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64___lambda_3b34480ad7d2973204f2b7367543a8f5___ @ 0x180165804 (Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChangedEventHandler_.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_d66e6f301efedd367be46813d365bb79___ @ 0x180165B84 (Platform--EventSource--DoInvokeVoid_Windows--UI--Xaml--Interop--BindableVectorChangedEventHandle.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_1b5508b209f22f7e86a2f99e7c3de27f___ @ 0x18016B0D4 (Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows--Internal--Co.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64___lambda_bd641f78481868be629ded61accc2e50___ @ 0x18016BCE4 (Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows-_ea_18016BCE4.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64___lambda_691217d92eb9936284588ea727e6ccf8___ @ 0x180176C60 (Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChanged_ea_180176C60.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall _Platform_ReleaseSRWLockShared(PSRWLOCK SRWLock)
{
  ReleaseSRWLockShared(SRWLock);
}
