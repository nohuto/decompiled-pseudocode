/*
 * XREFs of _ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor$6 @ 0x180097BF1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  return ObjectArrayAdapter<IApplicationViewChangeListener>::Iterator::~Iterator(a2 + 96);
}
