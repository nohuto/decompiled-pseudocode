/*
 * XREFs of ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C008EB4C
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C0045C40 (GreTransferDwmStateToSpriteState.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C008F07C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreReferenceObject @ 0x1C010FDB4 (GreReferenceObject.c)
 */

struct SURFACE *__fastcall SFMLOGICALSURFACE::OwnsSurfaceCleanup(SFMLOGICALSURFACE *this, HLSURF a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rax

  v3 = 0LL;
  v4 = *((_QWORD *)this + 24);
  if ( v4 && (*((_DWORD *)this + 62) & 0x20) == 0 )
  {
    v6 = SURFOBJ_TO_SURFACE_NOT_NULL(v4);
    *((_DWORD *)this + 62) |= 0x20u;
    v3 = v6;
    GreReferenceObject(*(_QWORD *)(v6 + 32));
  }
  return (struct SURFACE *)v3;
}
