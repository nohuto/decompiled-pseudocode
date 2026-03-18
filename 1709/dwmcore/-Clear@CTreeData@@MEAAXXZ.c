/*
 * XREFs of ?Clear@CTreeData@@MEAAXXZ @ 0x1800A0430
 * Callers:
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x1800B17C0 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?UnLink@CVisualTreeData@@MEAAXXZ @ 0x1800B1830 (-UnLink@CVisualTreeData@@MEAAXXZ.c)
 *     ?FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z @ 0x1800B2BA4 (-FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z.c)
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x1800B4ED8 (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
