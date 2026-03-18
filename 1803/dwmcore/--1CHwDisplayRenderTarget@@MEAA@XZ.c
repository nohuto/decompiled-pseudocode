/*
 * XREFs of ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x1800D864C
 * Callers:
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1800D7D7C (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::~CHwDisplayRenderTarget(CHwDisplayRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 31);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *((_QWORD *)this + 28);
  if ( v3 )
    CMILPoolResource::Release((CMILPoolResource *)(v3 + 472));
  FastRegion::CRegion::FreeMemory((void **)this + 43);
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
