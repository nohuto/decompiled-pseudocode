/*
 * XREFs of Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_7d55139ff1ac6b498cb4a2986c1047e6___ @ 0x1802029DC
 * Callers:
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x18020BEF0 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1801FA548 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _lambda_a108a8c11bb5b98786bc6ab4691e60b5_::_lambda_a108a8c11bb5b98786bc6ab4691e60b5_ @ 0x180223388 (_lambda_a108a8c11bb5b98786bc6ab4691e60b5_--_lambda_a108a8c11bb5b98786bc6ab4691e60b5_.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_7d55139ff1ac6b498cb4a2986c1047e6___(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rdi
  __int64 *v5; // rbx
  _QWORD *v7; // [rsp+28h] [rbp-30h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  v7 = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v5 = (__int64 *)lambda_a108a8c11bb5b98786bc6ab4691e60b5_::_lambda_a108a8c11bb5b98786bc6ab4691e60b5_(&v7, a2);
    *v4 = &off_180431D50;
    lambda_a108a8c11bb5b98786bc6ab4691e60b5_::_lambda_a108a8c11bb5b98786bc6ab4691e60b5_(a1 + 6, v5);
    __abi_winrt_ptr_dtor(v5[1]);
    __abi_winrt_ptr_dtor(*v5);
  }
  a1[37] = v4;
  __abi_winrt_ptr_dtor(a2[1]);
  __abi_winrt_ptr_dtor(*a2);
  return a1;
}
