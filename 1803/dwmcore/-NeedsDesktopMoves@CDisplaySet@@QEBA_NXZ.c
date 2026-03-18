/*
 * XREFs of ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800B6B24
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800B7868 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 */

char __fastcall CDisplaySet::NeedsDesktopMoves(CDisplaySet *this)
{
  char v1; // dl
  unsigned int v2; // r8d
  __int64 v3; // r10
  int v4; // r8d
  unsigned int v5; // r9d

  v1 = 0;
  v2 = 0;
  if ( *((_DWORD *)this + 18) )
  {
    v3 = *((_QWORD *)this + 6);
    while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v3 + 8LL * v2)) )
    {
      v2 = v4 + 1;
      if ( v2 >= v5 )
        return v1;
    }
    return 1;
  }
  return v1;
}
