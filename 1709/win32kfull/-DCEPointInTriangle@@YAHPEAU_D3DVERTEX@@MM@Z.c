/*
 * XREFs of ?DCEPointInTriangle@@YAHPEAU_D3DVERTEX@@MM@Z @ 0x1C01C27E0
 * Callers:
 *     DCEHitTestWindow @ 0x1C01C3214 (DCEHitTestWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DCEPointInTriangle(struct _D3DVERTEX *a1, D3DVALUE a2, float a3)
{
  float y; // xmm3_4
  char v4; // dl
  int v7; // r8d
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rdi
  int v12; // ebx
  __int64 v13; // r10
  __int64 v14; // r9
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm2_4
  float v18; // xmm7_4

  y = a1->y;
  v4 = 0;
  if ( y == a1[1].y && y == a3 && a2 >= a1->x && a1[1].x >= a2 )
    return 1LL;
  v7 = -1;
  v8 = 3LL;
  if ( (float)(y - a3) >= 0.0 )
    v7 = 1;
  v9 = 0LL;
  do
  {
    v10 = 0LL;
    v11 = v9 + 1;
    if ( v9 + 1 < 3 )
      v10 = v9 + 1;
    v12 = -1;
    v13 = v10;
    if ( (float)(a1[v13].y - a3) >= 0.0 )
      v12 = 1;
    if ( v7 != v12 )
    {
      v14 = v9;
      v15 = a1[v13].x - a2;
      v16 = a1[v14].x - a2;
      if ( v16 <= 0.0 )
      {
        if ( v15 <= 0.0 )
        {
LABEL_21:
          v7 = v12;
          goto LABEL_22;
        }
      }
      else if ( v15 > 0.0 )
      {
LABEL_20:
        ++v4;
        goto LABEL_21;
      }
      v17 = a1[v14].y;
      v18 = a1[v13].y - v17;
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v18) & _xmm) <= 0.00000011920929
        || (float)(v16 - (float)((float)((float)(v17 - a3) * (float)(a1[v13].x - a1[v14].x)) / v18)) <= 0.0 )
      {
        goto LABEL_21;
      }
      goto LABEL_20;
    }
LABEL_22:
    v9 = v11;
    --v8;
  }
  while ( v8 );
  return v4 & 1;
}
