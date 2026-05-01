/*
 * XREFs of ??1?$ComPtr@VViewEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FAE30
 * Callers:
 *     _ViewEventDispatcher::_RaiseViewEventWithPropertySet_::_1_::dtor$1 @ 0x1800B2A00 (_ViewEventDispatcher--_RaiseViewEventWithPropertySet_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$27 @ 0x1800B2BD4 (_ViewEventDispatcher--_HandleWindowCreatedForExistingView_--_1_--dtor$27.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$231 @ 0x1800B30ED (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$231.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgs>::~ComPtr<ViewEventArgs>(
        volatile signed __int64 **a1,
        volatile int *a2)
{
  return Microsoft::WRL::ComPtr<ViewEventArgs>::InternalRelease(a1, a2);
}
