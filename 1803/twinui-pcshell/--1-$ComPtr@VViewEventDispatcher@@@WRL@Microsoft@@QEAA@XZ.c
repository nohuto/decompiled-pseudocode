/*
 * XREFs of ??1?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FAB4C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ViewEventDispatcher_IUnknown__::_1_::dtor$2 @ 0x1801C71DA (_Microsoft--WRL--Details--MakeAndInitialize_ViewEventDispatcher_IUnknown__--_1_--dtor$2.c)
 *     __lambda_c3441874af9188b8377da12ab0198c01_::operator()_::_1_::dtor$0 @ 0x1801C97A0 (__lambda_c3441874af9188b8377da12ab0198c01_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventDispatcher>::~ComPtr<ViewEventDispatcher>(
        __int64 *a1,
        volatile int *a2)
{
  return Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease(a1, a2);
}
