/*
 * XREFs of ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x1801365DC
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_f5c3a3508d94124ca65af9e8c1942170___ @ 0x1801363C0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_f5c3a3508d94124ca65af9e8c1942170___.c)
 *     _lambda_903271a3a8fd35b15ad2f56780cfef6a_::__lambda_903271a3a8fd35b15ad2f56780cfef6a_ @ 0x180136588 (_lambda_903271a3a8fd35b15ad2f56780cfef6a_--__lambda_903271a3a8fd35b15ad2f56780cfef6a_.c)
 *     _lambda_f5c3a3508d94124ca65af9e8c1942170_::__lambda_f5c3a3508d94124ca65af9e8c1942170_ @ 0x1801365BC (_lambda_f5c3a3508d94124ca65af9e8c1942170_--__lambda_f5c3a3508d94124ca65af9e8c1942170_.c)
 *     ??_G?$CTaskWrapper@V_lambda_903271a3a8fd35b15ad2f56780cfef6a_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801369B0 (--_G-$CTaskWrapper@V_lambda_903271a3a8fd35b15ad2f56780cfef6a_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180137C00 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     _CFrameApplicationPresentation::UnpresentWindow_::_1_::dtor$0 @ 0x180137D11 (_CFrameApplicationPresentation--UnpresentWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010008 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow(
        CFramePresentationTelemetry::UnpresentWindow *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
