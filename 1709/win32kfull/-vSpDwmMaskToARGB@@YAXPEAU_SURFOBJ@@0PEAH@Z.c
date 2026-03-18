/*
 * XREFs of ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x1C024F198
 * Callers:
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C024EC6C (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall vSpDwmMaskToARGB(struct _SURFOBJ *a1, struct _SURFOBJ *a2, int *a3)
{
  __int64 cx; // rcx
  int *v5; // r13
  char *v7; // rdx
  char *pvScan0; // rdi
  LONG v9; // r9d
  char *v10; // r8
  int v11; // r12d
  __int64 v12; // r15
  char *v13; // r11
  __int32 *v14; // rsi
  __int64 v15; // r13
  __int32 *v16; // rax
  __int32 v17; // ecx
  __int64 lDelta; // rax
  char *v19; // rdi
  char *v20; // r11
  unsigned int *v21; // r8
  __int64 v22; // r15
  unsigned int *v23; // rdx
  char *v24; // r9
  __int64 v25; // rbp
  unsigned int *v26; // rax
  __int32 v27; // ecx
  __int64 v28; // rax
  __int64 v29; // [rsp+0h] [rbp-68h]
  __m128i si128; // [rsp+10h] [rbp-58h]

  cx = a1->sizlBitmap.cx;
  v5 = a3;
  v7 = 0LL;
  pvScan0 = (char *)a1->pvScan0;
  v9 = a1->sizlBitmap.cy >> 1;
  v10 = &pvScan0[v9 * a1->lDelta];
  if ( a2 )
    v7 = (char *)a2->pvScan0;
  v29 = cx;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffff0000000000ffffffff000000);
  v11 = a2 == 0LL;
  if ( v9 > 0 )
  {
    v12 = (unsigned int)v9;
    do
    {
      v13 = 0LL;
      if ( v7 )
        v13 = v7;
      if ( cx > 0 )
      {
        v14 = (__int32 *)v10;
        v15 = cx;
        do
        {
          if ( v13 )
            v16 = (__int32 *)((char *)v14 + v13 - v10);
          else
            v16 = v14;
          v17 = si128.m128i_i32[2 * (*(__int32 *)((char *)v14 + pvScan0 - v10) & 1) + (*v16 & 1)];
          *v14++ = v17;
          v11 |= v17 == -1;
          --v15;
        }
        while ( v15 );
        cx = v29;
      }
      if ( v7 )
        v7 += a2->lDelta;
      lDelta = a1->lDelta;
      pvScan0 += lDelta;
      v10 += lDelta;
      --v12;
    }
    while ( v12 );
    v5 = a3;
  }
  if ( v11 )
    goto LABEL_33;
  if ( !a2 )
    goto LABEL_33;
  v19 = (char *)a1->pvScan0;
  v20 = (char *)a2->pvScan0;
  v21 = (unsigned int *)&v19[v9 * a1->lDelta];
  if ( v9 <= 0 )
    goto LABEL_33;
  v22 = (unsigned int)v9;
  do
  {
    if ( cx <= 0 )
      goto LABEL_32;
    v23 = v21;
    v24 = (char *)(v20 - (char *)v21);
    v25 = cx;
    do
    {
      v26 = (unsigned int *)((char *)v23 + (_QWORD)v24);
      if ( !v20 )
        v26 = v23;
      v27 = si128.m128i_i32[2 * (*(_DWORD *)&v19[(char *)v23 - (char *)v21] & 1) + (*v26 & 1)];
      if ( v27 == -16777216 )
        goto LABEL_29;
      if ( v27 )
      {
        if ( v27 != 0xFFFFFF )
          goto LABEL_30;
LABEL_29:
        *v23 = *(unsigned int *)((char *)v23 + (_QWORD)v24) | 0xFF000000;
        goto LABEL_30;
      }
      *v23 = 0;
LABEL_30:
      ++v23;
      --v25;
    }
    while ( v25 );
    cx = v29;
LABEL_32:
    v20 += a2->lDelta;
    v28 = a1->lDelta;
    v19 += v28;
    v21 = (unsigned int *)((char *)v21 + v28);
    --v22;
  }
  while ( v22 );
LABEL_33:
  *v5 = v11;
}
