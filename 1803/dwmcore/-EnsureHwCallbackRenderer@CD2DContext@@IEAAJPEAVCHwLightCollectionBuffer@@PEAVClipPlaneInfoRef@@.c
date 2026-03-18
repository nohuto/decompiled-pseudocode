/*
 * XREFs of ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18013E050
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18013E050 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180095C2C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallbackRenderer@@@Z @ 0x1800BF658 (-GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallba.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetLightingCollection@CHWCallbackRenderer@@QEAAXPEAVCHwLightCollectionBuffer@@I@Z @ 0x18013DCAC (-SetLightingCollection@CHWCallbackRenderer@@QEAAXPEAVCHwLightCollectionBuffer@@I@Z.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18013E050 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@.c)
 *     ??4?$ComPtr@VCPolygon@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPolygon@@@Z @ 0x1801AE470 (--4-$ComPtr@VCPolygon@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CD2DContext::EnsureHwCallbackRenderer(
        CD2DContext *this,
        struct CHwLightCollectionBuffer *a2,
        struct ClipPlaneInfoRef *a3)
{
  struct CHWCallbackRenderer **v3; // rsi
  struct ClipPlaneInfoRef **v5; // rcx
  unsigned int v6; // ebx
  struct CD3DDeviceLevel1 *v8; // rax
  int NextHWCallbackRenderer; // eax
  int v10; // eax

  v3 = (struct CHWCallbackRenderer **)((char *)this + 448);
  v5 = (struct ClipPlaneInfoRef **)*((_QWORD *)this + 56);
  v6 = 0;
  if ( v5 )
  {
    if ( v5[10] == a3 )
    {
      CHWCallbackRenderer::SetLightingCollection((CHWCallbackRenderer *)v5, a2, *((_DWORD *)this + 8));
    }
    else
    {
      CD2DContext::FlushDrawList(this);
      v10 = CD2DContext::EnsureHwCallbackRenderer(this, a2, a3);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x2B0u);
    }
  }
  else
  {
    v8 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 160LL))(this);
    NextHWCallbackRenderer = CCallbackRendererManager::GetNextHWCallbackRenderer(
                               (CD2DContext *)((char *)this + 8),
                               v8,
                               v3);
    v6 = NextHWCallbackRenderer;
    if ( NextHWCallbackRenderer < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NextHWCallbackRenderer, 0x2A3u);
    }
    else
    {
      CHWCallbackRenderer::SetLightingCollection(*v3, a2, *((_DWORD *)this + 8));
      Microsoft::WRL::ComPtr<CPolygon>::operator=((char *)*v3 + 80, a3);
    }
  }
  return v6;
}
