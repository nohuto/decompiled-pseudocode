/*
 * XREFs of ??1CHwSurfaceRenderTarget@@MEAA@XZ @ 0x180078B48
 * Callers:
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x1800787D8 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 *     ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x1800D864C (--1CHwDisplayRenderTarget@@MEAA@XZ.c)
 *     ??1CHwCompSwapChainTarget@@MEAA@XZ @ 0x1801E4458 (--1CHwCompSwapChainTarget@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(CHwSurfaceRenderTarget *this)
{
  __int64 v2; // rcx

  ReleaseInterfaceNoNULL<CD3DSurface>(*((_QWORD *)this + 25));
  v2 = *((_QWORD *)this + 26);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *((_QWORD *)this + 20) = &CMILCOMBase::`vftable';
  CBaseRenderTarget::~CBaseRenderTarget(this);
}
