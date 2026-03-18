/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800432B0
 * Callers:
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18000E3F0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AD84 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180047B70 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180147ED0 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180149428 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z @ 0x180175008 (-EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z.c)
 *     ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x180185ADC (-CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTa.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x1801B75D8 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180006588 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x180042970 (-ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U-$TMILFlag.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180079250 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        struct PixelFormatInfo *a7,
        char a8,
        struct _GUID *a9,
        struct _LUID a10,
        unsigned int a11,
        char a12,
        char a13,
        char a14,
        void **a15)
{
  unsigned int v15; // ebx
  struct _LUID v16; // rdi
  void **v18; // r13
  char v20; // r9
  struct CD3DDeviceLevel1 *v21; // r14
  char v22; // al
  int v23; // eax
  unsigned int v24; // esi
  int D3DDevice; // eax
  int v26; // eax
  int RenderTargetBitmap; // eax
  __int64 v29; // [rsp+20h] [rbp-48h]
  int v30; // [rsp+30h] [rbp-38h]
  __int64 v31; // [rsp+38h] [rbp-30h]
  unsigned int v32; // [rsp+40h] [rbp-28h]
  struct CD3DDeviceLevel1 *v33; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v36; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v37; // [rsp+C8h] [rbp+60h] BYREF

  v37 = a4;
  v36 = a3;
  v15 = a11;
  v16 = a10;
  v18 = a15;
  v20 = a5;
  v32 = a11;
  v21 = 0LL;
  v31 = (__int64)a10;
  v22 = a8;
  *a15 = 0LL;
  v33 = 0LL;
  v23 = CD3DDeviceManager::ValidateRenderTargetBitmapParams(a1, &v36, &v37, v20, v29, (__int64)a7, v22, v31, v32);
  v24 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v23, 0x4C8u);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 8), a9, v16, &v33);
    v24 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, D3DDevice, 0x4CAu);
      v21 = v33;
    }
    else
    {
      v21 = v33;
      if ( a13 )
      {
        RenderTargetBitmap = CRenderTargetBitmapCache::GetRenderTargetBitmap(
                               (struct CD3DDeviceLevel1 *)((char *)v33 + 552),
                               a2,
                               a3,
                               a4,
                               v15,
                               a7,
                               a12,
                               a14,
                               0,
                               v18);
        v24 = RenderTargetBitmap;
        if ( RenderTargetBitmap < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, RenderTargetBitmap, 0x4D5u);
      }
      else
      {
        LOBYTE(v30) = a12;
        v26 = CD3DDeviceLevel1::CreateRenderTargetBitmap(v33, a2, a3, a4, v15, a7, v30, v18);
        v24 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v26, 0x4DFu);
      }
    }
  }
  if ( v21 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v21 + 488));
  return v24;
}
