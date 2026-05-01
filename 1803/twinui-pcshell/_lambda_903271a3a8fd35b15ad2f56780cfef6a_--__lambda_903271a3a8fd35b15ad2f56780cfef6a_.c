/*
 * XREFs of _lambda_903271a3a8fd35b15ad2f56780cfef6a_::__lambda_903271a3a8fd35b15ad2f56780cfef6a_ @ 0x180136588
 * Callers:
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_f5c3a3508d94124ca65af9e8c1942170____::_1_::dtor$2 @ 0x1801364D9 (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_f5c3a3508d94124ca65af9e8c19_ea_1801364D9.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x1801365DC (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_903271a3a8fd35b15ad2f56780cfef6a_::__lambda_903271a3a8fd35b15ad2f56780cfef6a_(__int64 *a1)
{
  CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow((CFramePresentationTelemetry::UnpresentWindow *)(a1 + 4));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(a1);
}
