/*
 * XREFs of ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C003B294
 * Callers:
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C003B888 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     AllocateObject @ 0x1C003C340 (AllocateObject.c)
 */

__int64 __fastcall RGNMEMOBJ::bFastFill(RGNMEMOBJ *this, struct EPATHOBJ *a2, int a3, struct _POINTFIX *a4)
{
  FIX y; // ebx
  struct _POINTFIX *v5; // r15
  struct _POINTFIX *v7; // r10
  int v8; // r12d
  struct _POINTFIX *v9; // rsi
  int v10; // r11d
  FIX v11; // eax
  __m128i *v12; // rax
  FIX v13; // ebx
  __int64 v14; // rcx
  __m128i v15; // xmm1
  int v16; // ebx
  __int64 v17; // rsi
  __int64 Object; // rax
  __int64 v19; // rax
  int v20; // esi
  _QWORD *v21; // rax
  _DWORD *v22; // r10
  _DWORD *v23; // r8
  __int64 v24; // r13
  char *v25; // r9
  int *v26; // rdx
  struct _POINTFIX *v27; // rcx
  struct _POINTFIX *v28; // rax
  int v29; // ecx
  int v30; // ecx
  int v31; // r15d
  unsigned int v32; // r11d
  int v33; // r12d
  int v34; // ecx
  int v35; // r15d
  int v36; // edx
  int v37; // edx
  int v38; // r13d
  int v39; // r14d
  int v40; // ecx
  int v41; // r9d
  int v42; // eax
  __int64 result; // rax
  int v44; // ecx
  int v45; // r15d
  int v46; // edx
  int v47; // r12d
  int v48; // eax
  bool v49; // sf
  __int128 v50; // xmm1
  __int128 v51; // xmm5
  __int128 v52; // xmm6
  __int128 v53; // xmm7
  int v54; // r11d
  int v55; // r12d
  int v56; // r9d
  int v57; // r15d
  int v58; // eax
  struct _POINTFIX *v59; // rcx
  FIX v60; // eax
  FIX v61; // eax
  FIX *p_y; // rcx
  unsigned int v63; // ecx
  int v64; // eax
  unsigned int v65; // eax
  FIX v66; // eax
  FIX v67; // eax
  FIX *v68; // r10
  __int128 v69; // xmm2
  __int128 v70; // xmm4
  struct _POINTFIX *v71; // [rsp+28h] [rbp-59h]
  __int128 v72; // [rsp+38h] [rbp-49h]
  __int128 v73; // [rsp+48h] [rbp-39h]
  __int64 v74; // [rsp+58h] [rbp-29h]
  __int128 v75; // [rsp+60h] [rbp-21h]
  __int128 v76; // [rsp+70h] [rbp-11h] BYREF
  __int64 v77; // [rsp+80h] [rbp-1h]
  int v79; // [rsp+F8h] [rbp+77h]

  v79 = a3;
  y = a4->y;
  v5 = a4;
  v7 = a4;
  v8 = a3;
  v9 = a4;
  v10 = a3 - 1;
  v71 = &a4[a3 - 1];
  if ( a4[1].y <= y )
  {
    while ( 1 )
    {
      ++v9;
      if ( !--v10 )
        break;
      if ( v9[1].y > v9->y )
      {
        v59 = v9;
        while ( --v10 )
        {
          v60 = v59[1].y;
          ++v59;
          if ( v59[1].y < v60 )
          {
            v61 = v59[1].y;
            p_y = &v59->y;
            while ( 1 )
            {
              if ( v61 < y )
                return 0LL;
              if ( !--v10 )
                break;
              v61 = p_y[4];
              p_y += 2;
              if ( v61 > *p_y )
                return 0LL;
            }
            goto LABEL_7;
          }
        }
        break;
      }
    }
  }
  else
  {
    while ( --v10 )
    {
      v11 = v7[1].y;
      ++v7;
      if ( v7[1].y < v11 )
      {
        do
        {
          if ( !--v10 )
          {
            if ( v7[1].y < y )
              v9 = v7 + 1;
            goto LABEL_7;
          }
          v66 = v7[1].y;
          ++v7;
        }
        while ( v7[1].y <= v66 );
        v67 = v7[1].y;
        v9 = v7;
        v68 = &v7->y;
        do
        {
          if ( v67 > y )
            break;
          if ( !--v10 )
            goto LABEL_7;
          v67 = v68[4];
          v68 += 2;
        }
        while ( v67 >= *v68 );
        return 0LL;
      }
    }
  }
LABEL_7:
  v12 = (__m128i *)*((_QWORD *)a2 + 1);
  v13 = v9->y;
  v14 = (int)HIDWORD(v12[3].m128i_i64[0]);
  v15 = _mm_srli_si128(v12[3], 8);
  *((_QWORD *)&v76 + 1) = v9;
  *((_QWORD *)&v73 + 1) = v9;
  v16 = (v13 + 15) >> 4;
  v77 = 4294967288LL;
  v74 = 8LL;
  v17 = 24 * ((v15.m128i_i32[1] - v14 + 15) >> 4) + 136;
  if ( v17 > 0x7FFFFFFF )
    return 0LL;
  Object = AllocateObject((unsigned int)v17);
  *(_QWORD *)this = Object;
  if ( !Object )
    return 0LL;
  *(_DWORD *)(Object + 24) = v17;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
  v19 = (unsigned int)v17;
  v20 = 1;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + v19;
  v21 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v21[1] = v21;
  *v21 = v21;
  v22 = (_DWORD *)(*(_QWORD *)this + 104LL);
  v22[1] = 0x80000000;
  *v22 = 0;
  v22[2] = v16;
  v22[3] = 0;
  v23 = (_DWORD *)((char *)v22 + (unsigned int)(4 * *v22 + 16));
LABEL_10:
  v24 = 1LL;
  v25 = (char *)&v76 + 8;
  while ( *((_DWORD *)v25 + 3) )
  {
LABEL_24:
    v25 -= 40;
    if ( --v24 < 0 )
    {
      v37 = HIDWORD(v74);
      v38 = DWORD1(v75);
      v39 = DWORD1(v72);
      if ( SHIDWORD(v77) < SHIDWORD(v74) )
        v37 = HIDWORD(v77);
      HIDWORD(v77) -= v37;
      HIDWORD(v74) -= v37;
      v40 = HIDWORD(v75);
      if ( !(HIDWORD(v75) | HIDWORD(v72)) && !(DWORD1(v75) | DWORD1(v72)) )
      {
        v41 = v75;
        v42 = v72;
        if ( (_DWORD)v75 == (_DWORD)v72 )
        {
          if ( !*v22 )
            goto LABEL_88;
          *v23 = 0;
          v23[3] = 0;
LABEL_34:
          v23[1] = v16;
          v22 = v23;
          v16 += v37;
          v23[2] = v16;
          v23 = (_DWORD *)((char *)v23 + (unsigned int)(4 * *v23 + 16));
          ++v20;
          goto LABEL_10;
        }
        if ( (int)v75 > (int)v72 )
        {
          v41 = v72;
          v42 = v75;
        }
        if ( *v22 != 2 || v22[3] != v41 || v22[4] != v42 )
        {
          *v23 = 2;
          v23[3] = v41;
          v23[4] = v42;
          v23[5] = 2;
          goto LABEL_34;
        }
LABEL_88:
        v16 += v37;
        v22[2] = v16;
        goto LABEL_10;
      }
      v50 = (unsigned __int64)v77;
      v51 = v76;
      v52 = (unsigned __int64)v74;
      v53 = v73;
      while ( 2 )
      {
        v54 = v72;
        v55 = DWORD2(v72);
        v56 = v75;
        v57 = DWORD2(v75);
LABEL_47:
        if ( v54 - v56 <= 0 )
        {
          if ( v54 != v56 )
          {
            v69 = v75;
            v70 = v50;
            v73 = v51;
            v75 = v72;
            v38 = DWORD1(v72);
            v40 = HIDWORD(v72);
            v51 = v53;
            v72 = v69;
            v39 = DWORD1(v69);
            v50 = v52;
            v52 = v70;
            v76 = v53;
            v53 = v73;
            continue;
          }
          if ( *v22 )
          {
            *v23 = 0;
            v23[3] = 0;
            goto LABEL_51;
          }
LABEL_59:
          v22[2] = ++v16;
        }
        else
        {
          if ( *v22 == 2 && v22[3] == v56 && v22[4] == v54 )
            goto LABEL_59;
          *v23 = 2;
          v23[3] = v56;
          v23[4] = v54;
          v23[5] = 2;
LABEL_51:
          v58 = *v23;
          v22 = v23;
          v23[1] = v16++;
          v23[2] = v16;
          v23 = (_DWORD *)((char *)v23 + (unsigned int)(4 * v58 + 16));
          v40 = HIDWORD(v75);
          ++v20;
        }
        break;
      }
      v54 += v39;
      v49 = HIDWORD(v72) + v55 < 0;
      v55 += HIDWORD(v72);
      DWORD2(v72) = v55;
      LODWORD(v72) = v54;
      if ( !v49 )
      {
        v55 -= v73;
        ++v54;
        DWORD2(v72) = v55;
        LODWORD(v72) = v54;
      }
      v56 += v38;
      v49 = v40 + v57 < 0;
      v57 += v40;
      LODWORD(v75) = v56;
      DWORD2(v75) = v57;
      if ( !v49 )
      {
        v57 -= v76;
        ++v56;
        DWORD2(v75) = v57;
        LODWORD(v75) = v56;
      }
      if ( !--v37 )
      {
        v5 = a4;
        v8 = v79;
        v77 = v50;
        v74 = v52;
        goto LABEL_10;
      }
      goto LABEL_47;
    }
  }
  while ( 1 )
  {
    v79 = --v8;
    if ( v8 < 0 )
      break;
    v26 = *(int **)v25;
    v27 = (struct _POINTFIX *)(*(_QWORD *)v25 + *((int *)v25 + 2));
    *(_QWORD *)v25 = v27;
    if ( v27 < v5 )
    {
      v28 = v71;
    }
    else
    {
      v28 = v27;
      if ( v27 > v71 )
        v28 = v5;
    }
    v29 = v28->y + 15;
    *(_QWORD *)v25 = v28;
    v30 = (v29 >> 4) - v16;
    *((_DWORD *)v25 + 3) = v30;
    if ( v30 > 0 )
    {
      v31 = v26[1];
      v32 = v28->y - v31;
      v33 = *v26;
      v34 = v28->x - *v26;
      if ( v34 >= 0 )
      {
        if ( v34 >= (int)v32 )
        {
          *((_DWORD *)v25 - 5) = v34 / v32;
          *((_DWORD *)v25 - 3) = v34 % v32;
        }
        else
        {
          *((_DWORD *)v25 - 5) = 0;
          *((_DWORD *)v25 - 3) = v34;
        }
        goto LABEL_20;
      }
      v63 = *v26 - v28->x;
      if ( (int)v63 < (int)v32 )
      {
        *((_DWORD *)v25 - 5) = -1;
        v65 = v32 - v63;
LABEL_74:
        *((_DWORD *)v25 - 3) = v65;
      }
      else
      {
        v64 = -(int)(v63 / v32);
        *((_DWORD *)v25 - 3) = v63 % v32;
        *((_DWORD *)v25 - 5) = v64;
        if ( (int)(v63 % v32) > 0 )
        {
          *((_DWORD *)v25 - 5) = v64 - 1;
          v65 = v32 - v63 % v32;
          goto LABEL_74;
        }
      }
LABEL_20:
      *((_DWORD *)v25 - 4) = -1;
      *((_DWORD *)v25 - 2) = v32;
      *((_DWORD *)v25 - 6) = v33;
      v35 = v31 & 0xF;
      if ( v35 )
      {
        v44 = 16 - v35;
        if ( 16 - v35 > 0 )
        {
          v45 = *((_DWORD *)v25 - 5);
          v46 = -1;
          v47 = *((_DWORD *)v25 - 3);
          do
          {
            v48 = v45 + *((_DWORD *)v25 - 6);
            v49 = v47 + v46 < 0;
            v46 += v47;
            *((_DWORD *)v25 - 6) = v48;
            if ( !v49 )
            {
              v46 -= v32;
              *((_DWORD *)v25 - 6) = v48 + 1;
            }
            --v44;
          }
          while ( v44 > 0 );
          *((_DWORD *)v25 - 4) = v46;
        }
      }
      v36 = *((_DWORD *)v25 - 6);
      if ( (v36 & 0xF) != 0 )
      {
        *((_DWORD *)v25 - 4) -= v32 * (16 - (*((_DWORD *)v25 - 6) & 0xF));
        *((_DWORD *)v25 - 6) = v36 + 15;
      }
      *((int *)v25 - 6) >>= 4;
      *((int *)v25 - 4) >>= 4;
      v5 = a4;
      v8 = v79;
      goto LABEL_24;
    }
  }
  if ( *v22 )
  {
    ++v20;
    *v23 = 0;
    *((_QWORD *)v23 + 1) = 0x7FFFFFFFLL;
    v23[1] = v16;
    v23 += 4;
  }
  else
  {
    v22[2] = 0x7FFFFFFF;
  }
  result = 1LL;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = v20;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = v23;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = (_DWORD)v23 - *(_QWORD *)this;
  return result;
}
