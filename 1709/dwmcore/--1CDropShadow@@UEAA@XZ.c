/*
 * XREFs of ??1CDropShadow@@UEAA@XZ @ 0x18015F4C0
 * Callers:
 *     ??_GCDropShadow@@UEAAPEAXI@Z @ 0x18015F690 (--_GCDropShadow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ @ 0x180160F94 (-ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801614B0 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_compare@.c)
 *     ?clear@?$list@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXXZ @ 0x18016193C (-clear@-$list@U-$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V-$allocator@U-$pair@.c)
 */

void __fastcall CDropShadow::~CDropShadow(CDropShadow *this)
{
  char *v2; // rsi
  __int64 ***v3; // r14
  __int64 **i; // rbx
  __int64 v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &CDropShadow::`vftable'{for `CContent'};
  v2 = (char *)this + 80;
  *((_QWORD *)this + 7) = &CCompositionSkyBoxBrush::`vftable'{for `IVisualListenerInfoProvider'};
  v3 = (__int64 ***)*((_QWORD *)this + 10);
  for ( i = *v3; i != (__int64 **)v3; i = (__int64 **)*i )
  {
    CResource::UnRegisterNotifierInternal(this, (struct CResource *)i[3]);
    i[3] = 0LL;
  }
  std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::clear(v2);
  std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Init(
    v2,
    8LL);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 25));
  *((_QWORD *)this + 25) = 0LL;
  CDropShadow::ReleaseFastShadowIfInUse(this);
  v5 = *((_QWORD *)this + 29);
  if ( v5 )
  {
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 26);
  v6 = (void *)*((_QWORD *)v2 + 2);
  if ( v6 )
  {
    WPF::ProcessHeapImpl::Free(v6);
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 4) = 0LL;
  }
  std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::clear(v2);
  WPF::ProcessHeapImpl::Free(*(void **)v2);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((CMILRefCountBase **)this + 8);
  CResource::~CResource(this);
}
