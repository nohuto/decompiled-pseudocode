/*
 * XREFs of _ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor$12 @ 0x180097BCD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  return ObjectArrayAdapter<IApplicationViewChangeListener>::~ObjectArrayAdapter<IApplicationViewChangeListener>(a2 + 56);
}
