/*
 * XREFs of ?Clear@CTreeData@@MEAAXXZ @ 0x180029EF0
 * Callers:
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x1800294F0 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?UnLink@CVisualTreeData@@MEAAXXZ @ 0x180029560 (-UnLink@CVisualTreeData@@MEAAXXZ.c)
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x18002A324 (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 *     ?FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z @ 0x1800C1DCC (-FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::Clear(CTreeData *this)
{
  void (*v2)(void); // rax
  __int64 i; // rbx

  v2 = *(void (**)(void))(*(_QWORD *)this + 40LL);
  if ( (char *)v2 == (char *)CVisualTreeData::UnLink )
    CVisualTreeData::UnLink(this);
  else
    v2();
  for ( i = *((_QWORD *)this + 16); i; i = *(_QWORD *)(i + 88) )
  {
    if ( *(_QWORD *)(i + 16) )
      CDrawListCacheSet::FreeContentCaches((struct CDrawListCacheSet::RenderTargetEntry *)i);
  }
  SAFE_DELETE<CMILMatrix>((char *)this + 152);
  SAFE_DELETE<CMILMatrix>((char *)this + 160);
  *((_QWORD *)this + 3) = 0LL;
}
