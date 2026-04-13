/*
 * XREFs of ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x180090E98
 * Callers:
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x180090138 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramewo_ea_180090138.c)
 * Callees:
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800646FC (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 *     ??1?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x18008FC6C (--1-$_Temp_iterator@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@s.c)
 *     ??$_Insertion_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x180090D08 (--$_Insertion_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFram_ea_180090D08.c)
 *     ??$_Move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0V10@@Z @ 0x180091694 (--$_Move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$_Temp_i.c)
 *     ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x180091AB0 (--$_Merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@s_ea_180091AB0.c)
 *     ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@000V10@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x180091EBC (--$_Merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@s_ea_180091EBC.c)
 */

void __fastcall std::_Buffered_merge_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  unsigned __int64 v9; // rsi
  __int64 *v10; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 **v20; // rax
  __int64 *v21; // rbx
  __int64 *v22; // rsi
  __int64 *v23; // rdx
  __int64 *v24; // rbx
  __int64 v25; // r12
  __int128 v26; // [rsp+50h] [rbp-79h] BYREF
  __int128 v27; // [rsp+60h] [rbp-69h]
  __int64 v28; // [rsp+70h] [rbp-59h]
  __int64 *v29; // [rsp+78h] [rbp-51h]
  void *v30[5]; // [rsp+80h] [rbp-49h] BYREF
  _OWORD v31[2]; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v32; // [rsp+C8h] [rbp-1h]
  __int64 *v33; // [rsp+128h] [rbp+5Fh]

  v33 = a1;
  v4 = 32LL;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( a3 >= 32 )
  {
    v9 = (unsigned __int64)a3 >> 5;
    do
    {
      v10 = a1 + 64;
      std::_Insertion_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        a1,
        a1 + 64);
      a1 = v10;
      --v9;
    }
    while ( v9 );
    v8 = v33;
    v7 = a2;
  }
  std::_Insertion_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
    a1,
    v7);
  while ( v4 < v6 )
  {
    v11 = *(_QWORD **)(v5 + 32);
    v12 = v6;
    v31[0] = 0LL;
    v13 = (__int64)v8;
    v11[1] = *v11;
    v14 = *(_QWORD *)(v5 + 32);
    v15 = 2 * v4;
    v32 = v14;
    v31[1] = 0LL;
    if ( 2 * v4 <= v6 )
    {
      do
      {
        v16 = v13 + 16 * v4;
        v28 = v14;
        v17 = v16 + 16 * v4;
        v26 = 0LL;
        v27 = 0LL;
        v14 = *(_QWORD *)(std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
                            (unsigned int)v30,
                            v13,
                            v16,
                            (int)v13 + 16 * (int)v4,
                            v17,
                            (__int64)&v26)
                        + 32);
        std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(v30);
        v12 -= v15;
        v13 = v17;
      }
      while ( v12 >= v15 );
      v8 = v33;
      v7 = a2;
      v32 = v14;
    }
    v28 = v14;
    v26 = 0LL;
    v27 = 0LL;
    if ( v12 > v4 )
      std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        (unsigned int)v30,
        v13,
        v13 + 16 * v4,
        v13 + 16 * v4,
        (__int64)v7,
        (__int64)&v26);
    else
      std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>(
        v30,
        v13,
        v7,
        &v26);
    std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(v30);
    std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>((void **)v31);
    v4 *= 4LL;
    v18 = (__int64)v8;
    v19 = v6;
    v20 = *(__int64 ***)(a4 + 32);
    v21 = v20[1];
    v22 = *v20;
    v29 = v21;
    if ( 2 * v15 <= v6 )
    {
      do
      {
        v23 = &v22[2 * v15];
        v24 = &v23[2 * v15];
        v6 -= v4;
        v18 = std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
                (_DWORD)v22,
                (_DWORD)v23,
                (int)v22 + 16 * (int)v15,
                (int)v23 + 16 * (int)v15,
                v18);
        v22 = v24;
      }
      while ( v6 >= v4 );
      v21 = v29;
      v19 = v6;
      v6 = a3;
    }
    if ( v19 > v15 )
    {
      std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        (_DWORD)v22,
        (_DWORD)v22 + 16 * v15,
        (_DWORD)v22 + 16 * v15,
        (_DWORD)v21,
        v18);
    }
    else if ( v22 != v21 )
    {
      v25 = v18 - (_QWORD)v22;
      do
      {
        std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(
          (__int64 *)((char *)v22 + v25),
          v22);
        v22 += 2;
      }
      while ( v22 != v21 );
    }
    v8 = v33;
    v7 = a2;
    v5 = a4;
  }
}
