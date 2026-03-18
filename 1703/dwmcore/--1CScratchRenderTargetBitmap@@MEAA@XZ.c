/*
 * XREFs of ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x1800062E4
 * Callers:
 *     ??_GCScratchRenderTargetBitmap@@MEAAPEAXI@Z @ 0x180006340 (--_GCScratchRenderTargetBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CScratchRenderTargetBitmap::~CScratchRenderTargetBitmap(CScratchRenderTargetBitmap *this)
{
  *(_QWORD *)this = &CScratchRenderTargetBitmap::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 16) = &CScratchRenderTargetBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 22) = &CScratchRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *((_QWORD *)this + 23) = &CScratchRenderTargetBitmap::`vftable'{for `ID2DBitmap'};
  *((_QWORD *)this + 24) = &CScratchRenderTargetBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 25) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  CHwTextureRenderTarget::~CHwTextureRenderTarget(this);
}
