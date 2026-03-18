/*
 * XREFs of ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x1C024D720
 * Callers:
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C024D1F0 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall vSpDwmMaskToARGB(struct _SURFOBJ *a1, struct _SURFOBJ *a2, int *a3)
{
  __int64 cx; // rcx
  char *v6; // rdx
  char *pvScan0; // rdi
  LONG v8; // r9d
  char *v9; // r8
  int v10; // r12d
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // r9
  char *v14; // r11
  __int32 *v15; // rbx
  __int64 v16; // r13
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int64 lDelta; // rax
  char *v20; // r11
  char *v21; // r8
  unsigned int *v22; // rdx
  __int64 v23; // r15
  unsigned int *v24; // rcx
  char *v25; // rbx
  __int64 v26; // r14
  unsigned int v27; // r9d
  __int32 v28; // r9d
  __int64 v29; // rax
  LONG v30; // [rsp+0h] [rbp-68h]
  __int64 v31; // [rsp+8h] [rbp-60h]
  __m128i si128; // [rsp+18h] [rbp-50h]

  cx = a1->sizlBitmap.cx;
  v6 = 0LL;
  pvScan0 = (char *)a1->pvScan0;
  v8 = a1->sizlBitmap.cy >> 1;
  v30 = v8;
  v9 = &pvScan0[v8 * a1->lDelta];
  if ( a2 )
    v6 = (char *)a2->pvScan0;
  v31 = cx;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffff0000000000ffffffff000000);
  v10 = a2 == 0LL;
  v11 = cx;
  if ( v8 > 0 )
  {
    v12 = (unsigned int)v8;
    v13 = cx;
    do
    {
      v14 = 0LL;
      if ( v6 )
        v14 = v6;
      if ( v13 > 0 )
      {
        v15 = (__int32 *)v9;
        v16 = v13;
        do
        {
          if ( v14 )
            v17 = *(__int32 *)((char *)v15 + v14 - v9);
          else
            v17 = *v15;
          v18 = si128.m128i_i32[2 * (*(__int32 *)((char *)v15 + pvScan0 - v9) & 1) + (v17 & 1)];
          *v15++ = v18;
          v10 |= v18 == -1;
          --v16;
        }
        while ( v16 );
      }
      if ( v6 )
        v6 += a2->lDelta;
      lDelta = a1->lDelta;
      pvScan0 += lDelta;
      v9 += lDelta;
      --v12;
    }
    while ( v12 );
    v8 = v30;
    v11 = v31;
  }
  if ( !v10 )
  {
    if ( a2 )
    {
      v20 = (char *)a1->pvScan0;
      v21 = (char *)a2->pvScan0;
      v22 = (unsigned int *)&v20[v8 * a1->lDelta];
      if ( v8 > 0 )
      {
        v23 = (unsigned int)v8;
        while ( v11 <= 0 )
        {
LABEL_31:
          v21 += a2->lDelta;
          v29 = a1->lDelta;
          v20 += v29;
          v22 = (unsigned int *)((char *)v22 + v29);
          if ( !--v23 )
            goto LABEL_32;
        }
        v24 = v22;
        v25 = (char *)(v21 - (char *)v22);
        v26 = v11;
        while ( 1 )
        {
          if ( v21 )
            v27 = *(unsigned int *)((char *)v24 + (_QWORD)v25);
          else
            v27 = *v24;
          v28 = si128.m128i_i32[2 * (*(_DWORD *)&v20[(char *)v24 - (char *)v22] & 1) + (v27 & 1)];
          switch ( v28 )
          {
            case -16777216:
              goto LABEL_29;
            case 0:
              *v24 = 0;
              break;
            case 16777215:
LABEL_29:
              *v24 = *(unsigned int *)((char *)v24 + (_QWORD)v25) | 0xFF000000;
              break;
          }
          ++v24;
          if ( !--v26 )
            goto LABEL_31;
        }
      }
    }
  }
LABEL_32:
  *a3 = v10;
}
