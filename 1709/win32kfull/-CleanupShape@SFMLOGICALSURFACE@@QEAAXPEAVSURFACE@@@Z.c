/*
 * XREFs of ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C008EB10
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C0045C40 (GreTransferDwmStateToSpriteState.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C008F07C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C00E3F0C (GreDereferenceObject.c)
 */

void __fastcall SFMLOGICALSURFACE::CleanupShape(SFMLOGICALSURFACE *this, struct SURFACE *a2)
{
  if ( (*((_DWORD *)this + 62) & 0x20) != 0 )
  {
    if ( a2 )
      GreDereferenceObject(*((_QWORD *)a2 + 4), 1LL);
    *((_DWORD *)this + 62) &= ~0x20u;
  }
}
