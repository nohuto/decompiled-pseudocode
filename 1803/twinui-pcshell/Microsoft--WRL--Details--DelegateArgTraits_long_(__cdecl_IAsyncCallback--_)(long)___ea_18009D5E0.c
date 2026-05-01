/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539__&___ptr64__1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539__&___ptr64__1_long_ @ 0x18009D5E0
 * Callers:
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539__&___ptr64_ @ 0x18009D148 (Microsoft--WRL--Callback_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539__-___ptr64_.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180005638 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539______ptr64__1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_82653b4bf8fe7eb395fd3d07d923a539______ptr64__1_long_(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)(a1 + 16));
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)a1 = off_18031ECC0;
  return a1;
}
