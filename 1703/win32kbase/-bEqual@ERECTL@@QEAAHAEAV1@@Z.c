/*
 * XREFs of ?bEqual@ERECTL@@QEAAHAEAV1@@Z @ 0x1C0040E0C
 * Callers:
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0041050 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C00EC5C0 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ERECTL::bEqual(ERECTL *this, struct ERECTL *a2)
{
  return *(_DWORD *)this == *(_DWORD *)a2
      && *((_DWORD *)this + 2) == *((_DWORD *)a2 + 2)
      && *((_DWORD *)this + 1) == *((_DWORD *)a2 + 1)
      && *((_DWORD *)this + 3) == *((_DWORD *)a2 + 3);
}
