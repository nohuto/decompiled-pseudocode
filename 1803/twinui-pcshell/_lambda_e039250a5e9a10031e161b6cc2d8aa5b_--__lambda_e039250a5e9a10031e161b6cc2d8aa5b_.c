/*
 * XREFs of _lambda_e039250a5e9a10031e161b6cc2d8aa5b_::__lambda_e039250a5e9a10031e161b6cc2d8aa5b_ @ 0x1800F987C
 * Callers:
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_0d74f069fa796de4b01adcedcd59308d____::_1_::dtor$2 @ 0x1800B14D8 (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_0d74f069fa796de4b01adcedcd5_ea_1800B14D8.c)
 * Callees:
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x1800F621C (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_e039250a5e9a10031e161b6cc2d8aa5b_::__lambda_e039250a5e9a10031e161b6cc2d8aa5b_(__int64 *a1)
{
  CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual((CFramePresentationTelemetry::SetSystemVisual *)(a1 + 4));
  return Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(a1);
}
