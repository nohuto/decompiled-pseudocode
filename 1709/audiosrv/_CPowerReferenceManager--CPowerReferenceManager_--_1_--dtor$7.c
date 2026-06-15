/*
 * XREFs of _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$7 @ 0x180060E85
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  std::recursive_mutex::~recursive_mutex(*(_Mtx_t *)(a2 + 88));
}
