/*
 * XREFs of ??1CTreeData@@UEAA@XZ @ 0x1800A0350
 * Callers:
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x1800B17F0 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x180176B10 (--_ECDesktopTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECTreeData@@UEAAPEAXI@Z @ 0x180176B50 (--_ECTreeData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z @ 0x1800B2BA4 (-FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z.c)
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x1800B4ED8 (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 *     ??_ECVisualOcclusionInfo@@UEAAPEAXI@Z @ 0x1800B6720 (--_ECVisualOcclusionInfo@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::~CTreeData(CTreeData *this)
{
  CVisualOcclusionInfo *v2; // rcx
  void *(__fastcall *v3)(CVisualOcclusionInfo *__hidden, unsigned int); // rax
  __int64 *v4; // rbx
  __int64 *v5; // rcx
  __int64 **v6; // rax
  void **v7; // rdi

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
  SAFE_DELETE<CMILMatrix>((char *)this + 112);
  SAFE_DELETE<CMILMatrix>((char *)this + 152);
  SAFE_DELETE<CMILMatrix>((char *)this + 160);
  v4 = (__int64 *)*((_QWORD *)this + 16);
  while ( v4 )
  {
    if ( v4[2] )
    {
      CDrawListCacheSet::FreeContentCaches((struct CDrawListCacheSet::RenderTargetEntry *)v4);
      v5 = (__int64 *)*v4;
      if ( *(__int64 **)(*v4 + 8) != v4 || (v6 = (__int64 **)v4[1], *v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = (__int64)v6;
    }
    v7 = (void **)v4;
    v4 = (__int64 *)v4[11];
    DynArrayImpl<1>::~DynArrayImpl<1>(v7 + 3);
    WPF::ProcessHeapImpl::Free(v7);
  }
}
