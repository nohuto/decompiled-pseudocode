/*
 * XREFs of MulProcessChildRedirectionDfbSurfaces2 @ 0x1C0285C90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C027FD80 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 */

__int64 __fastcall MulProcessChildRedirectionDfbSurfaces2(struct _SURFOBJ *a1, __int64 a2)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx

  v4 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
  v5 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(v4 + 48) + 32LL) & 0x20000) != 0
    && (*(_DWORD *)(a2 + 32) & 0x20000) != 0
    && (unsigned int)IsMetaRedirectionBitmap(a1) )
  {
    bDfbSurfacesMigrated(a2, v4);
    LOBYTE(v5) = pProcessDfbSurfacesInternal(v4, 0LL) != 0;
  }
  return v5;
}
