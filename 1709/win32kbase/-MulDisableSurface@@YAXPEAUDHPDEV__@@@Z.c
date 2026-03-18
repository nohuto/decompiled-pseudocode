/*
 * XREFs of ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00F1CF0
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00F2520 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     bDeleteSurface @ 0x1C001F690 (bDeleteSurface.c)
 *     EngUnlockSurface @ 0x1C004CAA0 (EngUnlockSurface.c)
 *     EngFreeMem @ 0x1C006DC60 (EngFreeMem.c)
 */

void __fastcall MulDisableSurface(struct DHPDEV__ *a1)
{
  struct HOBJ__ *v2; // rcx

  EngFreeMem(*((PVOID *)a1 + 7));
  EngUnlockSurface(*((SURFOBJ **)a1 + 6));
  v2 = (struct HOBJ__ *)*((_QWORD *)a1 + 3);
  if ( v2 )
    bDeleteSurface(v2);
}
