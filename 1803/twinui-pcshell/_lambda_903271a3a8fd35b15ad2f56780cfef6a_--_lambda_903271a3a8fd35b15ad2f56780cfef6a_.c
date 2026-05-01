/*
 * XREFs of _lambda_903271a3a8fd35b15ad2f56780cfef6a_::_lambda_903271a3a8fd35b15ad2f56780cfef6a_ @ 0x1801364E8
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_f5c3a3508d94124ca65af9e8c1942170___ @ 0x1801363C0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_f5c3a3508d94124ca65af9e8c1942170___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800F6660 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_1800F6660.c)
 */

__int64 *__fastcall lambda_903271a3a8fd35b15ad2f56780cfef6a_::_lambda_903271a3a8fd35b15ad2f56780cfef6a_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1);
  a1[1] = a3;
  a1[2] = *a4;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1 + 2);
  a1[3] = a4[1];
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 4),
    a4 + 2);
  a1[4] = (__int64)&CFramePresentationTelemetry::UnpresentWindow::`vftable';
  return a1;
}
