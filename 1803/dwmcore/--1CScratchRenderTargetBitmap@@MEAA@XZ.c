/*
 * XREFs of ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x1800169F4
 * Callers:
 *     ??_GCScratchRenderTargetBitmap@@MEAAPEAXI@Z @ 0x180016A50 (--_GCScratchRenderTargetBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CScratchRenderTargetBitmap::~CScratchRenderTargetBitmap(CScratchRenderTargetBitmap *this)
{
  *(_QWORD *)this = &CScratchRenderTargetBitmap::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 20) = &CScratchRenderTargetBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 27) = &CScratchRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *((_QWORD *)this + 28) = &CScratchRenderTargetBitmap::`vftable'{for `ID2DBitmap'};
  *((_QWORD *)this + 29) = &CScratchRenderTargetBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 30) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  CHwTextureRenderTarget::~CHwTextureRenderTarget(this);
}
