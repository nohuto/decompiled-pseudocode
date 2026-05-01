/*
 * XREFs of ?raise@SwitchItemCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@ME$AAAXPE$AAUISwitchItemDataSource@3456@PE$AAUISwitchItemCollectionChangedEventArgs@3456@@Z @ 0x180215F20
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64___lambda_bd641f78481868be629ded61accc2e50___ @ 0x180202DA8 (Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows--Internal--Co.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemCollectionChanged::raise(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8[6]; // [rsp+28h] [rbp-30h] BYREF

  v5 = __abi_winrt_ptr_ctor(a2);
  v6 = __abi_winrt_ptr_ctor(a3);
  v8[0] = __abi_winrt_ptr_ctor(v5);
  v8[1] = __abi_winrt_ptr_ctor(v6);
  Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64___lambda_bd641f78481868be629ded61accc2e50___(
    (Platform::Details **)(a1 + 48),
    (RTL_SRWLOCK *)(a1 + 136),
    v8);
  __abi_winrt_ptr_dtor(v5);
  return __abi_winrt_ptr_dtor(v6);
}
