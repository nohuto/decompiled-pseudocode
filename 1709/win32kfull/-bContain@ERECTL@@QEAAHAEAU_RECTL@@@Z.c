/*
 * XREFs of ?bContain@ERECTL@@QEAAHAEAU_RECTL@@@Z @ 0x1C012D854
 * Callers:
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C012D6E0 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ERECTL::bContain(ERECTL *this, struct _RECTL *a2)
{
  return *(_DWORD *)this <= a2->left
      && *((_DWORD *)this + 2) >= a2->right
      && *((_DWORD *)this + 1) <= a2->top
      && *((_DWORD *)this + 3) >= a2->bottom;
}
