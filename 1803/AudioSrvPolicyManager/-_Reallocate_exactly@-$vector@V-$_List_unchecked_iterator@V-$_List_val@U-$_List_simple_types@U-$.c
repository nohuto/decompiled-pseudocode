/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x180018E9C
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180019204 (-_Init@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 * Callees:
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@PEAV12@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@@2@@std@@YAPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@0@PEAV10@00AEAV?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180018E54 (--$_Uninitialized_move_al_unchecked@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180019750 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

unsigned __int64 __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>>::_Reallocate_exactly(
        unsigned __int64 *a1,
        __int64 a2)
{
  __int64 v4; // r14
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  HANDLE ProcessHeap; // rax
  unsigned __int64 result; // rax
  _QWORD *v13; // [rsp+60h] [rbp+8h]

  v4 = (__int64)(a1[1] - *a1) >> 3;
  v5 = (_QWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(a2);
  v6 = v5;
  v13 = v5;
  try
  {
    std::_Uninitialized_move_al_unchecked<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>> *,std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>>>(
      *a1,
      a1[1],
      v5);
  }
  catch ( ... )
  {
    std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>::deallocate(
      v7,
      v13,
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
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, (LPVOID)v8);
        goto LABEL_10;
      }
      if ( (v8 & 0x1F) == 0 )
      {
        v10 = *(_QWORD *)(v8 - 8);
        if ( v10 < v8 && v8 - v10 - 8 <= 0x1F )
        {
          v8 = *(_QWORD *)(v8 - 8);
          goto LABEL_9;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn();
    JUMPOUT(0x180018F7FLL);
  }
LABEL_10:
  *a1 = (unsigned __int64)v6;
  a1[1] = (unsigned __int64)&v6[v4];
  result = (unsigned __int64)&v6[a2];
  a1[2] = result;
  return result;
}
