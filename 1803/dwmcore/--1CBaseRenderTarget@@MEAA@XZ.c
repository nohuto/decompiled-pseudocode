/*
 * XREFs of ??1CBaseRenderTarget@@MEAA@XZ @ 0x1800C29C8
 * Callers:
 *     ??1CHwSurfaceRenderTarget@@MEAA@XZ @ 0x180078B48 (--1CHwSurfaceRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveRenderTargetMapEntry@CWindowBackgroundTreatment@@QEAAXPEAVIRenderTarget@@@Z @ 0x18000BB8C (-RemoveRenderTargetMapEntry@CWindowBackgroundTreatment@@QEAAXPEAVIRenderTarget@@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001ACC8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowBackgroundTrea.c)
 *     ?FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z @ 0x1800C1DCC (-FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@2@V32@0@Z @ 0x1800C2ACC (-erase@-$_Tree@V-$_Tset_traits@PEAVCWindowBackgroundTreatment@@U-$less@PEAVCWindowB_ea_1800C2ACC.c)
 *     ?clear@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800C2B24 (-clear@-$_Tree@V-$_Tset_traits@PEAVCWindowBackgroundTreatment@@U-$less@PEAVCWindowBackgroundTrea.c)
 */

void __fastcall CBaseRenderTarget::~CBaseRenderTarget(CBaseRenderTarget *this)
{
  char *v1; // rdi
  char *i; // rbx
  char **v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 120;
  for ( i = (char *)*((_QWORD *)this + 15); i != v1; i = *(char **)i )
  {
    *((_QWORD *)i + 2) = 0LL;
    CDrawListCacheSet::FreeContentCaches((struct CDrawListCacheSet::RenderTargetEntry *)i);
  }
  v4 = (char **)((char *)this + 144);
  v5 = (__int64 *)*((_QWORD *)this + 18);
  v6 = *v5;
  v7 = *v5;
  while ( (__int64 *)v6 != v5 )
  {
    CWindowBackgroundTreatment::RemoveRenderTargetMapEntry(*(CWindowBackgroundTreatment **)(v6 + 32), this);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CWindowBackgroundTreatment *>>,std::_Iterator_base0>::operator++(&v7);
    v6 = v7;
  }
  std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::clear((char *)this + 144);
  std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::erase(
    (char *)this + 144,
    &v7,
    *(_QWORD *)*v4,
    *v4);
  std::_Deallocate(*v4, 1uLL, 0x28uLL);
}
