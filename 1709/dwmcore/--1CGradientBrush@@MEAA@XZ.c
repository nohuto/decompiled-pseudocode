/*
 * XREFs of ??1CGradientBrush@@MEAA@XZ @ 0x1800719F0
 * Callers:
 *     ??_ECLinearGradientBrush@@UEAAPEAXI@Z @ 0x180070F30 (--_ECLinearGradientBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CGradientSource@@MEAA@XZ @ 0x180071B44 (--1CGradientSource@@MEAA@XZ.c)
 *     ?_Tidy@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@IEAAXXZ @ 0x180072284 (-_Tidy@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@@IEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CGradientBrush::~CGradientBrush(CGradientBrush *this)
{
  struct CResource **v1; // rbx
  struct CResource **v3; // rbp
  void *v4; // rcx

  v1 = (struct CResource **)*((_QWORD *)this + 14);
  v3 = (struct CResource **)*((_QWORD *)this + 15);
  while ( v1 != v3 )
  {
    CResource::UnRegisterNotifierInternal(this, *v1);
    *v1++ = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 17);
  if ( v4 )
  {
    WPF::ProcessHeapImpl::Free(v4);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  std::vector<CColorGradientStop *>::_Tidy((char *)this + 112);
  CGradientSource::~CGradientSource((CGradientBrush *)((char *)this + 80));
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((CMILRefCountBase **)this + 8);
  CResource::~CResource(this);
}
