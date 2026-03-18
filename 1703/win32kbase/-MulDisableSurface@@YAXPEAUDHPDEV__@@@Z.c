/*
 * XREFs of ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00EF040
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00EF860 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     EngUnlockSurface @ 0x1C0036F00 (EngUnlockSurface.c)
 *     bDeleteSurface @ 0x1C003F890 (bDeleteSurface.c)
 *     EngFreeMem @ 0x1C0058530 (EngFreeMem.c)
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
