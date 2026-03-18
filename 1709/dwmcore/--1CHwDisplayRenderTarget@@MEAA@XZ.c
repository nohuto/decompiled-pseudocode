/*
 * XREFs of ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x1801ADE64
 * Callers:
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1801ADEB8 (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::~CHwDisplayRenderTarget(CHwDisplayRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 29);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
    CMILPoolResource::Release((CMILPoolResource *)(v3 + 472));
  FastRegion::CRegion::FreeMemory((void **)this + 41);
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
