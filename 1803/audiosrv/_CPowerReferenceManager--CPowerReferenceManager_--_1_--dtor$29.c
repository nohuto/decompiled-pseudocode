/*
 * XREFs of _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$29 @ 0x1800699CB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor_29(__int64 a1, __int64 a2)
{
  std::mutex::~mutex(*(_Mtx_t *)(a2 + 104));
}
