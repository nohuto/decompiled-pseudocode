/*
 * XREFs of _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::dtor$2 @ 0x1800AF552
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcessSubmixManager::GetAppSubmixClientContext_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::unique_ptr<CAppSubmixClient>::~unique_ptr<CAppSubmixClient>((__int64 **)(a2 + 48));
}
