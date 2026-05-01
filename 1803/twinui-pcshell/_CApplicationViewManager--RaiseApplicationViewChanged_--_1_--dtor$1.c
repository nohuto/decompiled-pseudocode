/*
 * XREFs of _CApplicationViewManager::RaiseApplicationViewChanged_::_1_::dtor$1 @ 0x1800B26EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CApplicationViewManager::RaiseApplicationViewChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ObjectArrayAdapter<IApplicationViewChangeListener>::~ObjectArrayAdapter<IApplicationViewChangeListener>((void **)(a2 + 152));
}
