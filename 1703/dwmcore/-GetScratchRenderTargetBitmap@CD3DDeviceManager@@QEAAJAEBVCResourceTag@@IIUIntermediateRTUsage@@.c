/*
 * XREFs of ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AF94
 * Callers:
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AD84 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18014A044 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180006588 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x180042970 (-ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U-$TMILFlag.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::GetScratchRenderTargetBitmap(
        CD3DDeviceManager *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        struct PixelFormatInfo *a7,
        __int64 a8,
        struct _GUID *a9,
        struct _LUID a10,
        unsigned int a11,
        bool a12,
        bool a13,
        void **a14)
{
  unsigned int v14; // edi
  struct _LUID v15; // rbx
  void **v17; // r12
  struct PixelFormatInfo *v19; // r13
  int v20; // r9d
  struct CD3DDeviceLevel1 *v21; // rbp
  int v22; // eax
  unsigned int v23; // esi
  int D3DDevice; // eax
  int RenderTargetBitmap; // eax
  struct CD3DDeviceLevel1 *v27; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+C0h] [rbp+18h] BYREF
  unsigned int v31; // [rsp+C8h] [rbp+20h] BYREF

  v31 = a4;
  v30 = a3;
  v14 = a11;
  v15 = a10;
  v17 = a14;
  v19 = a7;
  v20 = a5;
  v21 = 0LL;
  *a14 = 0LL;
  v27 = 0LL;
  v22 = CD3DDeviceManager::ValidateRenderTargetBitmapParams((_DWORD)a1, (unsigned int)&v30, (unsigned int)&v31, v20);
  v23 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v22, 0x54Eu);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice(a1, a9, v15, &v27);
    v23 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, D3DDevice, 0x550u);
      v21 = v27;
    }
    else
    {
      v21 = v27;
      RenderTargetBitmap = CRenderTargetBitmapCache::GetRenderTargetBitmap(
                             (struct CD3DDeviceLevel1 *)((char *)v27 + 552),
                             a2,
                             a3,
                             a4,
                             v14,
                             v19,
                             a12,
                             a13,
                             1,
                             v17);
      v23 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, RenderTargetBitmap, 0x559u);
    }
  }
  if ( v21 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v21 + 488));
  return v23;
}
