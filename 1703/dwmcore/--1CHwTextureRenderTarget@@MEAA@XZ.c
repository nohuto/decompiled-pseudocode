/*
 * XREFs of ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x180049834
 * Callers:
 *     ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x1800062E4 (--1CScratchRenderTargetBitmap@@MEAA@XZ.c)
 *     ??_GCHwTextureRenderTarget@@MEAAPEAXI@Z @ 0x180049960 (--_GCHwTextureRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?SetAsEvictable@CD3DResource@@QEAAXXZ @ 0x18004BEDC (-SetAsEvictable@CD3DResource@@QEAAXXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

void __fastcall CHwTextureRenderTarget::~CHwTextureRenderTarget(CHwTextureRenderTarget *this)
{
  CD3DResource *v2; // rcx
  CMILPoolResource *v3; // rcx
  CMILCOMBase *v4; // rcx

  *(_QWORD *)this = &CHwTextureRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 16) = &CHwTextureRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 22) = &CHwTextureRenderTarget::`vftable'{for `IRenderTargetBitmap'};
  *((_QWORD *)this + 23) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmap'};
  *((_QWORD *)this + 24) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 25) = &CHwTextureRenderTarget::`vftable'{for `IDeviceResource'};
  v2 = (CD3DResource *)*((_QWORD *)this + 26);
  if ( v2 && *((_BYTE *)v2 + 77) )
    CD3DResource::SetAsEvictable(v2);
  v3 = (CMILPoolResource *)*((_QWORD *)this + 26);
  if ( v3 )
    CMILPoolResource::Release(v3);
  v4 = (CMILCOMBase *)*((_QWORD *)this + 30);
  if ( v4 )
    CMILCOMBase::InternalRelease(v4);
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
