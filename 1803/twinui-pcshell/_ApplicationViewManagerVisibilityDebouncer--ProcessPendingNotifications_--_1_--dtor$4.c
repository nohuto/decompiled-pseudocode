/*
 * XREFs of _ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor$4 @ 0x180097BD9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return ObjectArrayAdapter<IApplicationViewChangeListener>::~ObjectArrayAdapter<IApplicationViewChangeListener>(a2 + 56);
}
