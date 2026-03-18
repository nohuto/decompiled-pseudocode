/*
 * XREFs of PATHOBJ_vEnumStartClipLines @ 0x1C0295DE0
 * Callers:
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C028FF80 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C012F8A4 (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 */

void __stdcall PATHOBJ_vEnumStartClipLines(PATHOBJ *ppo, CLIPOBJ *pco, SURFOBJ *pso, LINEATTRS *pla)
{
  struct SURFACE *v7; // rax

  v7 = (struct SURFACE *)SURFOBJ_TO_SURFACE(pso);
  XCLIPOBJ::vEnumPathStart((XCLIPOBJ *)pco, ppo, v7, pla);
}
