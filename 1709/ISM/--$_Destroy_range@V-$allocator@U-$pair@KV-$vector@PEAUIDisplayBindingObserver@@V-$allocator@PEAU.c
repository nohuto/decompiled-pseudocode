/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@std@@PEAU?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@2@@std@@YAXPEAU?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@0@0AEAU?$_Wrap_alloc@V?$allocator@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@std@@@0@@Z @ 0x18001FCB0
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_std::pair_unsigned_long_std::vector_IDisplayBindingObserver_____ptr64_std::allocator_IDisplayBindingObserver_____ptr64__________ptr64_std::pair_unsigned_long_std::vector_IDisplayBindingObserver_____ptr64_std::allocator_IDisplayBindingObserver_____ptr64__________ptr64_std::allocator_std::pair_unsigned_long_std::vector_IDisplayBindingObserver_____ptr64_std::allocator_IDisplayBindingObserver_____ptr64__________::_1_::catch$46 @ 0x1800CD770 (_std--_Uninitialized_move_al_unchecked_std--pair_unsigned_long_std--vector_IDisplayBindingObserv.c)
 * Callees:
 *     ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18000A554 (--1-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUtagInpu.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>,std::pair<unsigned long,std::vector<IDisplayBindingObserver *>> *>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>((unsigned __int64 *)(v3 + 8));
      v3 += 32LL;
    }
    while ( v3 != a2 );
  }
}
