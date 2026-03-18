/*
 * XREFs of ?bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EF2C4
 * Callers:
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00EF100 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall bBlurCursorShadow(struct _SURFOBJ *a1, unsigned __int64 a2)
{
  LONG cx; // eax
  struct _SURFOBJ *v3; // rbx
  _BYTE *v4; // r8
  char *v5; // r9
  char *v6; // r10
  char *pvScan0; // r11
  _WORD **v8; // rdi
  __int64 v9; // r15
  unsigned __int64 v10; // r13
  _WORD *v11; // r12
  unsigned __int64 v12; // r14
  _WORD *v13; // rax
  unsigned __int64 v14; // r14
  char *v15; // rsi
  __int16 v16; // ax
  __int16 v17; // cx
  __int64 lDelta; // rcx
  unsigned __int64 v19; // r14
  unsigned int v20; // edi
  int v21; // esi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // r12
  _WORD *v25; // r15
  __int64 v26; // r13
  unsigned int *v27; // rbx
  unsigned __int64 v28; // r8
  unsigned __int16 v29; // cx
  _WORD *v30; // r13
  unsigned __int64 v31; // r12
  _WORD *v32; // rax
  unsigned __int64 v33; // r12
  char *v34; // r15
  unsigned __int64 v35; // rbx
  __int16 v36; // ax
  __int16 v37; // cx
  __int64 v39; // rax
  _BYTE *v41; // [rsp+40h] [rbp-C8h] BYREF
  char *v42; // [rsp+48h] [rbp-C0h]
  char *v43; // [rsp+50h] [rbp-B8h]
  _BYTE v44[128]; // [rsp+58h] [rbp-B0h] BYREF
  char v45; // [rsp+D8h] [rbp-30h] BYREF
  char v46; // [rsp+158h] [rbp+50h] BYREF

  cx = a1->sizlBitmap.cx;
  v3 = a1;
  if ( cx < 3 || a1->sizlBitmap.cy < 3 )
    return 0LL;
  if ( cx <= 64 )
  {
    v4 = v44;
    v41 = v44;
    v5 = &v45;
    v6 = &v46;
LABEL_5:
    v43 = v6;
    v42 = v5;
    goto LABEL_6;
  }
  v41 = PALLOCMEM2((unsigned int)(6 * cx), 1886221383LL, 1);
  v4 = v41;
  if ( v41 )
  {
    v39 = v3->sizlBitmap.cx;
    v5 = &v41[2 * v39];
    v6 = &v5[2 * v39];
    goto LABEL_5;
  }
  v6 = v43;
  v5 = v42;
LABEL_6:
  if ( !v4 )
    return 0LL;
  pvScan0 = (char *)v3->pvScan0;
  v8 = (_WORD **)&v41;
  v9 = 3LL;
  do
  {
    v10 = 0LL;
    v11 = *v8;
    v12 = v3->sizlBitmap.cx - 2;
    v13 = &(*v8)[v12];
    v14 = (v12 * 2) >> 1;
    if ( *v8 > v13 )
      v14 = 0LL;
    if ( v14 )
    {
      v15 = pvScan0 + 4;
      do
      {
        v16 = (unsigned __int8)v15[7];
        ++v10;
        v17 = (unsigned __int8)*(v15 - 1);
        v15 += 4;
        *v11++ = (unsigned __int8)*(v15 - 1) + v16 + v17;
      }
      while ( v10 < v14 );
    }
    lDelta = v3->lDelta;
    ++v8;
    pvScan0 += lDelta;
    --v9;
  }
  while ( v9 );
  v19 = (unsigned __int64)v3->pvScan0 + lDelta + 4;
  v20 = 0;
  v21 = v3->sizlBitmap.cy - 2;
  if ( v3->sizlBitmap.cy != 2 )
  {
    while ( 1 )
    {
      --v21;
      v22 = 4LL * (v3->sizlBitmap.cx - 2);
      v23 = v22 + v19;
      a2 = v22 >> 2;
      if ( v19 > v23 )
        a2 = 0LL;
      if ( a2 )
      {
        v24 = v6 - v4;
        v25 = v4;
        v26 = v5 - v4;
        v27 = (unsigned int *)v19;
        v28 = 0LL;
        do
        {
          ++v28;
          v29 = *v25 + *(_WORD *)((char *)v25 + v24) + *(_WORD *)((char *)v25 + v26);
          ++v25;
          *v27++ = (v29 << 21) & 0xFF000000;
        }
        while ( v28 < a2 );
        v4 = v41;
        v3 = a1;
      }
      v19 += v3->lDelta;
      if ( !v21 )
        break;
      v30 = (&v41)[v20];
      v31 = v3->sizlBitmap.cx - 2;
      v32 = &v30[v31];
      v33 = (v31 * 2) >> 1;
      if ( v30 > v32 )
        v33 = 0LL;
      if ( v33 )
      {
        v34 = pvScan0 + 4;
        v35 = 0LL;
        do
        {
          v36 = (unsigned __int8)v34[7];
          ++v35;
          v37 = (unsigned __int8)*(v34 - 1);
          v34 += 4;
          *v30++ = (unsigned __int8)*(v34 - 1) + v36 + v37;
        }
        while ( v35 < v33 );
        v3 = a1;
      }
      pvScan0 += v3->lDelta;
      v20 = v20 + 1 < 3 ? v20 + 1 : 0;
    }
  }
  if ( v4 != v44 )
    Win32FreePool(v4, a2, v4);
  return 1LL;
}
