/*
 * XREFs of ??1CTreeData@@UEAA@XZ @ 0x18004EFBC
 * Callers:
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x18004F470 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x1801601E0 (--_ECDesktopTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECTreeData@@UEAAPEAXI@Z @ 0x180160220 (--_ECTreeData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x18004F708 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     ??_ECVisualOcclusionInfo@@UEAAPEAXI@Z @ 0x18004F760 (--_ECVisualOcclusionInfo@@UEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::~CTreeData(CTreeData *this)
{
  CVisualOcclusionInfo *v2; // rcx
  void *(__fastcall *v3)(CVisualOcclusionInfo *__hidden, unsigned int); // rax
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rbx

  *(_QWORD *)this = &CTreeData::`vftable';
  v2 = (CVisualOcclusionInfo *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = **(void *(__fastcall ***)(CVisualOcclusionInfo *__hidden, unsigned int))v2;
    if ( v3 == CVisualOcclusionInfo::`vector deleting destructor' )
      CVisualOcclusionInfo::`vector deleting destructor'(v2, 1u);
    else
      v3(v2, 1u);
    *((_QWORD *)this + 4) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    WPF::ProcessHeapImpl::Free(v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 19);
  if ( v5 )
  {
    WPF::ProcessHeapImpl::Free(v5);
    *((_QWORD *)this + 19) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 20);
  if ( v6 )
  {
    WPF::ProcessHeapImpl::Free(v6);
    *((_QWORD *)this + 20) = 0LL;
  }
  CDrawListCacheSet::Invalidate((CTreeData *)((char *)this + 128));
  v7 = (void *)*((_QWORD *)this + 16);
  if ( v7 )
  {
    DynArrayImpl<1>::~DynArrayImpl<1>(v7);
    WPF::ProcessHeapImpl::Free(v7);
  }
}
