/*
 * XREFs of ?vsoShapeSize@SFMLOGICALSURFACE@@QEAAXPEAUtagSIZE@@@Z @ 0x1C002676C
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00762B0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACE::vsoShapeSize(SFMLOGICALSURFACE *this, struct tagSIZE *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 24);
  if ( v2 )
  {
    a2->cx = *(_DWORD *)(v2 + 32);
    a2->cy = *(_DWORD *)(*((_QWORD *)this + 24) + 36LL);
  }
}
