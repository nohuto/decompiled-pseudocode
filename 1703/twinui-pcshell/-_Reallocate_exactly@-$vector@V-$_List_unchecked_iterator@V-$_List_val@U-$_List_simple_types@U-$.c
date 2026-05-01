/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1800FDEEC
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAAX_K@Z @ 0x1800FDB68 (-_Init@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@std@@PEAV12@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@std@@@std@@@2@@std@@YAPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@0@PEAV10@00AEAU?$_Wrap_alloc@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@std@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180100EA8 (--$_Uninitialized_move_al_unchecked1@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>>>>>::_Reallocate_exactly(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v4; // r14
  _QWORD *v5; // rbx
  size_t v6; // rcx
  void *v7; // rax
  __int64 v8; // rcx
  char *result; // rax

  v4 = (__int64)(a1[1] - *a1) >> 3;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    {
      std::_Xbad_alloc();
      __debugbreak();
    }
    v6 = 8 * a2;
    if ( 8 * a2 < 0x1000 )
    {
      v5 = operator new(v6);
    }
    else
    {
      if ( v6 + 39 < v6 )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
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
    std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>(
      *a1,
      a1[1],
      v5);
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
      v8,
      v5,
      a2);
    throw;
  }
  if ( *a1 )
    std::_Deallocate((char *)*a1, (__int64)(a1[2] - *a1) >> 3, 8uLL);
  *a1 = v5;
  a1[1] = &v5[v4];
  result = (char *)&v5[a2];
  a1[2] = result;
  return result;
}
