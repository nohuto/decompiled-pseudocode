/*
 * XREFs of _CreativeFramework::Actions::MakeAppInstallService_::_1_::dtor$15 @ 0x1800B9DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x180030FA4 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::MakeAppInstallService_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 84) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 84) &= ~0x20u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 120));
  }
}
