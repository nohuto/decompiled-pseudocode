/*
 * XREFs of _std::money_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getmfld_::_1_::dtor$10 @ 0x1800BD242
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x180030FA4 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall std::money_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getmfld_::_1_::dtor_10(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~0x10u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 184));
  }
}
