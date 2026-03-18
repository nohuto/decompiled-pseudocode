/*
 * XREFs of ?bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z @ 0x1C00B78D4
 * Callers:
 *     ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C00B7448 (-bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCalcGradientRectOffsets(struct _GRADIENTRECTDATA *a1)
{
  int v1; // ebx
  int v3; // r11d
  int v4; // r9d
  int v5; // eax
  int v6; // esi
  int v7; // r8d
  int v8; // edx
  int v9; // r10d
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  int v13; // r10d
  unsigned int v14; // ecx
  int v15; // r8d
  int v16; // eax
  int v17; // ebx
  int v18; // eax

  v1 = *((_DWORD *)a1 + 1);
  v3 = *((_DWORD *)a1 + 5);
  v4 = v3;
  v5 = *((_DWORD *)a1 + 3);
  v6 = *((_DWORD *)a1 + 7);
  v7 = *(_DWORD *)a1;
  if ( v1 > v3 )
    v4 = *((_DWORD *)a1 + 1);
  v8 = *((_DWORD *)a1 + 4);
  v9 = *((_DWORD *)a1 + 6);
  v10 = v8;
  if ( v5 < v6 )
    v6 = v5;
  *((_DWORD *)a1 + 9) = v4;
  v11 = *((_DWORD *)a1 + 2);
  if ( v7 > v8 )
    v10 = v7;
  *((_DWORD *)a1 + 8) = v10;
  if ( v11 < v9 )
    v9 = v11;
  v12 = v6 - v4;
  v13 = v9 - v10;
  *((_DWORD *)a1 + 11) = v12;
  v14 = 0;
  *((_DWORD *)a1 + 10) = v13;
  v15 = v7 - v8;
  v16 = 0;
  if ( v15 > 0 )
    v16 = v15;
  v17 = v1 - v3;
  *((_DWORD *)a1 + 44) = v16;
  v18 = 0;
  if ( v17 > 0 )
    v18 = v17;
  *((_DWORD *)a1 + 45) = v18;
  if ( v13 > 0 && v12 > 0 )
    return 1;
  return v14;
}
