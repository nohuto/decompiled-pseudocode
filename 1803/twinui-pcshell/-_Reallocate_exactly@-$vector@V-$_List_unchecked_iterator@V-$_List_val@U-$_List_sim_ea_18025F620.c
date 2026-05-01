/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x18025F620
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAAX_K@Z @ 0x18025F548 (-_Init@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@PEAV12@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@std@@YAPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@0@PEAV10@00AEAV?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18025C6A0 (--$_Uninitialized_move_al_unchecked@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18025C6A0.c)
 */

unsigned __int64 __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>::_Reallocate_exactly(
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rsi
  char *v5; // rax
  char *v6; // rdi
  unsigned __int64 result; // rax
  char *v8; // [rsp+60h] [rbp+8h]

  v4 = (__int64)(a1[1] - *a1) >> 3;
  v5 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(a2, 8uLL);
  v6 = v5;
  v8 = v5;
  try
  {
    std::_Uninitialized_move_al_unchecked<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>> *,std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>>(
      *a1,
      a1[1],
      v5);
  }
  catch ( ... )
  {
    std::_Deallocate(v8, a2, 8uLL);
    throw;
  }
  if ( *a1 )
    std::_Deallocate((char *)*a1, (__int64)(a1[2] - *a1) >> 3, 8uLL);
  *a1 = (unsigned __int64)v6;
  a1[1] = (unsigned __int64)&v6[8 * v4];
  result = (unsigned __int64)&v6[8 * a2];
  a1[2] = result;
  return result;
}
