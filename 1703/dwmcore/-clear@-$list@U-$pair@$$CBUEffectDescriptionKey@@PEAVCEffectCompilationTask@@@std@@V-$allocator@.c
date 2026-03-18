/*
 * XREFs of ?clear@?$list@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@2@@std@@QEAAXXZ @ 0x180145690
 * Callers:
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x180145508 (--1CEffectCompilationService@@UEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x180145824 (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V_ea_180145824.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall std::list<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>::clear(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = *(_QWORD **)a1;
  v3 = **(_QWORD ***)a1;
  *v1 = v1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v3 != *(_QWORD **)a1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      WPF::ProcessHeapImpl::Free(v3);
      v3 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
}
