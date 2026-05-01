/*
 * XREFs of ??1?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FAD78
 * Callers:
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$15 @ 0x1800B3045 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$15.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::~ComPtr<ViewEventArgsForSelectTargetView>(
        ViewEventArgsForSelectTargetView **a1)
{
  return Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::InternalRelease(a1);
}
