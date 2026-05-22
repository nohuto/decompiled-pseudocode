/*
 * XREFs of ?UnregisterFromDisplayBindingChangeNotifications@DWMInputRouter@@UEAAJIPEAUIDisplayBindingObserver@@@Z @ 0x18001C690
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18000A554 (--1-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUtagInpu.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterFromDisplayBindingChangeNotifications(
        DWMInputRouter *this,
        int a2,
        struct IDisplayBindingObserver *a3)
{
  __int64 v3; // rax
  __int64 i; // rbx
  struct IDisplayBindingObserver **j; // rcx
  _DWORD *v8; // rbp
  _DWORD *v9; // rdi
  unsigned __int64 *v10; // rbx

  v3 = *((_QWORD *)this + 30);
  for ( i = *((_QWORD *)this + 29); i != v3 && a2 != *(_DWORD *)i; i += 32LL )
    ;
  if ( i == v3 )
    return 2147942487LL;
  for ( j = *(struct IDisplayBindingObserver ***)(i + 8);
        j != *(struct IDisplayBindingObserver ***)(i + 16) && *j != a3;
        ++j )
  {
    ;
  }
  if ( j == *(struct IDisplayBindingObserver ***)(i + 16) )
    return 2147942487LL;
  memmove(j, j + 1, *(_QWORD *)(i + 16) - (_QWORD)(j + 1));
  *(_QWORD *)(i + 16) -= 8LL;
  if ( *(_QWORD *)(i + 8) == *(_QWORD *)(i + 16) )
  {
    v8 = (_DWORD *)*((_QWORD *)this + 30);
    v9 = (_DWORD *)(i + 32);
    if ( (_DWORD *)(i + 32) != v8 )
    {
      v10 = (unsigned __int64 *)(i + 8);
      do
      {
        *((_DWORD *)v10 - 2) = *v9;
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>(v10);
        *v10 = v10[4];
        v10[1] = v10[5];
        v10[2] = v10[6];
        v10[4] = 0LL;
        v10[5] = 0LL;
        v10[6] = 0LL;
        v9 += 8;
        v10 += 4;
      }
      while ( v9 != v8 );
    }
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>((unsigned __int64 *)(*((_QWORD *)this + 30) - 24LL));
    *((_QWORD *)this + 30) -= 32LL;
  }
  return 0LL;
}
