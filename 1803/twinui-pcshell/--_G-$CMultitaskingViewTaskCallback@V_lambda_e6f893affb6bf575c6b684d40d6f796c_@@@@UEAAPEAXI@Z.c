/*
 * XREFs of ??_G?$CMultitaskingViewTaskCallback@V_lambda_e6f893affb6bf575c6b684d40d6f796c_@@@@UEAAPEAXI@Z @ 0x18026C360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180071D0C (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFtmBase@WR.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     _lambda_e6f893affb6bf575c6b684d40d6f796c_::__lambda_e6f893affb6bf575c6b684d40d6f796c_ @ 0x18026BFB8 (_lambda_e6f893affb6bf575c6b684d40d6f796c_--__lambda_e6f893affb6bf575c6b684d40d6f796c_.c)
 */

_DWORD *__fastcall CMultitaskingViewTaskCallback<_lambda_e6f893affb6bf575c6b684d40d6f796c_>::`scalar deleting destructor'(
        _DWORD *Block,
        char a2)
{
  lambda_e6f893affb6bf575c6b684d40d6f796c_::__lambda_e6f893affb6bf575c6b684d40d6f796c_((__int64)(Block + 12));
  Block[11] = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
