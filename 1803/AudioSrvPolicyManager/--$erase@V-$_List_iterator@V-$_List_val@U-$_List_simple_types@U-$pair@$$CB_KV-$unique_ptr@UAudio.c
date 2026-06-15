/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@1@V21@@Z @ 0x18002F394
 * Callers:
 *     ?UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z @ 0x18002F0BC (-UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor____std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor________0___::_Insert_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor______&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor______________::_1_::catch$117 @ 0x180037E1D (_std--_Hash_std--_Umap_traits_unsigned___int64_wistd--unique_ptr_AudioStateMonitor__ea_180037E1D.c)
 * Callees:
 *     ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x180019294 (--1-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@X.c)
 */

__int64 *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>,void>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  HANDLE ProcessHeap; // rax

  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  do
  {
    v8 = *((unsigned __int8 *)a3 + v6 + 16);
    ++v6;
    v7 = 0x100000001B3LL * (v8 ^ v7);
  }
  while ( v6 < 8 );
  v9 = v7 & a1[6];
  v10 = a1[3];
  v11 = 2 * v9;
  if ( *(__int64 **)(v10 + 8 * v11 + 8) == a3 )
  {
    if ( *(__int64 **)(v10 + 8 * v11) == a3 )
    {
      *(_QWORD *)(v10 + 8 * v11) = a1[1];
      v10 = a1[3];
      v12 = a1[1];
    }
    else
    {
      v12 = a3[1];
    }
    *(_QWORD *)(v10 + 8 * v11 + 8) = v12;
  }
  else if ( *(__int64 **)(v10 + 8 * v11) == a3 )
  {
    *(_QWORD *)(v10 + 8 * v11) = *a3;
  }
  v13 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --a1[2];
  wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>(a3 + 3);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a3);
  *a2 = v13;
  return a2;
}
