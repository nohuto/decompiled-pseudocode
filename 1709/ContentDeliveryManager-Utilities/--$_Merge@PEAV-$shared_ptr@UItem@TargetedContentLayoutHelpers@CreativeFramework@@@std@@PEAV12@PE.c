/*
 * XREFs of ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x180091734
 * Callers:
 *     ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x18009076C (--$_Buffered_merge_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@.c)
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800909A4 (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 * Callees:
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800646FC (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 */

_QWORD *__fastcall std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 *i; // rsi
  double v10; // xmm0_8
  double v11; // xmm1_8

  for ( i = a1; i != a2; a5 += 2 )
  {
    if ( a3 == a4 )
      break;
    v10 = *(double *)(*a3 + 32);
    v11 = *(double *)(*i + 32);
    if ( v11 > v10 || v10 == v11 && *(double *)(*i + 40) > *(double *)(*a3 + 40) )
    {
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a5, a3);
      a3 += 2;
    }
    else
    {
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a5, i);
      i += 2;
    }
  }
  while ( i != a2 )
  {
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a5, i);
    a5 += 2;
    i += 2;
  }
  while ( a3 != a4 )
  {
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a5, a3);
    a5 += 2;
    a3 += 2;
  }
  return a5;
}
