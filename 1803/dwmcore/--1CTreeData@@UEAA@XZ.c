/*
 * XREFs of ??1CTreeData@@UEAA@XZ @ 0x180029E10
 * Callers:
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x180029520 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x1801A6F70 (--_ECDesktopTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECTreeData@@UEAAPEAXI@Z @ 0x1801A6FC0 (--_ECTreeData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_ECVisualOcclusionInfo@@UEAAPEAXI@Z @ 0x1800292F0 (--_ECVisualOcclusionInfo@@UEAAPEAXI@Z.c)
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x18002A324 (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z @ 0x1800C1DCC (-FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::~CTreeData(CTreeData *this)
{
  CVisualOcclusionInfo *v2; // rcx
  CVisualOcclusionInfo *(__fastcall *v3)(CVisualOcclusionInfo *, char); // rax
  char *v4; // rbx
  __int64 v5; // rcx
  char **v6; // rax
  char *v7; // rdi

  *(_QWORD *)this = &CTreeData::`vftable';
  v2 = (CVisualOcclusionInfo *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = **(CVisualOcclusionInfo *(__fastcall ***)(CVisualOcclusionInfo *, char))v2;
    if ( v3 == CVisualOcclusionInfo::`vector deleting destructor' )
      CVisualOcclusionInfo::`vector deleting destructor'(v2, 1);
    else
      v3(v2, 1);
    *((_QWORD *)this + 4) = 0LL;
  }
  SAFE_DELETE<CMILMatrix>((char *)this + 112);
  SAFE_DELETE<CMILMatrix>((char *)this + 152);
  SAFE_DELETE<CMILMatrix>((char *)this + 160);
  v4 = (char *)*((_QWORD *)this + 16);
  while ( v4 )
  {
    if ( *((_QWORD *)v4 + 2) )
    {
      CDrawListCacheSet::FreeContentCaches((struct CDrawListCacheSet::RenderTargetEntry *)v4);
      v5 = *(_QWORD *)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = (char **)*((_QWORD *)v4 + 1), *v6 != v4) )
        __fastfail(3u);
      *v6 = (char *)v5;
      *(_QWORD *)(v5 + 8) = v6;
    }
    v7 = v4;
    v4 = (char *)*((_QWORD *)v4 + 11);
    DynArrayImpl<0>::~DynArrayImpl<0>(v7 + 24);
    operator delete(v7, 0x60uLL);
  }
}
