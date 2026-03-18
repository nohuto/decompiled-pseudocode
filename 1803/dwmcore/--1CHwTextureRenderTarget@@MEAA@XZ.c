/*
 * XREFs of ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x1800787D8
 * Callers:
 *     ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x1800169F4 (--1CScratchRenderTargetBitmap@@MEAA@XZ.c)
 *     ??_GCHwTextureRenderTarget@@MEAAPEAXI@Z @ 0x1800788F0 (--_GCHwTextureRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CHwTextureRenderTarget::~CHwTextureRenderTarget(CHwTextureRenderTarget *this)
{
  CMILPoolResource *v2; // rcx
  CMILCOMBase *v3; // rcx

  *(_QWORD *)this = &CHwTextureRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 20) = &CHwTextureRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 27) = &CHwTextureRenderTarget::`vftable'{for `IRenderTargetBitmap'};
  *((_QWORD *)this + 28) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmap'};
  *((_QWORD *)this + 29) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 30) = &CHwTextureRenderTarget::`vftable'{for `IDeviceResource'};
  v2 = (CMILPoolResource *)*((_QWORD *)this + 31);
  if ( v2 )
    CMILPoolResource::Release(v2);
  v3 = (CMILCOMBase *)*((_QWORD *)this + 35);
  if ( v3 )
    CMILCOMBase::InternalRelease(v3);
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
