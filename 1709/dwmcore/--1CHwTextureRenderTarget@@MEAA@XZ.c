/*
 * XREFs of ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x1800900B8
 * Callers:
 *     ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x18008D258 (--1CScratchRenderTargetBitmap@@MEAA@XZ.c)
 *     ??_GCHwTextureRenderTarget@@MEAAPEAXI@Z @ 0x180090170 (--_GCHwTextureRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CHwTextureRenderTarget::~CHwTextureRenderTarget(CHwTextureRenderTarget *this)
{
  CMILPoolResource *v2; // rcx
  CMILCOMBase *v3; // rcx

  *(_QWORD *)this = &CHwTextureRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 18) = &CHwTextureRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 24) = &CHwTextureRenderTarget::`vftable'{for `IRenderTargetBitmap'};
  *((_QWORD *)this + 25) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmap'};
  *((_QWORD *)this + 26) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 27) = &CHwTextureRenderTarget::`vftable'{for `IDeviceResource'};
  v2 = (CMILPoolResource *)*((_QWORD *)this + 28);
  if ( v2 )
    CMILPoolResource::Release(v2);
  v3 = (CMILCOMBase *)*((_QWORD *)this + 32);
  if ( v3 )
    CMILCOMBase::InternalRelease(v3);
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
