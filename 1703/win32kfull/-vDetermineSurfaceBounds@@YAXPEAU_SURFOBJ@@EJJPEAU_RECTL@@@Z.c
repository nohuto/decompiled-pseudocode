/*
 * XREFs of ?vDetermineSurfaceBounds@@YAXPEAU_SURFOBJ@@EJJPEAU_RECTL@@@Z @ 0x1C00DDD18
 * Callers:
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C00DDC50 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vDetermineSurfaceBounds(struct _SURFOBJ *a1, char a2, LONG a3, LONG a4, struct _RECTL *a5)
{
  __int64 iBitmapFormat; // rax
  __int64 lDelta; // r11
  int v8; // r14d
  int v11; // r15d
  LONG cx; // ecx
  char *pvScan0; // r9
  unsigned int v15; // r10d
  int v16; // ecx
  char *v17; // rcx
  char *v18; // rax
  unsigned int v19; // edx
  char *v20; // rdx
  char *v21; // rax
  unsigned int v22; // r8d
  char *i; // r8
  char *v24; // r9
  int v25; // esi
  char *v26; // r8
  char *v27; // rcx
  int v28; // r9d
  LONG v29; // eax
  LONG v30; // ecx
  char v31; // r8
  char *v32; // rcx
  int v33; // eax
  char v34; // r8
  int v35; // eax

  iBitmapFormat = a1->iBitmapFormat;
  lDelta = a1->lDelta;
  v8 = 0;
  v11 = *((_DWORD *)&galBitsPerPixel + iBitmapFormat);
  cx = a1->sizlBitmap.cx;
  pvScan0 = (char *)a1->pvScan0;
  v15 = (v11 * cx + 7) >> 3;
  if ( (_DWORD)iBitmapFormat == 1 )
  {
    v16 = cx & 7;
    if ( v16 )
    {
      v31 = (256 >> v16) - 1;
      v32 = &pvScan0[a3 * (int)lDelta - 1 + v15];
      if ( a2 )
      {
        v33 = a4 - a3;
        if ( a4 != a3 )
        {
          do
          {
            *v32 |= v31;
            v32 += lDelta;
            --v33;
          }
          while ( v33 );
        }
      }
      else
      {
        v34 = ~v31;
        v35 = a4 - a3;
        if ( a4 != a3 )
        {
          do
          {
            *v32 &= v34;
            v32 += lDelta;
            --v35;
          }
          while ( v35 );
        }
      }
    }
  }
  v17 = &pvScan0[a3 * (int)lDelta];
  while ( 1 )
  {
    v18 = v17;
    v19 = v15;
    if ( v15 )
      break;
LABEL_7:
    v17 += lDelta;
    if ( ++a3 >= a4 )
    {
      a5->left = 0x7FFFFFFF;
      a5->top = 0x7FFFFFFF;
      a5->right = 0x80000000;
      a5->bottom = 0x80000000;
      return;
    }
  }
  while ( *v18 == a2 )
  {
    ++v18;
    if ( !--v19 )
      goto LABEL_7;
  }
  v20 = &pvScan0[(int)lDelta * (a4 - 1)];
LABEL_10:
  v21 = v20;
  v22 = v15;
  while ( *v21 == a2 )
  {
    ++v21;
    if ( !--v22 )
    {
      v20 -= lDelta;
      --a4;
      goto LABEL_10;
    }
  }
  for ( i = v17; ; ++i )
  {
    v24 = i;
    v25 = a4 - a3;
    if ( a4 != a3 )
      break;
LABEL_18:
    ++v8;
  }
  while ( *v24 == a2 )
  {
    v24 += lDelta;
    if ( !--v25 )
      goto LABEL_18;
  }
  v26 = &v17[v15 - 1];
LABEL_20:
  v27 = v26;
  v28 = a4 - a3;
  while ( *v27 == a2 )
  {
    v27 += lDelta;
    if ( !--v28 )
    {
      --v26;
      --v15;
      goto LABEL_20;
    }
  }
  a5->top = a3;
  a5->left = 8 * v8 / v11;
  a5->bottom = a4;
  v29 = (int)(v11 - 1 + 8 * v15) / v11;
  a5->right = v29;
  v30 = a1->sizlBitmap.cx;
  if ( v29 < v30 )
    v30 = (int)(v11 - 1 + 8 * v15) / v11;
  a5->right = v30;
}
