/*
 * XREFs of ?clear@?$list@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@2@@std@@QEAAXXZ @ 0x180155094
 * Callers:
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x180154EC4 (--1CEffectCompilationService@@UEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x180155208 (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V_ea_180155208.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::list<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>::clear(__int64 a1)
{
  char **v1; // rax
  char *v3; // rcx
  char *v4; // rbx

  v1 = *(char ***)a1;
  v3 = **(char ***)a1;
  *v1 = (char *)v1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v3 != *(char **)a1 )
  {
    do
    {
      v4 = *(char **)v3;
      std::_Deallocate(v3, 1uLL, 0x28uLL);
      v3 = v4;
    }
    while ( v4 != *(char **)a1 );
  }
}
