/*
 * XREFs of ??$_Merge_backward@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x180091B94
 * Callers:
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800910D0 (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFram_ea_1800910D0.c)
 * Callees:
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800646FC (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 */

_QWORD *__fastcall std::_Merge_backward<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 *v8; // rdi
  __int64 *v10; // r15
  __int64 *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // al

  v8 = a2;
  if ( a1 == a2 )
  {
LABEL_12:
    while ( a4 != a3 )
    {
      a4 -= 2;
      a5 -= 2;
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a5, a4);
    }
  }
  else
  {
    while ( 1 )
    {
      v10 = v8;
      v11 = a4;
      if ( a3 == a4 )
        break;
      a4 -= 2;
      v8 -= 2;
      v12 = *a4;
      v13 = *v8;
      v14 = *(_BYTE *)(*a4 + 16);
      if ( v14 )
      {
        if ( *(_BYTE *)(v13 + 16) )
          v14 = *(double *)(v13 + 24) > *(double *)(v12 + 24);
      }
      else if ( !*(_BYTE *)(v13 + 16) )
      {
        v14 = *(_DWORD *)(v12 + 20) < *(_DWORD *)(v13 + 20);
      }
      a5 -= 2;
      if ( v14 )
      {
        std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a5, v8);
        a4 = v11;
      }
      else
      {
        std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a5, a4);
        v8 = v10;
      }
      if ( a1 == v8 )
        goto LABEL_12;
    }
    while ( v8 != a1 )
    {
      v8 -= 2;
      a5 -= 2;
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a5, v8);
    }
  }
  return a5;
}
