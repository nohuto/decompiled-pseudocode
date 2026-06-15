/*
 * XREFs of ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18001A878
 * Callers:
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_ @ 0x18001A71C (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@@Z @ 0x180025B88 (-assign@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBV-$b.c)
 *     ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x180025ED8 (-_Reallocate_exactly@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@2@PEAU32@0@Z @ 0x1800264B8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Allocate(unsigned __int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax
  SIZE_T v3; // rbx
  HANDLE v4; // rax
  LPVOID v5; // rax
  LPVOID v6; // rcx
  HANDLE ProcessHeap; // rax

  if ( !a1 )
    return 0LL;
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < a1 )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  v3 = a2 * a1;
  if ( a2 * a1 < 0x1000 )
  {
    ProcessHeap = GetProcessHeap();
    result = HeapAlloc(ProcessHeap, 0, v3);
    if ( !result )
    {
      _o__invalid_parameter_noinfo_noreturn();
      JUMPOUT(0x18001A920LL);
    }
  }
  else
  {
    if ( v3 + 39 < v3 )
    {
      std::_Xbad_alloc();
      __debugbreak();
    }
    v4 = GetProcessHeap();
    v5 = HeapAlloc(v4, 0, v3 + 39);
    v6 = v5;
    if ( !v5 )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    result = (_QWORD *)(((unsigned __int64)v5 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(result - 1) = v6;
  }
  return result;
}
