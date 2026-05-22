/*
 * XREFs of ??_G?$ModifiedNotifier@VPropertyVector@Input@@@Input@@UEAAPEAXI@Z @ 0x180023F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18000A554 (--1-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUtagInpu.c)
 *     ?Dispose@PropertyVector@Input@@UEAAXXZ @ 0x1800321D0 (-Dispose@PropertyVector@Input@@UEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 *__fastcall Input::ModifiedNotifier<Input::PropertyVector>::`scalar deleting destructor'(
        unsigned __int64 *Block,
        char a2)
{
  *Block = (unsigned __int64)&Input::PropertyVector::`vftable';
  Input::PropertyVector::Dispose((Input::PropertyVector *)Block);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>(Block + 4);
  *Block = (unsigned __int64)&Input::PropertyNode::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
