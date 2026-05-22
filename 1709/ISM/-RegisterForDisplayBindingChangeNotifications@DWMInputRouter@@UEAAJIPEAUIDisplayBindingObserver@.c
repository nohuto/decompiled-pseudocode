/*
 * XREFs of ?RegisterForDisplayBindingChangeNotifications@DWMInputRouter@@UEAAJIPEAUIDisplayBindingObserver@@@Z @ 0x18001C5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18000A554 (--1-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUtagInpu.c)
 *     ??$emplace_back@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@?$vector@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@V?$allocator@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@2@@std@@QEAAX$$QEAU?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@1@@Z @ 0x18001F404 (--$emplace_back@U-$pair@KV-$vector@PEAUIDisplayBindingObserver@@V-$allocator@PEAUIDisplayBinding.c)
 *     ??$emplace_back@AEBQEAUIDisplayBindingObserver@@@?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@QEAAXAEBQEAUIDisplayBindingObserver@@@Z @ 0x18001F5D4 (--$emplace_back@AEBQEAUIDisplayBindingObserver@@@-$vector@PEAUIDisplayBindingObserver@@V-$alloca.c)
 *     ??$_Range_construct_or_tidy@PEBQEAUIDisplayBindingObserver@@@?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@AEAAXPEBQEAUIDisplayBindingObserver@@0Uforward_iterator_tag@1@@Z @ 0x18001F720 (--$_Range_construct_or_tidy@PEBQEAUIDisplayBindingObserver@@@-$vector@PEAUIDisplayBindingObserve.c)
 */

__int64 __fastcall DWMInputRouter::RegisterForDisplayBindingChangeNotifications(
        DWMInputRouter *this,
        int a2,
        struct IDisplayBindingObserver *a3)
{
  _DWORD *v3; // rax
  char *v4; // rbx
  _DWORD *i; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int128 v9; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v10; // [rsp+30h] [rbp-50h]
  int v11; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v12[3]; // [rsp+40h] [rbp-40h] BYREF
  int v13; // [rsp+58h] [rbp-28h]
  __int128 v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+70h] [rbp-10h]
  struct IDisplayBindingObserver *v16; // [rsp+90h] [rbp+10h] BYREF
  int v17; // [rsp+98h] [rbp+18h] BYREF
  struct IDisplayBindingObserver *v18; // [rsp+A0h] [rbp+20h] BYREF

  v18 = a3;
  v17 = a2;
  v3 = (_DWORD *)*((_QWORD *)this + 30);
  v4 = (char *)this + 232;
  for ( i = (_DWORD *)*((_QWORD *)this + 29); i != v3 && a2 != *i; i += 8 )
    ;
  if ( i == v3 )
  {
    v10 = 0LL;
    v16 = a3;
    v9 = 0LL;
    std::vector<IDisplayBindingObserver *>::_Range_construct_or_tidy<IDisplayBindingObserver * const *>(&v9, &v16, &v17);
    v6 = v9;
    v7 = v10;
    v10 = 0LL;
    v15 = 0LL;
    v12[1] = *((_QWORD *)&v9 + 1);
    v13 = v17;
    v9 = 0LL;
    v11 = v17;
    v12[0] = v6;
    v12[2] = v7;
    v14 = 0LL;
    std::vector<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>::emplace_back<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>(
      v4,
      &v11);
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>(v12);
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>((unsigned __int64 *)&v14);
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>((unsigned __int64 *)&v9);
  }
  else
  {
    std::vector<IDisplayBindingObserver *>::emplace_back<IDisplayBindingObserver * const &>(i + 2, &v18);
  }
  return 0LL;
}
