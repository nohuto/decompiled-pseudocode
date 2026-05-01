/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___::CMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___ @ 0x18026F71C
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___ @ 0x18026F66C (MakeMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18026A82C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 */

__int64 __fastcall CMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___::CMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>(a1);
  *(_QWORD *)a1 = off_18033CDB0;
  *(_QWORD *)(a1 + 32) = off_18033CD90;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)(a1 + 56));
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 16);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)(a1 + 64));
  return a1;
}
