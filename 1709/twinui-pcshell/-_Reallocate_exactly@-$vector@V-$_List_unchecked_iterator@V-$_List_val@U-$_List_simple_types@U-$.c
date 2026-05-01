/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1800E6058
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAAX_K@Z @ 0x1800E5D9C (-_Init@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@PEAV12@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@@2@@std@@YAPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@0@PEAV10@00AEAU?$_Wrap_alloc@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800E615C (--$_Uninitialized_move_al_unchecked@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>>>>>::_Reallocate_exactly(
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  _QWORD *result; // rax
  _QWORD *v12; // [rsp+60h] [rbp+8h]

  v4 = (__int64)(a1[1] - *a1) >> 3;
  v5 = std::_Allocate(a2, 8uLL);
  v6 = v5;
  v12 = v5;
  try
  {
    std::_Uninitialized_move_al_unchecked<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>>>(
      *a1,
      a1[1],
      v5);
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
      v7,
      v12,
      a2);
    throw;
  }
  v8 = *a1;
  if ( *a1 )
  {
    v9 = (__int64)(a1[2] - v8) >> 3;
    if ( v9 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v9 < 0x1000 )
      {
LABEL_9:
        operator delete((void *)v8);
        goto LABEL_11;
      }
      if ( (v8 & 0x1F) == 0 )
      {
        v10 = *(_QWORD *)(v8 - 8);
        if ( v10 < v8 )
        {
          v8 = v8 - v10 - 8;
          if ( v8 <= 0x1F )
          {
            v8 = v10;
            goto LABEL_9;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v8);
    __debugbreak();
  }
LABEL_11:
  *a1 = (unsigned __int64)v6;
  a1[1] = (unsigned __int64)&v6[v4];
  result = &v6[a2];
  a1[2] = (unsigned __int64)result;
  return result;
}
