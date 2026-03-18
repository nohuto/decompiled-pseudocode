/*
 * XREFs of ?bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00DE0D4
 * Callers:
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00DDF10 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall bBlurCursorShadow(struct _SURFOBJ *a1)
{
  LONG cx; // eax
  struct _SURFOBJ *v2; // rbx
  _BYTE *v3; // r8
  char *v4; // r9
  char *v5; // rdi
  char *pvScan0; // r10
  _WORD **v7; // r11
  __int64 v8; // rsi
  unsigned __int64 v9; // r13
  _WORD *v10; // r12
  __int64 v11; // rcx
  unsigned __int64 v12; // r15
  char *v13; // r14
  __int16 v14; // ax
  __int16 v15; // cx
  unsigned int v16; // r11d
  unsigned __int64 v17; // r15
  int v18; // esi
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r12
  _WORD *v22; // r14
  __int64 v23; // r13
  unsigned int *v24; // rbx
  unsigned __int64 v25; // r8
  unsigned __int16 v26; // cx
  _WORD *v27; // r12
  __int64 v28; // rcx
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rbx
  char *v31; // r14
  __int16 v32; // ax
  __int16 v33; // cx
  __int64 v35; // rax
  _BYTE *v37; // [rsp+40h] [rbp-C8h] BYREF
  char *v38; // [rsp+48h] [rbp-C0h]
  char *v39; // [rsp+50h] [rbp-B8h]
  _BYTE v40[128]; // [rsp+58h] [rbp-B0h] BYREF
  char v41; // [rsp+D8h] [rbp-30h] BYREF
  char v42; // [rsp+158h] [rbp+50h] BYREF

  cx = a1->sizlBitmap.cx;
  v2 = a1;
  if ( cx < 3 || a1->sizlBitmap.cy < 3 )
    return 0LL;
  if ( cx <= 64 )
  {
    v3 = v40;
    v37 = v40;
    v4 = &v41;
    v5 = &v42;
LABEL_5:
    v39 = v5;
    v38 = v4;
    goto LABEL_6;
  }
  v37 = PALLOCMEM2((unsigned int)(6 * cx), 1886221383LL, 1);
  v3 = v37;
  if ( v37 )
  {
    v35 = v2->sizlBitmap.cx;
    v4 = &v37[2 * v35];
    v5 = &v4[2 * v35];
    goto LABEL_5;
  }
  v5 = v39;
  v4 = v38;
LABEL_6:
  if ( !v3 )
    return 0LL;
  pvScan0 = (char *)v2->pvScan0;
  v7 = (_WORD **)&v37;
  v8 = 3LL;
  do
  {
    v9 = 0LL;
    v10 = *v7;
    v11 = v2->sizlBitmap.cx - 2;
    v12 = (unsigned __int64)(2 * v11 + 1) >> 1;
    if ( *v7 > &(*v7)[v11] )
      v12 = 0LL;
    if ( v12 )
    {
      v13 = pvScan0 + 4;
      do
      {
        v14 = (unsigned __int8)v13[7];
        ++v9;
        v15 = (unsigned __int8)*(v13 - 1);
        v13 += 4;
        *v10++ = (unsigned __int8)*(v13 - 1) + v14 + v15;
      }
      while ( v9 < v12 );
    }
    ++v7;
    pvScan0 += v2->lDelta;
    --v8;
  }
  while ( v8 );
  v16 = 0;
  v17 = (unsigned __int64)v2->pvScan0 + v2->lDelta + 4;
  v18 = v2->sizlBitmap.cy - 2;
  if ( v2->sizlBitmap.cy != 2 )
  {
    while ( 1 )
    {
      --v18;
      v19 = v2->sizlBitmap.cx - 2;
      v20 = (unsigned __int64)(4 * v19 + 3) >> 2;
      if ( v17 > v17 + 4 * v19 )
        v20 = 0LL;
      if ( v20 )
      {
        v21 = v5 - v3;
        v22 = v3;
        v23 = v4 - v3;
        v24 = (unsigned int *)v17;
        v25 = 0LL;
        do
        {
          ++v25;
          v26 = *v22 + *(_WORD *)((char *)v22 + v21) + *(_WORD *)((char *)v22 + v23);
          ++v22;
          *v24++ = (v26 << 21) & 0xFF000000;
        }
        while ( v25 < v20 );
        v2 = a1;
        v3 = v37;
      }
      v17 += v2->lDelta;
      if ( !v18 )
        break;
      v27 = (&v37)[v16];
      v28 = v2->sizlBitmap.cx - 2;
      v29 = (unsigned __int64)(2 * v28 + 1) >> 1;
      if ( v27 > &v27[v28] )
        v29 = 0LL;
      if ( v29 )
      {
        v30 = 0LL;
        v31 = pvScan0 + 4;
        do
        {
          v32 = (unsigned __int8)v31[7];
          ++v30;
          v33 = (unsigned __int8)*(v31 - 1);
          v31 += 4;
          *v27++ = (unsigned __int8)*(v31 - 1) + v32 + v33;
        }
        while ( v30 < v29 );
        v2 = a1;
      }
      ++v16;
      pvScan0 += v2->lDelta;
      if ( v16 >= 3 )
        v16 = 0;
    }
  }
  if ( v3 != v40 )
    Win32FreePool(v3);
  return 1LL;
}
