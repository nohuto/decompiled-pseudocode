/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180089BC0
 * Callers:
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002472C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18006CA58 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAURenderTargetBitmapInfo@1@@Z @ 0x1800B4578 (-CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRect.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18015D484 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x18016F9D0 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1801AC424 (-EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x1801C589C (-CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTa.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x180216250 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800765E0 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x180088F70 (-ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U-$TMILFlag.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800B9A38 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        struct _LUID a9,
        int a10,
        char a11,
        char a12,
        char a13,
        _QWORD *a14)
{
  int v14; // ebx
  struct _LUID v15; // rdi
  _QWORD *v17; // r13
  char v19; // r9
  struct CD3DDeviceLevel1 *v20; // r14
  char v21; // al
  int v22; // eax
  unsigned int v23; // esi
  int D3DDevice; // eax
  int RenderTargetBitmap; // eax
  int v27; // eax
  __int64 v28; // [rsp+20h] [rbp-48h]
  int v29; // [rsp+30h] [rbp-38h]
  __int64 v30; // [rsp+38h] [rbp-30h]
  int v31; // [rsp+38h] [rbp-30h]
  unsigned int v32; // [rsp+40h] [rbp-28h]
  int v33; // [rsp+40h] [rbp-28h]
  struct CD3DDeviceLevel1 *v34; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v37; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v38; // [rsp+C8h] [rbp+60h] BYREF

  v38 = a4;
  v37 = a3;
  v14 = a10;
  v15 = a9;
  v17 = a14;
  v19 = a5;
  v32 = a10;
  v20 = 0LL;
  v30 = (__int64)a9;
  v21 = a8;
  *a14 = 0LL;
  v34 = 0LL;
  v22 = CD3DDeviceManager::ValidateRenderTargetBitmapParams(a1, &v37, &v38, v19, v28, a7, v21, v30, v32);
  v23 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v22, 0x4CFu);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 8), v15, &v34);
    v23 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, D3DDevice, 0x4D1u);
      v20 = v34;
    }
    else
    {
      v20 = v34;
      if ( a12 )
      {
        LOBYTE(v33) = 0;
        LOBYTE(v31) = a13;
        LOBYTE(v29) = a11;
        RenderTargetBitmap = CRenderTargetBitmapCache::GetRenderTargetBitmap(
                               (char *)v34 + 536,
                               a2,
                               a3,
                               a4,
                               v14,
                               a7,
                               v29,
                               v31,
                               v33,
                               v17);
        v23 = RenderTargetBitmap;
        if ( RenderTargetBitmap < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, RenderTargetBitmap, 0x4DCu);
      }
      else
      {
        v27 = CD3DDeviceLevel1::CreateRenderTargetBitmap((__int64)v34, a2, a3, a4, v14, a7, a11, v17);
        v23 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v27, 0x4E6u);
      }
    }
  }
  if ( v20 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v20 + 472));
  return v23;
}
