/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___::operator() @ 0x1800083A0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180084070 (-s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDelayIAMOperations::CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___::operator()(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 (__fastcall *v2)(__int64, _QWORD); // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 24LL);
  if ( v2 == Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_6aced788dff8c658a873d98bde52dc09______ptr64__1_long_::Invoke )
    return Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_6aced788dff8c658a873d98bde52dc09______ptr64__1_long_::Invoke(
             v1,
             0LL);
  if ( v2 == Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_96f3b658638d677fbd8b16fe22f1426c______ptr64__1_long_::Invoke )
    return Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_96f3b658638d677fbd8b16fe22f1426c______ptr64__1_long_::Invoke(
             v1,
             0LL);
  return v2(v1, 0LL);
}
