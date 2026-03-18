/*
 * XREFs of ?bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z @ 0x1C00AC028
 * Callers:
 *     ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C00ABBD4 (-bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCalcGradientRectOffsets(struct _GRADIENTRECTDATA *a1)
{
  int v1; // ebx
  int v3; // r11d
  int v4; // r9d
  int v5; // esi
  int v6; // r8d
  int v7; // edx
  int v8; // r10d
  int v9; // ecx
  bool v10; // cc
  int v11; // esi
  int v12; // r10d
  unsigned int v13; // ecx
  int v14; // r8d
  int v15; // eax
  int v16; // ebx
  int v17; // eax

  v1 = *((_DWORD *)a1 + 1);
  v3 = *((_DWORD *)a1 + 5);
  v4 = v3;
  v5 = *((_DWORD *)a1 + 7);
  v6 = *(_DWORD *)a1;
  v7 = *((_DWORD *)a1 + 4);
  if ( v1 > v3 )
    v4 = *((_DWORD *)a1 + 1);
  v8 = *((_DWORD *)a1 + 6);
  if ( *((_DWORD *)a1 + 3) < v5 )
    v5 = *((_DWORD *)a1 + 3);
  v9 = *((_DWORD *)a1 + 4);
  *((_DWORD *)a1 + 9) = v4;
  if ( v6 > v7 )
    v9 = v6;
  v10 = *((_DWORD *)a1 + 2) < v8;
  *((_DWORD *)a1 + 8) = v9;
  if ( v10 )
    v8 = *((_DWORD *)a1 + 2);
  v11 = v5 - v4;
  v12 = v8 - v9;
  *((_DWORD *)a1 + 11) = v11;
  v13 = 0;
  *((_DWORD *)a1 + 10) = v12;
  v14 = v6 - v7;
  v15 = 0;
  if ( v14 > 0 )
    v15 = v14;
  v16 = v1 - v3;
  *((_DWORD *)a1 + 44) = v15;
  v17 = 0;
  if ( v16 > 0 )
    v17 = v16;
  *((_DWORD *)a1 + 45) = v17;
  if ( v12 > 0 && v11 > 0 )
    return 1;
  return v13;
}
