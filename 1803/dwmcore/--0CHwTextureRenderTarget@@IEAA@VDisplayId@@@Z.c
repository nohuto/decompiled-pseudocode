/*
 * XREFs of ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x180078864
 * Callers:
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18000DD28 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ??0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z @ 0x1800B9E78 (--0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z.c)
 *     ?Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800C613C (-Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPix.c)
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAX_NPEAPEAV1@@Z @ 0x1801E69A4 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 * Callees:
 *     ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x180078ADC (--0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::CHwTextureRenderTarget(__int64 a1, __int64 a2)
{
  CHwSurfaceRenderTarget::CHwSurfaceRenderTarget(a1, a2);
  *(_QWORD *)a1 = &CHwTextureRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 160) = &CHwTextureRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 216) = &CHwTextureRenderTarget::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)(a1 + 224) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmap'};
  *(_QWORD *)(a1 + 232) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(a1 + 240) = &CHwTextureRenderTarget::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 256) = 0;
  return a1;
}
