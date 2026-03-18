/*
 * XREFs of ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00557C8
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C001E590 (NtGdiCreateRectRgn.c)
 *     GreIntersectClipRect @ 0x1C0055340 (GreIntersectClipRect.c)
 *     GreSetRectRgn @ 0x1C00560A0 (GreSetRectRgn.c)
 *     GreCreateRectRgn @ 0x1C006F220 (GreCreateRectRgn.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C00F0520 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ERECTL::vOrder(ERECTL *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v1 = *(_DWORD *)this;
  v2 = *((_DWORD *)this + 2);
  if ( *(_DWORD *)this > v2 )
  {
    *(_DWORD *)this = v2;
    *((_DWORD *)this + 2) = v1;
  }
  v3 = *((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 3);
  if ( v3 > v4 )
  {
    *((_DWORD *)this + 1) = v4;
    *((_DWORD *)this + 3) = v3;
  }
}
