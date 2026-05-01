/*
 * XREFs of ??1?$ComPtr@V?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FAD50
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     _ViewEventDispatcher::_RemoveValidView_::_1_::dtor$0 @ 0x1800B29AC (_ViewEventDispatcher--_RemoveValidView_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::_CreatePerApplicationData_::_1_::dtor$0 @ 0x1800B29B8 (_ViewEventDispatcher--_CreatePerApplicationData_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::_AddValidView_::_1_::dtor$0 @ 0x1800B29C4 (_ViewEventDispatcher--_AddValidView_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$224 @ 0x1800B30BD (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$224.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>::~ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>(
        void **a1)
{
  return Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>::InternalRelease(a1);
}
