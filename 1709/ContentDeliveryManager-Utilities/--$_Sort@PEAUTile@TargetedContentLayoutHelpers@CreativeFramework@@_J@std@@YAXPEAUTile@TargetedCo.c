/*
 * XREFs of ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x18008F92C
 * Callers:
 *     ?SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@1AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@4@@Z @ 0x18008F26C (-SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV-$vector@V-.c)
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x18008F92C (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180033540 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x18008F92C (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 *     ??$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AU?$pair@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x18008FCF4 (--$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AU-$pa.c)
 *     ??$_Insertion_sort1@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800903D4 (--$_Insertion_sort1@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUT.c)
 *     ??$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J1$$QEAU123@@Z @ 0x18009148C (--$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTil.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int128 v15; // xmm0
  void **v16; // rax
  __int64 v17; // [rsp+20h] [rbp-60h]
  __int64 v18; // [rsp+28h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-50h]
  void *v20[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h]
  unsigned __int64 v22; // [rsp+50h] [rbp-30h]
  __int128 v23; // [rsp+58h] [rbp-28h]
  char v24; // [rsp+68h] [rbp-18h]

  v3 = a2;
  v4 = a1;
  v5 = a2 - a1;
  result = (unsigned __int64)((unsigned __int128)(v5 * (__int128)0x4924924924924925LL) >> 64) >> 63;
  v8 = v5 / 56;
  if ( v5 / 56 <= 32 )
    goto LABEL_24;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Unguarded_partition<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(&v18, v4, v3, 0LL);
    a3 = a3 / 2 / 2 + a3 / 2;
    if ( (v18 - v4) / 56 >= (v3 - v19) / 56 )
    {
      std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(v19, v3, a3);
      v3 = v18;
    }
    else
    {
      std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(v4, v18, a3);
      v4 = v19;
    }
    result = (unsigned __int64)((unsigned __int128)((v3 - v4) * (__int128)0x4924924924924925LL) >> 64) >> 63;
    v8 = (v3 - v4) / 56;
  }
  while ( v8 > 32 );
  v18 = v3;
  if ( v8 <= 32 )
  {
LABEL_24:
    if ( v8 > 1 )
      return std::_Insertion_sort1<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
               v4,
               v3);
  }
  else
  {
    result = (unsigned __int64)((unsigned __int128)((v3 - v4) * (__int128)0x4924924924924925LL) >> 64) >> 63;
    v9 = (v3 - v4) / 56;
    if ( v9 > 1 )
    {
      if ( v9 / 2 > 0 )
      {
        v10 = v9 / 2;
        v11 = v4 + 56 * (v9 / 2) + 40;
        do
        {
          v22 = 7LL;
          v17 = v11 - 56;
          --v10;
          v21 = 0LL;
          LOWORD(v20[0]) = 0;
          std::wstring::_Assign_rv(v20, (_QWORD *)(v11 - 96));
          v12 = *(_OWORD *)(v17 - 8);
          v24 = *(_BYTE *)(v17 + 8);
          v23 = v12;
          std::_Adjust_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
            v4,
            v10,
            v9,
            v20);
          if ( v22 >= 8 )
            operator delete(v20[0]);
          v11 = v17;
        }
        while ( v10 > 0 );
        v3 = v18;
      }
      v13 = v3 - 32;
      v14 = 32 - v4;
      do
      {
        v22 = 7LL;
        v21 = 0LL;
        LOWORD(v20[0]) = 0;
        std::wstring::_Assign_rv(v20, (_QWORD *)(v13 - 24));
        v15 = *(_OWORD *)(v13 + 8);
        v24 = *(_BYTE *)(v13 + 24);
        v16 = (void **)(v13 - 24);
        v23 = v15;
        if ( v13 - 24 != v4 )
        {
          if ( *(_QWORD *)v13 >= 8uLL )
          {
            operator delete(*v16);
            v16 = (void **)(v13 - 24);
          }
          *(_QWORD *)v13 = 7LL;
          *(_QWORD *)(v13 - 8) = 0LL;
          *(_WORD *)v16 = 0;
          std::wstring::_Assign_rv(v16, (_QWORD *)v4);
        }
        *(_QWORD *)(v13 + 8) = *(_QWORD *)(v4 + 32);
        *(_QWORD *)(v13 + 16) = *(_QWORD *)(v4 + 40);
        *(_BYTE *)(v13 + 24) = *(_BYTE *)(v4 + 48);
        std::_Adjust_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
          v4,
          0LL,
          (v13 + -24 - v4) / 56,
          v20);
        if ( v22 >= 8 )
          operator delete(v20[0]);
        v13 -= 56LL;
        result = (unsigned __int64)((unsigned __int128)((v14 + v13) * (__int128)0x4924924924924925LL) >> 64) >> 63;
      }
      while ( (v14 + v13) / 56 > 1 );
    }
  }
  return result;
}
