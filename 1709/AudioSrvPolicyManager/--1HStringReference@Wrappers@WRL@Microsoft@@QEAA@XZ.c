/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800213EC
 * Callers:
 *     _IsEUCountry_::_1_::dtor$3 @ 0x180028E3F (_IsEUCountry_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
