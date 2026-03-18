/*
 * XREFs of ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C00DF180
 * Callers:
 *     EngTextOut @ 0x1C0083290 (EngTextOut.c)
 * Callees:
 *     ?bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z @ 0x1C00DF334 (-bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z.c)
 *     STROBJ_bEnum @ 0x1C00DF3C0 (STROBJ_bEnum.c)
 *     vGetPosInfo @ 0x1C029B0C0 (vGetPosInfo.c)
 */

__int64 __fastcall STROBJ_bEnumCheckBounds(struct _STROBJ *a1, ULONG *pc, PGLYPHPOS *ppgpos, struct _RECTL *a4)
{
  PGLYPHPOS *v5; // r15
  ULONG *v6; // rsi
  ULONG cGlyphs; // r14d
  BOOL v9; // eax
  PGLYPHPOS v10; // rcx
  __int64 v11; // rbx
  unsigned int v12; // ebp
  unsigned int v13; // r12d
  PGLYPHPOS v14; // r15
  unsigned int v15; // r8d
  __int64 v16; // r11
  int v17; // ebp
  int v18; // r15d
  LONG left; // esi
  __int64 v20; // rax
  LONG x; // r9d
  LONG y; // r10d
  __int64 v23; // rdx
  GLYPHBITS *pgb; // rcx
  LONG v25; // edx
  LONG v26; // eax
  LONG v27; // r9d
  LONG v28; // ecx
  ULONG v30; // [rsp+20h] [rbp-58h]
  BOOL v31; // [rsp+24h] [rbp-54h]
  LONG v32; // [rsp+28h] [rbp-50h] BYREF
  LONG v33; // [rsp+2Ch] [rbp-4Ch]
  PGLYPHPOS v34; // [rsp+30h] [rbp-48h]
  __int64 v35; // [rsp+80h] [rbp+8h]

  v5 = ppgpos;
  v6 = pc;
  while ( 1 )
  {
    cGlyphs = a1[1].cGlyphs;
    v9 = STROBJ_bEnum(a1, v6, v5);
    v10 = *v5;
    v11 = 0LL;
    v12 = *v6;
    v13 = v9;
    v34 = *v5;
    v31 = v9;
    if ( v12 )
    {
      v14 = v10;
      do
      {
        if ( !(unsigned int)bGlyphOutOfBounds((struct ESTROBJ *)a1, &v14[v11], a4, (unsigned int)v11 + cGlyphs) )
          break;
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < v12 );
      v6 = pc;
      v5 = ppgpos;
      v10 = v34;
    }
    if ( (unsigned int)v11 < v12 )
      break;
    if ( !v13 )
    {
      *v6 = 0;
      return 0LL;
    }
  }
  v15 = *v6;
  v16 = (unsigned int)(v11 + 1);
  v30 = *v6;
  v17 = 1;
  if ( (unsigned int)v16 < *v6 )
  {
    v18 = a1[1].rclBkGround.top & 0x1400;
    left = a4->left;
    do
    {
      v20 = 3 * v16;
      x = v10[v16].ptl.x;
      y = v10[v16].ptl.y;
      v32 = x;
      v33 = y;
      v35 = 3 * v16;
      if ( !v18 )
      {
        v23 = (unsigned int)v16 + cGlyphs;
        if ( (_DWORD)v23 )
        {
          if ( a1->ulCharInc )
          {
            vGetPosInfo(a1, v23, &v32);
            y = v33;
            x = v32;
            v10 = v34;
            v20 = v35;
            v15 = v30;
          }
        }
      }
      pgb = (&v10->pgdf)[v20]->pgb;
      v25 = x + pgb->ptlOrigin.x;
      v26 = v25 + pgb->sizlBitmap.cx;
      v27 = y + pgb->ptlOrigin.y;
      v28 = v27 + pgb->sizlBitmap.cy;
      if ( v25 < left )
        break;
      if ( v26 > a4->right )
        break;
      if ( v27 < a4->top )
        break;
      if ( v28 > a4->bottom )
        break;
      v10 = v34;
      ++v17;
      v16 = (unsigned int)(v16 + 1);
    }
    while ( (unsigned int)v16 < v15 );
    v6 = pc;
    v5 = ppgpos;
    v13 = v31;
  }
  if ( (int)v11 + v17 < v15 )
    v13 = 1;
  a1[1].cGlyphs = cGlyphs + v11 + v17;
  *v5 += v11;
  *v6 = v17;
  if ( (a1[1].rclBkGround.top & 0x1400) == 0 && (cGlyphs || (_DWORD)v11) )
  {
    if ( a1->ulCharInc )
      vGetPosInfo(a1, (unsigned int)v11 + cGlyphs, &(*v5)->ptl);
  }
  return v13;
}
