/*
 * XREFs of ??1CBaseRenderTarget@@MEAA@XZ @ 0x18008CE3C
 * Callers:
 *     ??1CHwSurfaceRenderTarget@@MEAA@XZ @ 0x18008EEE4 (--1CHwSurfaceRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z @ 0x1800B2BA4 (-FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z.c)
 */

void __fastcall CBaseRenderTarget::~CBaseRenderTarget(CBaseRenderTarget *this)
{
  char *v1; // rdi
  char *i; // rbx

  v1 = (char *)this + 120;
  for ( i = (char *)*((_QWORD *)this + 15); i != v1; i = *(char **)i )
  {
    *((_QWORD *)i + 2) = 0LL;
    CDrawListCacheSet::FreeContentCaches((struct CDrawListCacheSet::RenderTargetEntry *)i);
  }
}
