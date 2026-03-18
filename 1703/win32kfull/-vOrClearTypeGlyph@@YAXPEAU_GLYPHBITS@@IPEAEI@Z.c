/*
 * XREFs of ?vOrClearTypeGlyph@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C0251E30
 * Callers:
 *     draw_clrt_f_ntb_o_to_temp_start @ 0x1C02524F0 (draw_clrt_f_ntb_o_to_temp_start.c)
 * Callees:
 *     <none>
 */

void __fastcall vOrClearTypeGlyph(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // rsi
  unsigned __int8 *v5; // r11
  unsigned __int8 *v6; // rbp
  unsigned __int64 cx; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int8 *v10; // rbx
  int *v11; // rbp
  signed __int64 v12; // rdi
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al
  unsigned __int8 v15; // cl
  unsigned int v16; // r10d
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  unsigned __int8 *v19; // [rsp+50h] [rbp+8h]
  __int64 v20; // [rsp+60h] [rbp+18h]

  aj = a1->aj;
  v5 = a3;
  v6 = &a3[a4 * a1->sizlBitmap.cy];
  v19 = v6;
  if ( a3 < v6 )
  {
    cx = (unsigned int)a1->sizlBitmap.cx;
    v8 = a4;
    v20 = a4;
    while ( 1 )
    {
      v9 = cx;
      v10 = v5;
      if ( v5 > &v5[cx] )
        v9 = 0LL;
      if ( v9 )
        break;
LABEL_20:
      aj += a2;
      v5 += v8;
      if ( v5 >= v6 )
        return;
    }
    v11 = off_1C0324100;
    v12 = aj - v5;
    while ( 1 )
    {
      v13 = *v10;
      if ( !*v10 )
        break;
      v15 = v10[v12];
      if ( v15 )
      {
        v16 = LOBYTE(v11[v13]) + LOBYTE(v11[v15]);
        v17 = BYTE1(v11[v13]) + BYTE1(v11[v15]);
        v18 = BYTE2(v11[v13]) + BYTE2(v11[v15]);
        if ( v16 > 6 )
          v16 = 6;
        if ( v17 > 6 )
          v17 = 6;
        if ( v18 > 6 )
          v18 = 6;
        v14 = gajStorage1[49 * v16 + 7 * v17 + v18];
        goto LABEL_17;
      }
LABEL_18:
      if ( ++v10 - v5 >= v9 )
      {
        v6 = v19;
        v8 = v20;
        goto LABEL_20;
      }
    }
    v14 = v10[v12];
LABEL_17:
    *v10 = v14;
    goto LABEL_18;
  }
}
