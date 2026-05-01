/*
 * XREFs of _CApplicationManager::NotifyListenersForSimulatedAppActivation_::_1_::dtor$2 @ 0x180109460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CApplicationManager::NotifyListenersForSimulatedAppActivation_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return ObjectArrayAdapter<IApplicationViewChangeListener>::~ObjectArrayAdapter<IApplicationViewChangeListener>((void **)(a2 + 176));
}
