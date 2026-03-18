/*
 * XREFs of ?_Reallocate@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800BB438
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800BB0E0 (-_Init@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhash_comp.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

char *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>>>>>>::_Reallocate(
        __int64 a1,
        unsigned __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  char *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL || (v4 = operator new(8 * a2)) == 0LL )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
  }
  v5 = *(_QWORD **)a1;
  v6 = v4;
  v7 = 0LL;
  v8 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 7LL) >> 3;
  if ( *(_QWORD *)a1 > *(_QWORD *)(a1 + 8) )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      if ( v6 )
        *v6 = *v5;
      ++v6;
      ++v5;
      ++v7;
    }
    while ( v7 != v8 );
  }
  v9 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( *(_QWORD *)a1 )
    WPF::ProcessHeapImpl::Free(*(void **)a1);
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 16) = &v4[a2];
  result = (char *)&v4[v9];
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
