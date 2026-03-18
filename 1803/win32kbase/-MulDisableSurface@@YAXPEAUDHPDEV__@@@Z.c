/*
 * XREFs of ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00C7580
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00C7DE0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     EngUnlockSurface @ 0x1C0028470 (EngUnlockSurface.c)
 *     EngFreeMem @ 0x1C005AD60 (EngFreeMem.c)
 *     bDeleteSurface @ 0x1C0063570 (bDeleteSurface.c)
 */

void __fastcall MulDisableSurface(struct DHPDEV__ *a1)
{
  __int64 v2; // rcx

  EngFreeMem(*((PVOID *)a1 + 7));
  EngUnlockSurface(*((SURFOBJ **)a1 + 6));
  v2 = *((_QWORD *)a1 + 3);
  if ( v2 )
    bDeleteSurface(v2);
}
