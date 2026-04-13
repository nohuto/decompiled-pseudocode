/*
 * XREFs of _CreativeFramework::Actions::MakeLaunchUriService_::_1_::dtor$5 @ 0x1800C7E1B
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18003421C (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::MakeLaunchUriService_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~4u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 104));
  }
}
