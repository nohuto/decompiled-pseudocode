/*
 * XREFs of ?bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C0131384
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C01306B4 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bIsTriangleInBounds(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIANGLEDATA *a4)
{
  LONG x; // r11d
  LONG v5; // r10d
  LONG y; // eax
  LONG v7; // ecx
  LONG v8; // edx
  LONG v9; // eax

  x = a2->x;
  v5 = a2->x;
  if ( a1->x < a2->x )
    v5 = a1->x;
  if ( a1->x > x )
    x = a1->x;
  y = a1->y;
  v8 = a2->y;
  v7 = v8;
  if ( y < v8 )
    v8 = y;
  if ( y > v7 )
    v7 = y;
  if ( v5 >= a3->x )
    v5 = a3->x;
  if ( x <= a3->x )
    x = a3->x;
  v9 = a3->y;
  if ( v8 >= v9 )
    v8 = a3->y;
  if ( v7 <= v9 )
    v7 = a3->y;
  return v5 < *((_DWORD *)a4 + 2) && x > *(_DWORD *)a4 && v8 < *((_DWORD *)a4 + 3) && v7 > *((_DWORD *)a4 + 1);
}
