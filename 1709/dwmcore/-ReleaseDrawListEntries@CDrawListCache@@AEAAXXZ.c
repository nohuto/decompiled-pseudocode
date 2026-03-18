/*
 * XREFs of ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180023CA8
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18001E590 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800237AC (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x180083920 (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 */

void __fastcall CDrawListCache::ReleaseDrawListEntries(CDrawListCache *this, __int64 a2)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
    ReleaseInterface<CDisplay const>(*((_QWORD *)this + 4) + 8 * i, a2);
  WPF::ProcessHeapImpl::Free(*((void **)this + 4));
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
}
