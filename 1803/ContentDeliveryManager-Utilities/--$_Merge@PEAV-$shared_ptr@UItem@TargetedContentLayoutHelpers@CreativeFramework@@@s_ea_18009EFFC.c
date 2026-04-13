/*
 * XREFs of ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x18009EFFC
 * Callers:
 *     ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x18009E428 (--$_Buffered_merge_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@Creativ_ea_18009E428.c)
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x18009E65C (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFram_ea_18009E65C.c)
 * Callees:
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800702F0 (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 */

_QWORD *__fastcall std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  char v12; // bp
  __int64 *v13; // rdx
  __int64 *v14; // rbx
  __int64 *v15; // rax

  v9 = a1;
  if ( a1 != a2 )
  {
    do
    {
      if ( a3 == a4 )
        break;
      v10 = *a3;
      v11 = *v9;
      v12 = *(_BYTE *)(*a3 + 16);
      if ( v12 )
      {
        if ( *(_BYTE *)(v11 + 16) )
          v12 = *(double *)(v11 + 24) > *(double *)(v10 + 24);
      }
      else if ( !*(_BYTE *)(v11 + 16) )
      {
        v12 = *(_DWORD *)(v10 + 20) < *(_DWORD *)(v11 + 20);
      }
      v13 = a3;
      v14 = v9;
      if ( !v12 )
      {
        v13 = v9;
        v14 = v9 + 2;
      }
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a5, v13);
      a5 += 2;
      v15 = a3 + 2;
      v9 = v14;
      if ( !v12 )
        v15 = a3;
      a3 = v15;
    }
    while ( v14 != a2 );
  }
  while ( v9 != a2 )
  {
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a5, v9);
    a5 += 2;
    v9 += 2;
  }
  while ( a3 != a4 )
  {
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a5, a3);
    a5 += 2;
    a3 += 2;
  }
  return a5;
}
