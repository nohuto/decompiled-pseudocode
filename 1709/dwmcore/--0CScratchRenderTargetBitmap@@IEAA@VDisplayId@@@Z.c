/*
 * XREFs of ??0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z @ 0x18008D2B0
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800BC078 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 * Callees:
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800901A0 (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::CScratchRenderTargetBitmap(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 result; // rax

  CHwTextureRenderTarget::CHwTextureRenderTarget(a1, a2);
  *(_QWORD *)(v2 + 264) = 0LL;
  *(_QWORD *)v2 = &CScratchRenderTargetBitmap::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(v2 + 144) = &CScratchRenderTargetBitmap::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(v2 + 192) = &CScratchRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)(v2 + 200) = &CScratchRenderTargetBitmap::`vftable'{for `ID2DBitmap'};
  *(_QWORD *)(v2 + 208) = &CScratchRenderTargetBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(v2 + 216) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  result = v2;
  *(_WORD *)(v2 + 272) = 256;
  return result;
}
