/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x18000A7AC
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A408 (-_Init@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 * Callees:
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@PEAV12@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@@std@@YAPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@0@PEAV10@00AEAV?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18000A8F8 (--$_Uninitialized_move_al_unchecked@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>>>>::_Reallocate_exactly(
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v4; // r14
  _QWORD *v5; // rbx
  size_t v6; // rcx
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  char *result; // rax

  v4 = (__int64)(a1[1] - *a1) >> 3;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Default_allocate_traits<1>::_Fail();
    v6 = 8 * a2;
    if ( 8 * a2 < 0x1000 )
    {
      v5 = operator new(v6);
    }
    else
    {
      if ( v6 + 39 < v6 )
        std::_Default_allocate_traits<1>::_Fail();
      v7 = operator new(v6 + 39);
      v5 = (_QWORD *)(((unsigned __int64)v7 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v5 - 1) = v7;
    }
  }
  else
  {
    v5 = 0LL;
  }
  try
  {
    std::_Uninitialized_move_al_unchecked<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>>> *,std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>>>>>(
      *a1,
      a1[1],
      v5);
  }
  catch ( ... )
  {
    std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>::deallocate(
      v9,
      (unsigned __int64)v5,
      a2);
    throw;
  }
  v10 = *a1;
  if ( *a1 )
  {
    v11 = (__int64)(a1[2] - v10) >> 3;
    if ( v11 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v11 < 0x1000 )
      {
LABEL_15:
        operator delete((void *)v10);
        goto LABEL_16;
      }
      if ( (v10 & 0x1F) == 0 )
      {
        v12 = *(_QWORD *)(v10 - 8);
        if ( v12 < v10 )
        {
          v10 = v10 - v12 - 8;
          if ( v10 <= 0x1F )
          {
            v10 = v12;
            goto LABEL_15;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v10, v8);
    __debugbreak();
  }
LABEL_16:
  *a1 = (unsigned __int64)v5;
  a1[1] = (unsigned __int64)&v5[v4];
  result = (char *)&v5[a2];
  a1[2] = (unsigned __int64)result;
  return result;
}
