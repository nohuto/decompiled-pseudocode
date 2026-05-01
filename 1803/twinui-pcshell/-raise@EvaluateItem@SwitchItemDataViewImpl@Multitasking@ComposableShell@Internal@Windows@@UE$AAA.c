/*
 * XREFs of ?raise@EvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataView@3456@PE$AAUIEvaluateItemEventArgs@3456@@Z @ 0x180215E60
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_1b5508b209f22f7e86a2f99e7c3de27f___ @ 0x180202F78 (Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows-_ea_180202F78.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::EvaluateItem::raise(
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
  Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_1b5508b209f22f7e86a2f99e7c3de27f___(
    (Platform::Details **)(a1 + 64),
    (RTL_SRWLOCK *)(a1 + 136),
    v8);
  __abi_winrt_ptr_dtor(v5);
  return __abi_winrt_ptr_dtor(v6);
}
