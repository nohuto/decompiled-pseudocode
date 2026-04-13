/*
 * XREFs of _CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId_::_1_::dtor$2 @ 0x1800B9F2B
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x180030FA4 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 128));
  }
}
