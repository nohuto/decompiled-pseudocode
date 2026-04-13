/*
 * XREFs of ??$_Uninit_move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@V12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18009C2A0
 * Callers:
 *     ?_Reallocate@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x18009B8D0 (-_Reallocate@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 * Callees:
 *     <none>
 */

volatile signed __int32 **__fastcall std::_Uninit_move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::allocator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2,
        volatile signed __int32 **a3)
{
  volatile signed __int32 **v3; // r9
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 **v6; // rdi
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 **v8; // [rsp+50h] [rbp+18h]
  volatile signed __int32 **v9; // [rsp+58h] [rbp+20h]

  v8 = a3;
  v3 = a1;
  v9 = a3;
  try
  {
    if ( a1 != a2 )
    {
      do
      {
        *a3 = 0LL;
        a3[1] = 0LL;
        if ( a3 != v3 )
        {
          a3[1] = v3[1];
          v3[1] = 0LL;
          v4 = *a3;
          *a3 = *v3;
          *v3 = v4;
        }
        a3 += 2;
        v8 = a3;
        v3 += 2;
      }
      while ( v3 != a2 );
    }
  }
  catch ( ... )
  {
    if ( v9 != v8 )
    {
      v6 = v9 + 1;
      do
      {
        v7 = *v6;
        if ( *v6 && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
          if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
        }
        v6 += 2;
      }
      while ( v6 - 1 != v8 );
    }
    throw;
  }
  return a3;
}
