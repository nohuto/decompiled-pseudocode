/*
 * XREFs of ??1ComboButtonRegistration@@QEAA@XZ @ 0x1800B7020
 * Callers:
 *     _ButtonRecognizer::RegisterComboButton_::_1_::dtor$1 @ 0x1800E96B2 (_ButtonRecognizer--RegisterComboButton_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ComboButtonRegistration::~ComboButtonRegistration(ComboButtonRegistration *this)
{
  std::vector<enum _Button>::_Tidy((unsigned __int64 *)this + 1);
}
