/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@@Z @ 0x180132140
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x1801321B8 (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V_ea_1801321B8.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@@Z @ 0x180132244 (-erase@-$list@U-$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V-$allocator@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rax

  v4 = a1[5];
  v6 = (unsigned int)v4 & *(_DWORD *)(a3 + 16);
  if ( a1[6] <= v6 )
    v6 += -1LL - (v4 >> 1);
  v7 = a1[2];
  v8 = 2 * v6;
  if ( *(_QWORD *)(v7 + 8 * v8 + 8) == a3 )
  {
    if ( *(_QWORD *)(v7 + 8 * v8) == a3 )
    {
      *(_QWORD *)(v7 + 8 * v8) = *a1;
      v7 = a1[2];
      v9 = *a1;
    }
    else
    {
      v9 = *(_QWORD *)(a3 + 8);
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD *)(v7 + 8 * v8) == a3 )
  {
    *(_QWORD *)(v7 + 8 * v8) = *(_QWORD *)a3;
  }
  std::list<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>::erase(a1, a2, a3);
  return a2;
}
