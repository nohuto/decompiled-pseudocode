/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a__&___ptr64__1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a__&___ptr64__1_long_ @ 0x18011D384
 * Callers:
 *     ?SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180125580 (-SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180005638 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a______ptr64__1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a______ptr64__1_long_(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)(a1 + 48));
  *(_QWORD *)a1 = off_180325D88;
  return a1;
}
