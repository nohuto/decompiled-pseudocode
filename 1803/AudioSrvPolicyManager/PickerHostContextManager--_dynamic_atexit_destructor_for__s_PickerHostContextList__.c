/*
 * XREFs of PickerHostContextManager::_dynamic_atexit_destructor_for__s_PickerHostContextList__ @ 0x180038500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PickerHostContextManager::_dynamic_atexit_destructor_for__s_PickerHostContextList__()
{
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&PickerHostContextManager::s_PickerHostContextList);
}
