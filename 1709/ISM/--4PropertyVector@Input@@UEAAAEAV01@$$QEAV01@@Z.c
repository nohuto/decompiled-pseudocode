/*
 * XREFs of ??4PropertyVector@Input@@UEAAAEAV01@$$QEAV01@@Z @ 0x1800320A0
 * Callers:
 *     ??4?$ModifiedNotifier@VPropertyVector@Input@@@Input@@UEAAAEAV01@$$QEAV01@@Z @ 0x180023E70 (--4-$ModifiedNotifier@VPropertyVector@Input@@@Input@@UEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18000A554 (--1-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUtagInpu.c)
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x180030F18 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 */

__int64 __fastcall Input::PropertyVector::operator=(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi

  if ( a2 != a1 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
    Input::PropertyNode::GetDefinition((Input::PropertyNode *)a1);
    v4 = (_QWORD *)(a2 + 32);
    if ( (_QWORD *)(a1 + 32) != v4 )
    {
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>((unsigned __int64 *)(a1 + 32));
      *(_QWORD *)(a1 + 32) = *v4;
      *(_QWORD *)(a1 + 40) = v4[1];
      *(_QWORD *)(a1 + 48) = v4[2];
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
    }
  }
  return a1;
}
