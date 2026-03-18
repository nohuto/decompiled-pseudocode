/*
 * XREFs of ??1CHwSurfaceRenderTarget@@MEAA@XZ @ 0x18008EEE4
 * Callers:
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x1800900B8 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 *     ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x1801ADE64 (--1CHwDisplayRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1800824B8 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 */

void __fastcall CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(CHwSurfaceRenderTarget *this)
{
  ReleaseInterfaceNoNULL<CD3DSurface>(*((_QWORD *)this + 23));
  *((_QWORD *)this + 18) = &CMILCOMBase::`vftable';
  CBaseRenderTarget::~CBaseRenderTarget(this);
}
