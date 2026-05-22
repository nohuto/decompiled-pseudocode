/*
 * XREFs of ??1?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@XZ @ 0x1800B8058
 * Callers:
 *     _ButtonRecognizer::IsComboButtonCandidate_::_1_::dtor$0 @ 0x1800E969A (_ButtonRecognizer--IsComboButtonCandidate_--_1_--dtor$0.c)
 *     _ButtonRecognizer::RegisterComboButton_::_1_::dtor$0 @ 0x1800E96A6 (_ButtonRecognizer--RegisterComboButton_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<enum _Button>::~vector<enum _Button>(unsigned __int64 *a1)
{
  std::vector<enum _Button>::_Tidy(a1);
}
