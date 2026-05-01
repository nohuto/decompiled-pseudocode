/*
 * XREFs of Microsoft::WRL::Callback_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539__&___ptr64_ @ 0x18009D148
 * Callers:
 *     ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x180125720 (-WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539__&___ptr64__1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539__&___ptr64__1_long_ @ 0x18009D5E0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18009D5E0.c)
 */

__int64 *__fastcall Microsoft::WRL::Callback_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539______ptr64_(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 *result; // rax

  v4 = 0LL;
  v5 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539______ptr64__1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539______ptr64__1_long_(
           v5,
           a2);
  result = a1;
  *a1 = v4;
  return result;
}
