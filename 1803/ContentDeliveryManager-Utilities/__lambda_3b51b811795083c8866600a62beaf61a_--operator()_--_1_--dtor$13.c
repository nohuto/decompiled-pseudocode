/*
 * XREFs of __lambda_3b51b811795083c8866600a62beaf61a_::operator()_::_1_::dtor$13 @ 0x1800C4EEE
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18003421C (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall _lambda_3b51b811795083c8866600a62beaf61a_::operator()_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 296));
  }
}
