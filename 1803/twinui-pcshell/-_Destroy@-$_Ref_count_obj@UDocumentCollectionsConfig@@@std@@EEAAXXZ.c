/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@UDocumentCollectionsConfig@@@std@@EEAAXXZ @ 0x1801AA0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj<DocumentCollectionsConfig>::_Destroy(__int64 a1)
{
  std::vector<std::wstring>::_Tidy(a1 + 24);
}
