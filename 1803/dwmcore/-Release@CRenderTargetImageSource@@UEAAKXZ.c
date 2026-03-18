/*
 * XREFs of ?Release@CRenderTargetImageSource@@UEAAKXZ @ 0x180089ED0
 * Callers:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x180076FC8 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXXZ @ 0x18008BAC0 (-_Tidy@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXXZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x18008F684 (--1EffectInput@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z @ 0x1800C5718 (--$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z.c)
 *     ?Release@CRenderTargetImageSource@@W7EAAKXZ @ 0x1800DD8A0 (-Release@CRenderTargetImageSource@@W7EAAKXZ.c)
 *     ?Release@CRenderTargetImageSource@@WBI@EAAKXZ @ 0x1800DD8B0 (-Release@CRenderTargetImageSource@@WBI@EAAKXZ.c)
 *     ?Release@CRenderTargetImageSource@@WGA@EAAKXZ @ 0x1800DD8C0 (-Release@CRenderTargetImageSource@@WGA@EAAKXZ.c)
 *     ?Release@CRenderTargetImageSource@@WJI@EAAKXZ @ 0x1800DD8D0 (-Release@CRenderTargetImageSource@@WJI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetImageSource::Release(CRenderTargetImageSource *this)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)((char *)this + 8);
  v2 = _InterlockedDecrement(v1 + 2);
  if ( !v2 )
  {
    --*((_DWORD *)v1 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
