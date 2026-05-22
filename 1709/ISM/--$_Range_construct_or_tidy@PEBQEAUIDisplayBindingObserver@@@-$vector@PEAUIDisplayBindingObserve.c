/*
 * XREFs of ??$_Range_construct_or_tidy@PEBQEAUIDisplayBindingObserver@@@?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@AEAAXPEBQEAUIDisplayBindingObserver@@0Uforward_iterator_tag@1@@Z @ 0x18001F720
 * Callers:
 *     ?RegisterForDisplayBindingChangeNotifications@DWMInputRouter@@UEAAJIPEAUIDisplayBindingObserver@@@Z @ 0x18001C5A0 (-RegisterForDisplayBindingChangeNotifications@DWMInputRouter@@UEAAJIPEAUIDisplayBindingObserver@.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 */

size_t __fastcall std::vector<IDisplayBindingObserver *>::_Range_construct_or_tidy<IDisplayBindingObserver * const *>(
        unsigned __int64 *a1,
        const void *a2,
        __int64 a3)
{
  size_t v5; // rsi
  unsigned __int64 v6; // rbx
  size_t result; // rax
  void *v8; // rax
  void *v9; // rax
  void *v10; // rbx

  v5 = a3 - (_QWORD)a2;
  v6 = (a3 - (__int64)a2) >> 3;
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v6 )
  {
    if ( v6 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v8 = std::_Allocate(v6, 8uLL);
    *a1 = (unsigned __int64)v8;
    a1[1] = (unsigned __int64)v8;
    v9 = (void *)*a1;
    a1[2] = *a1 + 8 * v6;
    try
    {
      v10 = v9;
      memmove(v9, a2, v5);
      result = (size_t)v10 + v5;
      a1[1] = (unsigned __int64)v10 + v5;
    }
    catch ( ... )
    {
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>(a1);
      throw;
    }
  }
  return result;
}
