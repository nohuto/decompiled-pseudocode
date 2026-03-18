/*
 * XREFs of ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00557F0
 * Callers:
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0055D30 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C00F0520 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ERECTL::operator*=(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  if ( *a2 > *a1 )
    *a1 = *a2;
  v2 = a2[1];
  if ( v2 > a1[1] )
    a1[1] = v2;
  v3 = a2[2];
  if ( v3 < a1[2] )
    a1[2] = v3;
  v4 = a2[3];
  if ( v4 < a1[3] )
    a1[3] = v4;
  v5 = a1[2];
  if ( v5 < *a1 )
  {
    *a1 = v5;
  }
  else
  {
    v6 = a1[3];
    if ( v6 < a1[1] )
      a1[1] = v6;
  }
  return a1;
}
