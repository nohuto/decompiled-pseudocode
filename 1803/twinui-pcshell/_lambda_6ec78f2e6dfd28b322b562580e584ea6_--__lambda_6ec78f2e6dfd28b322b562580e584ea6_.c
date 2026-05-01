/*
 * XREFs of _lambda_6ec78f2e6dfd28b322b562580e584ea6_::__lambda_6ec78f2e6dfd28b322b562580e584ea6_ @ 0x1801E45B0
 * Callers:
 *     _ViewWrapperBase::_ReconcileSessionIdleTaskCompletion_::_1_::dtor$5 @ 0x1800B45FA (_ViewWrapperBase--_ReconcileSessionIdleTaskCompletion_--_1_--dtor$5.c)
 * Callees:
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801E4688 (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_6ec78f2e6dfd28b322b562580e584ea6_::__lambda_6ec78f2e6dfd28b322b562580e584ea6_(__int64 a1)
{
  ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)(a1 + 16));
  return Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(a1 + 8));
}
