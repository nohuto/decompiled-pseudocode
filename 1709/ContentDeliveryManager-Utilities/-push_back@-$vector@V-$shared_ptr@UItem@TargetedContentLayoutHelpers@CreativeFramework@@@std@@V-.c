/*
 * XREFs of ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x18008DE14
 * Callers:
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x18008C4D4 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 * Callees:
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002F6D0 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x180033AFC (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?_Reallocate@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x18008E27C (-_Reallocate@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 */

__int64 __fastcall std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx

  v4 = a1[1];
  if ( (unsigned __int64)a2 >= v4 || *a1 > (unsigned __int64)a2 )
  {
    v13 = a1[2];
    if ( v4 == v13 )
    {
      result = (__int64)(v13 - v4) >> 4;
      if ( !result )
      {
        v14 = (__int64)(v4 - *a1) >> 4;
        if ( v14 == 0xFFFFFFFFFFFFFFFLL )
          std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
        v15 = v14 + 1;
        v16 = (v13 - *a1) >> 4;
        v17 = 0LL;
        if ( 0xFFFFFFFFFFFFFFFLL - (v16 >> 1) >= v16 )
          v17 = v16 + (v16 >> 1);
        if ( v17 >= v15 )
          v15 = v17;
        result = std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reallocate(
                   a1,
                   v15);
      }
    }
    v12 = (_QWORD *)a1[1];
    if ( v12 )
      goto LABEL_22;
  }
  else
  {
    v5 = (unsigned __int64)a2 - *a1;
    v6 = a1[2];
    if ( v4 == v6 )
    {
      result = (__int64)(v6 - v4) >> 4;
      if ( !result )
      {
        v8 = (__int64)(v4 - *a1) >> 4;
        if ( v8 == 0xFFFFFFFFFFFFFFFLL )
          std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
        v9 = v8 + 1;
        v10 = (v6 - *a1) >> 4;
        v11 = 0LL;
        if ( 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) >= v10 )
          v11 = v10 + (v10 >> 1);
        if ( v11 >= v9 )
          v9 = v11;
        result = std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reallocate(
                   a1,
                   v9);
      }
    }
    v12 = (_QWORD *)a1[1];
    if ( v12 )
    {
      a2 = (__int64 *)(*a1 + (v5 & 0xFFFFFFFFFFFFFFF0uLL));
LABEL_22:
      result = (__int64)std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
                          v12,
                          a2);
    }
  }
  a1[1] += 16LL;
  return result;
}
