/*
 * XREFs of _std::_Uninit_move_CreativeFramework::TargetedContentLayoutHelpers::Tile_____ptr64_CreativeFramework::TargetedContentLayoutHelpers::Tile_____ptr64_std::allocator_CreativeFramework::TargetedContentLayoutHelpers::Tile__CreativeFramework::TargetedContentLayoutHelpers::Tile__::_1_::catch$0 @ 0x1800BC649
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800B4273 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninit_move_CreativeFramework::TargetedContentLayoutHelpers::Tile_____ptr64_CreativeFramework::TargetedContentLayoutHelpers::Tile_____ptr64_std::allocator_CreativeFramework::TargetedContentLayoutHelpers::Tile__CreativeFramework::TargetedContentLayoutHelpers::Tile__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(a2 + 104); i != *(_QWORD *)(a2 + 96); i += 56LL )
  {
    if ( *(_QWORD *)(i + 24) >= 8uLL )
      operator delete(*(void **)i);
    *(_QWORD *)(i + 24) = 7LL;
    *(_QWORD *)(i + 16) = 0LL;
    *(_WORD *)i = 0;
  }
  throw;
}
