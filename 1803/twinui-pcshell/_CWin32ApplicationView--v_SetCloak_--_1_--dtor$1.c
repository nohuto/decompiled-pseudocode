/*
 * XREFs of _CWin32ApplicationView::v_SetCloak_::_1_::dtor$1 @ 0x1800B2605
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWin32ApplicationView::v_SetCloak_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>(a2 + 80);
}
