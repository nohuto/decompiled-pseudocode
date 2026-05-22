/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800367BC
 * Callers:
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$2 @ 0x1800CFA8F (_SpectrumListener--SpectrumListener_--_1_--dtor$2.c)
 *     _GetPropertyValue_unsigned___int64__::_1_::dtor$4 @ 0x1800D1758 (_GetPropertyValue_unsigned___int64__--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
