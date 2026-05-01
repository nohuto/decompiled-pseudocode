/*
 * XREFs of ??1Iterator@?$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@QEAA@XZ @ 0x180097DB0
 * Callers:
 *     _ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor$5 @ 0x180097BE5 (_ApplicationViewManagerVisibilityDebouncer--ProcessPendingNotifications_--_1_--dtor$5.c)
 *     _ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor$6 @ 0x180097BF1 (_ApplicationViewManagerVisibilityDebouncer--ProcessPendingNotifications_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ObjectArrayAdapter<IApplicationViewChangeListener>::Iterator::~Iterator(__int64 a1)
{
  return Microsoft::WRL::ComPtr<IApplicationViewChangeListener>::InternalRelease((__int64 *)(a1 + 8));
}
