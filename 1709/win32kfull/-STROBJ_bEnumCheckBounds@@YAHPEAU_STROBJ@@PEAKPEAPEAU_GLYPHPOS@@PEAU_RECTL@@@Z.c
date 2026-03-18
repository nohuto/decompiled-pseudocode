/*
 * XREFs of ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C000DB00
 * Callers:
 *     EngTextOut @ 0x1C0011110 (EngTextOut.c)
 * Callees:
 *     ?bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z @ 0x1C000DA78 (-bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z.c)
 *     STROBJ_bEnum @ 0x1C000DCD0 (STROBJ_bEnum.c)
 *     vGetPosInfo @ 0x1C0297820 (vGetPosInfo.c)
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
  __int64 v15; // r11
  int v16; // r8d
  LONG top; // r15d
  int v18; // r15d
  unsigned int v19; // esi
  LONG v20; // r12d
  __int64 v21; // rbp
  LONG x; // r9d
  LONG y; // r10d
  __int64 v24; // rdx
  GLYPHDEF *pgdf; // rax
  LONG v26; // edx
  LONG v27; // r9d
  int v29; // [rsp+20h] [rbp-58h]
  LONG left; // [rsp+28h] [rbp-50h] BYREF
  LONG v31; // [rsp+2Ch] [rbp-4Ch]
  BOOL v32; // [rsp+30h] [rbp-48h]
  PGLYPHPOS v33; // [rsp+38h] [rbp-40h]
  int v34; // [rsp+80h] [rbp+8h]

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
    v33 = *v5;
    v32 = v9;
    v29 = 0;
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
      v10 = v33;
      v29 = v11;
    }
    if ( (unsigned int)v11 < v12 )
      break;
    if ( !v13 )
    {
      *v6 = 0;
      return 0LL;
    }
  }
  v15 = (unsigned int)(v11 + 1);
  v34 = 1;
  v16 = 1;
  if ( (unsigned int)v15 < v12 )
  {
    top = a1[1].rclBkGround.top;
    left = a4->left;
    v18 = top & 0x1400;
    v19 = *v6;
    v20 = left;
    do
    {
      v21 = v15;
      x = v10[v15].ptl.x;
      y = v10[v15].ptl.y;
      left = x;
      v31 = y;
      if ( !v18 )
      {
        v24 = (unsigned int)v15 + cGlyphs;
        if ( (_DWORD)v24 )
        {
          if ( a1->ulCharInc )
          {
            vGetPosInfo(a1, v24, &left);
            y = v31;
            x = left;
            v10 = v33;
            v16 = v34;
          }
        }
      }
      pgdf = v10[v21].pgdf;
      v26 = x + pgdf->pgb->ptlOrigin.x;
      v27 = y + pgdf->pgb->ptlOrigin.y;
      if ( v26 < v20 )
        break;
      if ( v26 + pgdf->pgb->sizlBitmap.cx > a4->right )
        break;
      if ( v27 < a4->top )
        break;
      if ( v27 + pgdf->pgb->sizlBitmap.cy > a4->bottom )
        break;
      v10 = v33;
      ++v16;
      v15 = (unsigned int)(v15 + 1);
      v34 = v16;
    }
    while ( (unsigned int)v15 < v19 );
    LODWORD(v11) = v29;
    v6 = pc;
    v5 = ppgpos;
    v13 = v32;
  }
  if ( v16 + (int)v11 < *v6 )
    v13 = 1;
  a1[1].cGlyphs = cGlyphs + v16 + v11;
  *v5 += (unsigned int)v11;
  *v6 = v16;
  if ( (a1[1].rclBkGround.top & 0x1400) == 0 && (cGlyphs || (_DWORD)v11) )
  {
    if ( a1->ulCharInc )
      vGetPosInfo(a1, (unsigned int)v11 + cGlyphs, &(*v5)->ptl);
  }
  return v13;
}
