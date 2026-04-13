/*
 * XREFs of ?_Reallocate@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x18009B7B8
 * Callers:
 *     ?_Reserve@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x18009B618 (-_Reserve@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Targ.c)
 * Callees:
 *     ??$_Uninit_move@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@U123@@std@@YAPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@00AEAU?$_Wrap_alloc@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18009C210 (--$_Uninit_move@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@V-$allocator@UT.c)
 *     ??2@YAPEAX_K@Z @ 0x1800A4410 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800A45D0 (-_Xbad_alloc@std@@YAXXZ.c)
 */

char *__fastcall std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Reallocate(
        _QWORD *a1,
        unsigned __int64 a2)
{
  char *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r15
  char *result; // rax
  void *v10; // [rsp+78h] [rbp+10h]

  v4 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x492492492492492LL || (v4 = (char *)operator new(56 * a2), (v10 = v4) == 0LL) )
      std::_Xbad_alloc();
  }
  try
  {
    std::_Uninit_move<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *,std::allocator<CreativeFramework::TargetedContentLayoutHelpers::Tile>,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
      *a1,
      a1[1],
      v4);
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      v5,
      v10);
    throw;
  }
  v6 = a1[1];
  v7 = *a1;
  v8 = (v6 - *a1) / 56;
  if ( *a1 )
  {
    if ( v7 != v6 )
    {
      do
      {
        if ( *(_QWORD *)(v7 + 24) >= 8uLL )
          operator delete(*(void **)v7);
        *(_QWORD *)(v7 + 24) = 7LL;
        *(_QWORD *)(v7 + 16) = 0LL;
        *(_WORD *)v7 = 0;
        v7 += 56LL;
      }
      while ( v7 != v6 );
      v7 = *a1;
    }
    operator delete((void *)v7);
  }
  a1[2] = &v4[56 * a2];
  result = &v4[56 * v8];
  a1[1] = result;
  *a1 = v4;
  return result;
}
