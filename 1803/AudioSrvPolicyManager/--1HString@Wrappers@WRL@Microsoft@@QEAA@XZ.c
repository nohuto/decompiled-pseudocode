/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18002ACF4
 * Callers:
 *     _IsEUCountry_::_1_::dtor$2 @ 0x180037A02 (_IsEUCountry_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
