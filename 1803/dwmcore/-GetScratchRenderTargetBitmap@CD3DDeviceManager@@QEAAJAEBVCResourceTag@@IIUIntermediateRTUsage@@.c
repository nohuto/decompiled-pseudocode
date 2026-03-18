/*
 * XREFs of ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180017E6C
 * Callers:
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002472C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180170ADC (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x180088F70 (-ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U-$TMILFlag.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800B9A38 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 */

__int64 __fastcall CD3DDeviceManager::GetScratchRenderTargetBitmap(
        CD3DDeviceManager *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        struct _LUID a9,
        int a10,
        char a11,
        char a12,
        _QWORD *a13)
{
  int v13; // edi
  struct _LUID v14; // rbx
  _QWORD *v16; // r12
  __int64 v18; // r13
  int v19; // r9d
  struct CD3DDeviceLevel1 *v20; // rbp
  int v21; // eax
  unsigned int v22; // esi
  int D3DDevice; // eax
  int RenderTargetBitmap; // eax
  char v26; // [rsp+30h] [rbp-78h]
  DWORD LowPart; // [rsp+38h] [rbp-70h]
  int v28; // [rsp+40h] [rbp-68h]
  struct CD3DDeviceLevel1 *v29; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v32; // [rsp+C0h] [rbp+18h] BYREF
  unsigned int v33; // [rsp+C8h] [rbp+20h] BYREF

  v33 = a4;
  v32 = a3;
  v13 = a10;
  v14 = a9;
  v16 = a13;
  v18 = a7;
  v19 = a5;
  v20 = 0LL;
  v28 = a10;
  *a13 = 0LL;
  LowPart = v14.LowPart;
  v29 = 0LL;
  v21 = CD3DDeviceManager::ValidateRenderTargetBitmapParams((_DWORD)a1, (unsigned int)&v32, (unsigned int)&v33, v19);
  v22 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v21, 0x553u);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice(a1, v14, &v29);
    v22 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, D3DDevice, 0x555u);
      v20 = v29;
    }
    else
    {
      v20 = v29;
      LOBYTE(v28) = 1;
      LOBYTE(LowPart) = a12;
      v26 = a11;
      RenderTargetBitmap = CRenderTargetBitmapCache::GetRenderTargetBitmap(
                             (char *)v29 + 536,
                             a2,
                             a3,
                             a4,
                             v13,
                             v18,
                             v26,
                             LowPart,
                             v28,
                             v16);
      v22 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, RenderTargetBitmap, 0x55Eu);
    }
  }
  if ( v20 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v20 + 472));
  return v22;
}
