/*
 * XREFs of _lambda_f5c3a3508d94124ca65af9e8c1942170_::__lambda_f5c3a3508d94124ca65af9e8c1942170_ @ 0x1801365BC
 * Callers:
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_f5c3a3508d94124ca65af9e8c1942170____::_1_::dtor$0 @ 0x1801364C1 (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_f5c3a3508d94124ca65af9e8c1942170____--_1.c)
 * Callees:
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x1801365DC (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_f5c3a3508d94124ca65af9e8c1942170_::__lambda_f5c3a3508d94124ca65af9e8c1942170_(__int64 *a1)
{
  CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow((CFramePresentationTelemetry::UnpresentWindow *)(a1 + 2));
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
