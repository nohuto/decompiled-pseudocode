/*
 * XREFs of _std::collate_wchar_t_::do_transform_::_1_::dtor$0 @ 0x1800CA943
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18003421C (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall std::collate_wchar_t_::do_transform_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile(*(void ***)(a2 + 104));
  }
}
