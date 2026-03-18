/*
 * XREFs of ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x1800098A0
 * Callers:
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180009930 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListCache::ReleaseDrawListEntries(CDrawListCache *this)
{
  __int64 i; // rdi
  __int64 v3; // r14
  CMILRefCountBase *v4; // rcx
  void (*v5)(void); // rax
  void *v6; // r8

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + 4);
    v4 = *(CMILRefCountBase **)(v3 + 8 * i);
    if ( v4 )
    {
      v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
      if ( (char *)v5 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v4);
      else
        v5();
      *(_QWORD *)(v3 + 8 * i) = 0LL;
    }
  }
  v6 = (void *)*((_QWORD *)this + 4);
  if ( v6 )
    HeapFree(WPF::g_processHeap, 0, v6);
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
}
