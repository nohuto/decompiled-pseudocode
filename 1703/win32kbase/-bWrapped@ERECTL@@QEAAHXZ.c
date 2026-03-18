/*
 * XREFs of ?bWrapped@ERECTL@@QEAAHXZ @ 0x1C0040DEC
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A6E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C00EC5C0 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ERECTL::bWrapped(ERECTL *this)
{
  return *(_DWORD *)this >= *((_DWORD *)this + 2) || *((_DWORD *)this + 1) >= *((_DWORD *)this + 3);
}
