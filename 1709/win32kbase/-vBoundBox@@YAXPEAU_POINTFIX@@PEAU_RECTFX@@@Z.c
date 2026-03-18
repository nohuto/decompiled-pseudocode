/*
 * XREFs of ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C001DAF0
 * Callers:
 *     ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C001D810 (-bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C00F1430 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vBoundBox(struct _POINTFIX *a1, struct _RECTFX *a2)
{
  FIX x; // eax
  FIX v4; // r9d
  FIX v5; // ecx
  FIX v6; // eax
  FIX v7; // eax
  FIX v8; // ecx
  FIX y; // ecx
  FIX v10; // eax
  FIX v11; // r9d
  FIX v12; // ecx
  FIX v13; // eax
  FIX v14; // ecx
  FIX v15; // r9d
  FIX v16; // eax
  FIX v17; // r9d

  x = a1->x;
  v4 = a1[1].x;
  v5 = a1[2].x;
  if ( x < v4 )
  {
    v15 = a1[3].x;
    if ( v5 > v15 )
    {
      if ( x < v15 )
        v15 = x;
      a2->xLeft = v15;
      v7 = a1[1].x;
      goto LABEL_6;
    }
    if ( x < v5 )
      v5 = x;
    a2->xLeft = v5;
    v7 = a1[1].x;
  }
  else
  {
    v6 = a1[3].x;
    if ( v5 >= v6 )
    {
      if ( v4 < v6 )
        v6 = v4;
      a2->xLeft = v6;
      v7 = a1->x;
LABEL_6:
      v8 = a1[2].x;
      goto LABEL_7;
    }
    if ( v4 < v5 )
      v5 = v4;
    a2->xLeft = v5;
    v7 = a1->x;
  }
  v8 = a1[3].x;
LABEL_7:
  if ( v7 > v8 )
    v8 = v7;
  a2->xRight = v8;
  y = a1->y;
  v10 = a1[1].y;
  if ( y < v10 )
  {
    v16 = a1[2].y;
    v17 = a1[3].y;
    if ( v16 > v17 )
    {
      if ( y < v17 )
        v17 = a1->y;
      a2->yTop = v17;
      v13 = a1[1].y;
      goto LABEL_14;
    }
    if ( y < v16 )
      v16 = a1->y;
    a2->yTop = v16;
    v13 = a1[1].y;
  }
  else
  {
    v11 = a1[2].y;
    v12 = a1[3].y;
    if ( v11 >= v12 )
    {
      if ( v10 < v12 )
        v12 = a1[1].y;
      a2->yTop = v12;
      v13 = a1->y;
LABEL_14:
      v14 = a1[2].y;
      goto LABEL_15;
    }
    if ( v10 < v11 )
      v11 = a1[1].y;
    a2->yTop = v11;
    v13 = a1->y;
  }
  v14 = a1[3].y;
LABEL_15:
  if ( v13 > v14 )
    v14 = v13;
  a2->yBottom = v14;
}
