/*
 * XREFs of ??1?$PropertyVectorModifiedAdapter@V?$ModifiedNotifier@VPropertyVector@Input@@@Input@@@Input@@UEAA@XZ @ 0x180023194
 * Callers:
 *     _DisplayBinding::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800CD8E0 (_DisplayBinding--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18000A554 (--1-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUtagInpu.c)
 *     ?Dispose@PropertyVector@Input@@UEAAXXZ @ 0x1800321D0 (-Dispose@PropertyVector@Input@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall Input::PropertyVectorModifiedAdapter<Input::ModifiedNotifier<Input::PropertyVector>>::~PropertyVectorModifiedAdapter<Input::ModifiedNotifier<Input::PropertyVector>>(
        unsigned __int64 *a1)
{
  void **result; // rax

  *a1 = (unsigned __int64)&Input::PropertyVector::`vftable';
  Input::PropertyVector::Dispose((Input::PropertyVector *)a1);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>(a1 + 4);
  result = &Input::PropertyNode::`vftable';
  *a1 = (unsigned __int64)&Input::PropertyNode::`vftable';
  return result;
}
