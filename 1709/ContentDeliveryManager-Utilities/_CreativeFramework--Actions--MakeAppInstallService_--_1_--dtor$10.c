/*
 * XREFs of _CreativeFramework::Actions::MakeAppInstallService_::_1_::dtor$10 @ 0x1800B9D83
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x180030FA4 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::MakeAppInstallService_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 84) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 84) &= ~4u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 120));
  }
}
