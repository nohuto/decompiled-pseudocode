/*
 * XREFs of ??$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J1$$QEAU123@@Z @ 0x18009148C
 * Callers:
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x18008F92C (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180033540 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x18008F240 (--MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z.c)
 */

char __fastcall std::_Adjust_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r9
  __int64 i; // r10
  bool v10; // al
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rbx
  char result; // al

  v5 = 2 * a2 + 2;
  for ( i = a2; v5 < a3; *(_BYTE *)(v15 + 48) = *(_BYTE *)(v14 + 48) )
  {
    v10 = CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(a1 + 56 * v5, a1 + 56 * v5 - 56);
    v13 = v11 - 1;
    if ( !v10 )
      v13 = v11;
    v14 = a1 + 56 * v13;
    v15 = a1 + 56 * v12;
    if ( v15 != v14 )
    {
      if ( *(_QWORD *)(v15 + 24) >= 8uLL )
        operator delete(*(void **)v15);
      *(_QWORD *)(v15 + 24) = 7LL;
      *(_QWORD *)(v15 + 16) = 0LL;
      *(_WORD *)v15 = 0;
      std::wstring::_Assign_rv((_QWORD *)v15, (_QWORD *)(a1 + 56 * v13));
    }
    v5 = 2 * v13 + 2;
    *(_QWORD *)(v15 + 32) = *(_QWORD *)(v14 + 32);
    i = v13;
    *(_QWORD *)(v15 + 40) = *(_QWORD *)(v14 + 40);
  }
  if ( v5 == a3 )
  {
    v16 = 56 * a3 + a1 - 56;
    v17 = a1 + 56 * i;
    if ( v17 != v16 )
    {
      if ( *(_QWORD *)(v17 + 24) >= 8uLL )
        operator delete(*(void **)v17);
      *(_QWORD *)(v17 + 24) = 7LL;
      *(_QWORD *)(v17 + 16) = 0LL;
      *(_WORD *)v17 = 0;
      std::wstring::_Assign_rv((_QWORD *)v17, (_QWORD *)(56 * a3 + a1 - 56));
    }
    i = a3 - 1;
    *(_QWORD *)(v17 + 32) = *(_QWORD *)(v16 + 32);
    *(_QWORD *)(v17 + 40) = *(_QWORD *)(v16 + 40);
    *(_BYTE *)(v17 + 48) = *(_BYTE *)(v16 + 48);
  }
  if ( a2 < i )
  {
    do
    {
      v18 = (i - 1) / 2;
      v19 = a1 + 56 * v18;
      if ( !CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v19, a4) )
        break;
      v20 = a1 + 56 * i;
      if ( v20 != v19 )
      {
        if ( *(_QWORD *)(v20 + 24) >= 8uLL )
          operator delete(*(void **)v20);
        *(_QWORD *)(v20 + 24) = 7LL;
        *(_QWORD *)(v20 + 16) = 0LL;
        *(_WORD *)v20 = 0;
        std::wstring::_Assign_rv((_QWORD *)v20, (_QWORD *)v19);
      }
      i = v18;
      *(_QWORD *)(v20 + 32) = *(_QWORD *)(v19 + 32);
      *(_QWORD *)(v20 + 40) = *(_QWORD *)(v19 + 40);
      *(_BYTE *)(v20 + 48) = *(_BYTE *)(v19 + 48);
    }
    while ( a2 < v18 );
  }
  v21 = a1 + 56 * i;
  if ( v21 != a4 )
  {
    if ( *(_QWORD *)(v21 + 24) >= 8uLL )
      operator delete(*(void **)v21);
    *(_QWORD *)(v21 + 24) = 7LL;
    *(_QWORD *)(v21 + 16) = 0LL;
    *(_WORD *)v21 = 0;
    std::wstring::_Assign_rv((_QWORD *)v21, (_QWORD *)a4);
  }
  *(_QWORD *)(v21 + 32) = *(_QWORD *)(a4 + 32);
  *(_QWORD *)(v21 + 40) = *(_QWORD *)(a4 + 40);
  result = *(_BYTE *)(a4 + 48);
  *(_BYTE *)(v21 + 48) = result;
  return result;
}
