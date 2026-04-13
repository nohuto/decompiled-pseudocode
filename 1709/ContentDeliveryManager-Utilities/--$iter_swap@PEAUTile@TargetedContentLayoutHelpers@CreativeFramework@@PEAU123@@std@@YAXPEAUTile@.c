/*
 * XREFs of ??$iter_swap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800902CC
 * Callers:
 *     ??$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AU?$pair@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x18008FCF4 (--$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AU-$pa.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180033540 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

void __fastcall std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
        __int64 a1,
        __int64 a2)
{
  bool v4; // cf
  __int128 v5; // xmm0
  void *v6[3]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-28h]
  __int128 v8; // [rsp+40h] [rbp-20h]
  char v9; // [rsp+50h] [rbp-10h]

  v6[2] = 0LL;
  v7 = 7LL;
  LOWORD(v6[0]) = 0;
  std::wstring::_Assign_rv(v6, (_QWORD *)a1);
  v9 = *(_BYTE *)(a1 + 48);
  v8 = *(_OWORD *)(a1 + 32);
  if ( a1 != a2 )
  {
    if ( *(_QWORD *)(a1 + 24) >= 8uLL )
      operator delete(*(void **)a1);
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_WORD *)a1 = 0;
    std::wstring::_Assign_rv((_QWORD *)a1, (_QWORD *)a2);
  }
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_BYTE *)(a1 + 48) = *(_BYTE *)(a2 + 48);
  if ( (void **)a2 != v6 )
  {
    if ( *(_QWORD *)(a2 + 24) >= 8uLL )
      operator delete(*(void **)a2);
    *(_QWORD *)(a2 + 24) = 7LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_WORD *)a2 = 0;
    std::wstring::_Assign_rv((_QWORD *)a2, v6);
  }
  v4 = v7 < 8;
  v5 = v8;
  *(_BYTE *)(a2 + 48) = v9;
  *(_OWORD *)(a2 + 32) = v5;
  if ( !v4 )
    operator delete(v6[0]);
}
