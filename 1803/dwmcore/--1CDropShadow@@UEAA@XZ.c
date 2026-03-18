/*
 * XREFs of ??1CDropShadow@@UEAA@XZ @ 0x180188D40
 * Callers:
 *     ??_GCDropShadow@@UEAAPEAXI@Z @ 0x180188E50 (--_GCDropShadow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800357C4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x18016BDE4 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_compare@.c)
 *     ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x180188E14 (--1ShadowIntermediates@CDropShadow@@QEAA@XZ.c)
 *     ?ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ @ 0x18018A8FC (-ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ.c)
 *     ?clear@?$list@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXXZ @ 0x18018AE98 (-clear@-$list@U-$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V-$allocator@U-$pair@.c)
 */

void __fastcall CDropShadow::~CDropShadow(CDropShadow *this)
{
  __int64 v2; // rcx
  char *v3; // rcx

  *(_QWORD *)this = &CDropShadow::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CProjectedShadow::`vftable'{for `IVisualListenerInfoProvider'};
  std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::clear((char *)this + 80);
  std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Init(
    (__int64)this + 72,
    8LL);
  CDropShadow::ReleaseFastShadowIfInUse(this);
  v2 = *((_QWORD *)this + 29);
  if ( v2 )
  {
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  CDropShadow::ShadowIntermediates::~ShadowIntermediates((CDropShadow *)((char *)this + 192));
  v3 = (char *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    std::_Deallocate(v3, (__int64)(*((_QWORD *)this + 14) - (_QWORD)v3) >> 3, 8uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::clear((char *)this + 80);
  std::_Deallocate(*((char **)this + 10), 1uLL, 0x40uLL);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
  CResource::~CResource(this);
}
