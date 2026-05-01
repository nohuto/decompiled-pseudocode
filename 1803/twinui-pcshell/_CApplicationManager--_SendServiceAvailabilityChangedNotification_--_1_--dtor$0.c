/*
 * XREFs of _CApplicationManager::_SendServiceAvailabilityChangedNotification_::_1_::dtor$0 @ 0x1800F0B3F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CApplicationManager::_SendServiceAvailabilityChangedNotification_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return ObjectArrayAdapter<IApplicationViewChangeListener>::~ObjectArrayAdapter<IApplicationViewChangeListener>((void **)(a2 + 144));
}
