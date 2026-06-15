/*
 * XREFs of _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$1 @ 0x1800D6D1D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CAppSubmixClientContext>::~unique_ptr<CAppSubmixClientContext>(
           (CAppSubmixClientContext **)(a2 + 48),
           a2);
}
