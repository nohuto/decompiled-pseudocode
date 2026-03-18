/*
 * XREFs of ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x18001A460
 * Callers:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AE28 (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AF40 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 * Callees:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x18001ACC8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800823B4 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::ValidateRenderTargetBitmapParams(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3,
        char a4,
        int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        unsigned int a9)
{
  int PixelFormatColorSpace; // eax
  unsigned int v11; // edi
  unsigned int v13; // [rsp+20h] [rbp-18h]

  if ( a2 && *a2 > 0x1000000u || a3 && *a3 > 0x1000000u )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x424u);
  }
  else
  {
    PixelFormatColorSpace = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(a1, a8, a9);
    v11 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v13 = 1066;
      goto LABEL_14;
    }
    if ( a7 )
    {
      if ( (a4 & 1) != 0 && *(_DWORD *)a6 == 24 )
      {
        *(_DWORD *)a6 = 10;
        PixelFormatColorSpace = GetPixelFormatColorSpace(
                                  DXGI_FORMAT_R16G16B16A16_FLOAT,
                                  (enum DXGI_COLOR_SPACE_TYPE *)(a6 + 8));
        v11 = PixelFormatColorSpace;
        if ( PixelFormatColorSpace < 0 )
        {
          v13 = 1123;
LABEL_14:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, PixelFormatColorSpace, v13);
        }
      }
    }
  }
  return v11;
}
