/*
 * XREFs of _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4b7ea3d11b6265e9fdfb78b2e903649a___::Run_::_1_::dtor$0 @ 0x1801EA209
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4b7ea3d11b6265e9fdfb78b2e903649a___::Run_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::~com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
