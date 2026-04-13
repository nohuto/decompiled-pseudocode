/*
 * XREFs of ??$_Merge_backward@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x180091810
 * Callers:
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800909A4 (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 * Callees:
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800646FC (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 */

_QWORD *__fastcall std::_Merge_backward<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 *v8; // rdi
  __int64 *v10; // r15
  __int64 *v11; // r12
  double v12; // xmm0_8
  double v13; // xmm1_8

  v8 = a2;
  if ( a1 == a2 )
  {
LABEL_9:
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
      v8 -= 2;
      a4 -= 2;
      v12 = *(double *)(*a4 + 32);
      v13 = *(double *)(*v8 + 32);
      if ( v13 > v12 || v12 == v13 && *(double *)(*v8 + 40) > *(double *)(*a4 + 40) )
      {
        a5 -= 2;
        std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a5, v8);
        a4 = v11;
      }
      else
      {
        a5 -= 2;
        std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a5, a4);
        v8 = v10;
      }
      if ( a1 == v8 )
        goto LABEL_9;
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
