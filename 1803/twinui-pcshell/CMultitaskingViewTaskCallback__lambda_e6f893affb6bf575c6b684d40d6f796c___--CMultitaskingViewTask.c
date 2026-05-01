/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___::CMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___ @ 0x18026BDC8
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___ @ 0x18026BD18 (MakeMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18026A82C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 */

__int64 __fastcall CMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___::CMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>(a1);
  *(_QWORD *)a1 = off_18033C930;
  *(_QWORD *)(a1 + 32) = off_18033C910;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)(a1 + 56));
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 16);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)(a1 + 64));
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 28);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 32);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)(a1 + 80));
  return a1;
}
