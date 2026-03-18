/*
 * XREFs of ??R?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@QEBA_NAEBUEffectDescriptionKey@@0@Z @ 0x1800C42A8
 * Callers:
 *     ??$_Insert@AEAU?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@1@@Z @ 0x1800C3FE8 (--$_Insert@AEAU-$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V-$_List_unch.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@AEBUEffectDescriptionKey@@@Z @ 0x1800C4210 (-lower_bound@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhas.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@V12@@2@AEBUEffectDescriptionKey@@@Z @ 0x1801550E0 (-equal_range@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhas.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // al
  char v4; // cl

  if ( *(_DWORD *)a2 != *(_DWORD *)a3 )
    return 1;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 8) + 128LL))(
         *(_QWORD *)(a2 + 8),
         *(_QWORD *)(a3 + 8));
  v4 = 0;
  if ( !v3 )
    return 1;
  return v4;
}
