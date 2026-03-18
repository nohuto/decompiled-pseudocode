/*
 * XREFs of ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x18015C4A0
 * Callers:
 *     ??_GCCompositionSkyBoxBrush@@UEAAPEAXI@Z @ 0x18015C510 (--_GCCompositionSkyBoxBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CCompositionSkyBoxBrush::~CCompositionSkyBoxBrush(CCompositionSkyBoxBrush *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 10) == 0LL;
  *(_QWORD *)this = &CCompositionSkyBoxBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CCompositionSkyBoxBrush::`vftable'{for `IVisualListenerInfoProvider'};
  if ( !v1 )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( *((_QWORD *)this + 11) )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
    *((_QWORD *)this + 11) = 0LL;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((CMILRefCountBase **)this + 8);
  CResource::~CResource(this);
}
