/*
 * XREFs of ?deallocate@?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@@std@@QEAAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@_K@Z @ 0x180019390
 * Callers:
 *     _std::vector_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState____________std::allocator_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState_______________::_Reallocate_exactly_::_1_::catch$54 @ 0x180037295 (_std--vector_std--_List_unchecked_iterator_std--_List_val_std--_List_simple_types_std--pair_std-.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>::deallocate(
        __int64 a1,
        void *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  void *v4; // rbx
  unsigned __int64 v5; // rax
  HANDLE ProcessHeap; // rax

  v4 = a2;
  if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( 8 * a3 >= 0x1000 )
  {
    if ( ((unsigned __int8)a2 & 0x1F) == 0 )
    {
      v5 = *((_QWORD *)a2 - 1);
      if ( v5 < (unsigned __int64)a2 && (unsigned __int64)a2 - v5 - 8 <= 0x1F )
      {
        v4 = (void *)*((_QWORD *)a2 - 1);
        goto LABEL_7;
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1, a2, a3, a4);
    JUMPOUT(0x1800193F5LL);
  }
LABEL_7:
  ProcessHeap = GetProcessHeap();
  return HeapFree(ProcessHeap, 0, v4);
}
