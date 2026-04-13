/*
 * XREFs of ??$_Insertion_sort1@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800903D4
 * Callers:
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x18008F92C (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180033540 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x18008F240 (--MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

void __fastcall std::_Insertion_sort1<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // r14
  __int64 v5; // rbx
  __int64 v6; // xmm0_8
  __int64 v7; // rsi
  char v8; // al
  void **v9; // rbx
  __int128 v10; // xmm0
  __int64 j; // rsi
  __int128 v12; // xmm0
  void *v13[3]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+40h] [rbp-20h]
  char v16; // [rsp+50h] [rbp-10h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 56; i != a2; i += 56LL )
    {
      v14 = 7LL;
      v13[2] = 0LL;
      v5 = i;
      LOWORD(v13[0]) = 0;
      std::wstring::_Assign_rv(v13, (_QWORD *)i);
      v6 = *(_QWORD *)(i + 32);
      v7 = i + 40;
      v8 = *(_BYTE *)(i + 48);
      *((_QWORD *)&v15 + 1) = *(_QWORD *)(i + 40);
      *(_QWORD *)&v15 = v6;
      v16 = v8;
      if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<((__int64)v13, a1) )
      {
        v9 = (void **)(i + 56);
        if ( a1 != i )
        {
          do
          {
            v7 -= 56LL;
            v9 -= 7;
            if ( v9 != (void **)(v7 - 40) )
            {
              if ( *(_QWORD *)(v7 + 40) >= 8uLL )
                operator delete(*v9);
              *(_QWORD *)(v7 + 40) = 7LL;
              *(_QWORD *)(v7 + 32) = 0LL;
              *(_WORD *)v9 = 0;
              std::wstring::_Assign_rv(v9, (_QWORD *)(v7 - 40));
            }
            *(_QWORD *)(v7 + 48) = *(_QWORD *)(v7 - 8);
            *(_QWORD *)(v7 + 56) = *(_QWORD *)v7;
            *(_BYTE *)(v7 + 64) = *(_BYTE *)(v7 + 8);
          }
          while ( v7 - 40 != a1 );
        }
        if ( (void **)a1 != v13 )
        {
          if ( *(_QWORD *)(a1 + 24) >= 8uLL )
            operator delete(*(void **)a1);
          *(_QWORD *)(a1 + 24) = 7LL;
          *(_QWORD *)(a1 + 16) = 0LL;
          *(_WORD *)a1 = 0;
          std::wstring::_Assign_rv((_QWORD *)a1, v13);
        }
        v10 = v15;
        *(_BYTE *)(a1 + 48) = v16;
        *(_OWORD *)(a1 + 32) = v10;
      }
      else
      {
        for ( j = i - 56; CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<((__int64)v13, j); j -= 56LL )
        {
          if ( v5 != j )
          {
            if ( *(_QWORD *)(v5 + 24) >= 8uLL )
              operator delete(*(void **)v5);
            *(_QWORD *)(v5 + 24) = 7LL;
            *(_QWORD *)(v5 + 16) = 0LL;
            *(_WORD *)v5 = 0;
            std::wstring::_Assign_rv((_QWORD *)v5, (_QWORD *)j);
          }
          *(_QWORD *)(v5 + 32) = *(_QWORD *)(j + 32);
          *(_QWORD *)(v5 + 40) = *(_QWORD *)(j + 40);
          *(_BYTE *)(v5 + 48) = *(_BYTE *)(j + 48);
          v5 = j;
        }
        if ( (void **)v5 != v13 )
        {
          if ( *(_QWORD *)(v5 + 24) >= 8uLL )
            operator delete(*(void **)v5);
          *(_QWORD *)(v5 + 24) = 7LL;
          *(_QWORD *)(v5 + 16) = 0LL;
          *(_WORD *)v5 = 0;
          std::wstring::_Assign_rv((_QWORD *)v5, v13);
        }
        v12 = v15;
        *(_BYTE *)(v5 + 48) = v16;
        *(_OWORD *)(v5 + 32) = v12;
      }
      if ( v14 >= 8 )
        operator delete(v13[0]);
    }
  }
}
