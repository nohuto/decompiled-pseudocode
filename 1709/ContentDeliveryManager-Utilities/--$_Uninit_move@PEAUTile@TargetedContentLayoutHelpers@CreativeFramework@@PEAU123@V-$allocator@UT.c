/*
 * XREFs of ??$_Uninit_move@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@U123@@std@@YAPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@00AEAU?$_Wrap_alloc@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18008EB20
 * Callers:
 *     ?_Reallocate@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x18008E174 (-_Reallocate@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@T.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180033540 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 */

__int64 __fastcall std::_Uninit_move<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *,std::allocator<CreativeFramework::TargetedContentLayoutHelpers::Tile>,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 i; // rbx
  __int64 v8; // [rsp+60h] [rbp+18h]

  v8 = a3;
  v3 = a3;
  try
  {
    if ( a1 != a2 )
    {
      v5 = a1 + 40;
      do
      {
        if ( v3 )
        {
          *(_QWORD *)(v3 + 24) = 7LL;
          *(_QWORD *)(v3 + 16) = 0LL;
          *(_WORD *)v3 = 0;
          std::wstring::_Assign_rv((_QWORD *)v3, (_QWORD *)(v5 - 40));
          *(_QWORD *)(v3 + 32) = *(_QWORD *)(v5 - 8);
          *(_QWORD *)(v3 + 40) = *(_QWORD *)v5;
          *(_BYTE *)(v3 + 48) = *(_BYTE *)(v5 + 8);
        }
        v3 += 56LL;
        v8 = v3;
        v5 += 56LL;
      }
      while ( v5 - 40 != a2 );
    }
  }
  catch ( ... )
  {
    for ( i = a3; i != v8; i += 56LL )
    {
      if ( *(_QWORD *)(i + 24) >= 8uLL )
        operator delete(*(void **)i);
      *(_QWORD *)(i + 24) = 7LL;
      *(_QWORD *)(i + 16) = 0LL;
      *(_WORD *)i = 0;
    }
    throw;
  }
  return v3;
}
