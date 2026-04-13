/*
 * XREFs of _std::time_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::_Getcat_::_1_::dtor$1 @ 0x1800BD009
 * Callers:
 *     <none>
 * Callees:
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x1800263A4 (--1_Locinfo@std@@QEAA@XZ.c)
 */

void __fastcall std::time_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::_Getcat_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 176) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 176) &= ~1u;
    std::_Locinfo::~_Locinfo((std::_Locinfo *)(a2 + 40));
  }
}
