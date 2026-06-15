/*
 * XREFs of _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::dtor$1 @ 0x1800AF546
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcessSubmixManager::GetAppSubmixClientContext_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_ptr<CApplicationSubmix>::~unique_ptr<CApplicationSubmix>((CApplicationSubmix **)(a2 + 56));
}
