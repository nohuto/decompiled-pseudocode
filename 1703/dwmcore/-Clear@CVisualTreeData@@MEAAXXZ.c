/*
 * XREFs of ?Clear@CVisualTreeData@@MEAAXXZ @ 0x18004F3E0
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800B6C30 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 * Callees:
 *     ?UnLink@CVisualTreeData@@MEAAXXZ @ 0x18004F370 (-UnLink@CVisualTreeData@@MEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x18004F708 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisualTreeData::Clear(CVisualTreeData *this)
{
  void (*v2)(void); // rax
  void *v3; // rcx
  void *v4; // rcx

  v2 = *(void (**)(void))(*(_QWORD *)this + 40LL);
  if ( (char *)v2 == (char *)CVisualTreeData::UnLink )
    CVisualTreeData::UnLink(this);
  else
    v2();
  CDrawListCacheSet::Invalidate((CVisualTreeData *)((char *)this + 128));
  v3 = (void *)*((_QWORD *)this + 19);
  if ( v3 )
  {
    WPF::ProcessHeapImpl::Free(v3);
    *((_QWORD *)this + 19) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 20);
  if ( v4 )
  {
    WPF::ProcessHeapImpl::Free(v4);
    *((_QWORD *)this + 20) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
}
