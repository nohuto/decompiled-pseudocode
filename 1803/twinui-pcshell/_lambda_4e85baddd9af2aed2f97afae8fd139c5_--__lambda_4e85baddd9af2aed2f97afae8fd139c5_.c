/*
 * XREFs of _lambda_4e85baddd9af2aed2f97afae8fd139c5_::__lambda_4e85baddd9af2aed2f97afae8fd139c5_ @ 0x1801E4590
 * Callers:
 *     _ViewWrapperBase::_ReconcileSessionIdleTaskCompletion_::_1_::dtor$2 @ 0x1800B45CA (_ViewWrapperBase--_ReconcileSessionIdleTaskCompletion_--_1_--dtor$2.c)
 * Callees:
 *     ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801E4660 (--1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_4e85baddd9af2aed2f97afae8fd139c5_::__lambda_4e85baddd9af2aed2f97afae8fd139c5_(__int64 a1)
{
  ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)(a1 + 32));
  return Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(a1 + 8));
}
