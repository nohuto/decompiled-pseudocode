/*
 * XREFs of ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x18009D0D8
 * Callers:
 *     ?SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@1AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@4@@Z @ 0x18009CA0C (-SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV-$vector@V-.c)
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x18009D0D8 (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18003681C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x18009C9E0 (--MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z.c)
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x18009D0D8 (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 *     ??$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AU?$pair@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x18009D528 (--$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AU-$pa.c)
 *     ??4Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAAAEAU012@$$QEAU012@@Z @ 0x18009EA08 (--4Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAAAEAU012@$$QEAU012@@Z.c)
 *     ??$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J1$$QEAU123@@Z @ 0x18009EA7C (--$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTil.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

void __fastcall std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rsi
  __int128 v12; // xmm0
  __int64 i; // rbx
  __int128 v14; // xmm0
  __int64 v15; // rsi
  __int64 v16; // r8
  bool v17; // al
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // [rsp+20h] [rbp-60h]
  __int64 v21; // [rsp+28h] [rbp-58h]
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h]
  void *v24[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h]
  unsigned __int64 v26; // [rsp+58h] [rbp-28h]
  __int128 v27; // [rsp+60h] [rbp-20h]
  char v28; // [rsp+70h] [rbp-10h]

  v3 = a2;
  v21 = a2;
  v4 = a1;
  v6 = (a2 - a1) / 56;
  if ( v6 <= 32 )
    goto LABEL_21;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Unguarded_partition<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(&v22, v4, v3);
    a3 = a3 / 2 / 2 + a3 / 2;
    if ( (v22 - v4) / 56 >= (v3 - v23) / 56 )
    {
      std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(v23, v3, a3);
      v3 = v22;
    }
    else
    {
      std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(v4, v22, a3);
      v4 = v23;
    }
    v6 = (v3 - v4) / 56;
  }
  while ( v6 > 32 );
  v21 = v3;
  if ( v6 <= 32 )
  {
LABEL_21:
    if ( v6 > 1 && v4 != v3 )
    {
      for ( i = v4 + 56; i != v3; i += 56LL )
      {
        v26 = 7LL;
        v25 = 0LL;
        LOWORD(v24[0]) = 0;
        std::wstring::_Assign_rv(v24, (_QWORD *)i);
        v14 = *(_OWORD *)(i + 32);
        v28 = *(_BYTE *)(i + 48);
        v27 = v14;
        if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<((__int64)v24, v4) )
        {
          if ( v4 != i )
          {
            v15 = i;
            do
            {
              v15 -= 56LL;
              CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(v15 + 56, v15);
            }
            while ( v15 != v4 );
            v3 = v21;
          }
          v16 = v4;
        }
        else
        {
          v17 = CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<((__int64)v24, i - 56);
          v16 = i;
          if ( v17 )
          {
            v19 = v18;
            do
            {
              CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(v16, v19);
              v19 -= 56LL;
            }
            while ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<((__int64)v24, v19) );
            v3 = v21;
          }
        }
        CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(v16, v24);
        if ( v26 >= 8 )
          operator delete(v24[0]);
      }
    }
  }
  else
  {
    v7 = (v3 - v4) / 56;
    if ( v7 > 1 )
    {
      if ( v7 / 2 > 0 )
      {
        v8 = v7 / 2;
        v9 = v4 + 56 * (v7 / 2) + 40;
        do
        {
          v26 = 7LL;
          v20 = v9 - 56;
          --v8;
          v25 = 0LL;
          LOWORD(v24[0]) = 0;
          std::wstring::_Assign_rv(v24, (_QWORD *)(v9 - 96));
          v10 = *(_OWORD *)(v20 - 8);
          v28 = *(_BYTE *)(v20 + 8);
          v27 = v10;
          std::_Adjust_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
            v4,
            v8,
            v7,
            v24);
          if ( v26 >= 8 )
            operator delete(v24[0]);
          v9 = v20;
        }
        while ( v8 > 0 );
        v3 = v21;
      }
      v11 = v3 - 16;
      do
      {
        v26 = 7LL;
        v25 = 0LL;
        LOWORD(v24[0]) = 0;
        std::wstring::_Assign_rv(v24, (_QWORD *)(v11 - 40));
        v12 = *(_OWORD *)(v11 - 8);
        v28 = *(_BYTE *)(v11 + 8);
        v27 = v12;
        CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(v11 - 40, v4);
        std::_Adjust_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
          v4,
          0LL,
          (v11 + -40 - v4) / 56,
          v24);
        if ( v26 >= 8 )
          operator delete(v24[0]);
        v11 -= 56LL;
      }
      while ( (v11 + 16 - v4) / 56 > 1 );
    }
  }
}
