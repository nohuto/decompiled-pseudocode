/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@2@@Z @ 0x18002F67C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor____std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor________0___::_Insert_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor______&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor______________::_1_::catch$118 @ 0x180037DF6 (_std--_Hash_std--_Umap_traits_unsigned___int64_wistd--unique_ptr_AudioStateMonitor_wistd--defaul.c)
 * Callees:
 *     ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x180019294 (--1-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@X.c)
 */

BOOL __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::_Destroy_if_node(
        __int64 a1,
        void *a2)
{
  HANDLE ProcessHeap; // rax

  **((_QWORD **)a2 + 1) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *((_QWORD *)a2 + 1);
  --*(_QWORD *)(a1 + 16);
  wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>((__int64 *)a2 + 3);
  ProcessHeap = GetProcessHeap();
  return HeapFree(ProcessHeap, 0, a2);
}
