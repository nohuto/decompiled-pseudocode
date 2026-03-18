/*
 * XREFs of ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C00442A4
 * Callers:
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C0044878 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     AllocateObject @ 0x1C0047B40 (AllocateObject.c)
 */

__int64 __fastcall RGNMEMOBJ::bFastFill(RGNMEMOBJ *this, struct EPATHOBJ *a2, int a3, struct _POINTFIX *a4)
{
  struct _POINTFIX *v4; // r13
  int v5; // r10d
  struct _POINTFIX *v8; // r11
  FIX y; // ebx
  struct _POINTFIX *v10; // rsi
  FIX v11; // eax
  __m128i *v12; // rax
  int v13; // ebx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 Object; // rax
  int v18; // r12d
  _QWORD *v19; // rax
  _DWORD *v20; // r9
  _DWORD *v21; // r8
  __int64 v22; // r15
  char *v23; // rcx
  int *v24; // r10
  struct _POINTFIX *v25; // rdx
  struct _POINTFIX *v26; // rax
  FIX v27; // r11d
  int v28; // esi
  unsigned int v29; // r11d
  int v30; // r13d
  int v31; // r10d
  int v32; // esi
  int v33; // r10d
  int v34; // edx
  int v35; // r13d
  int v36; // r14d
  int v37; // ecx
  int v38; // r10d
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  __int64 result; // rax
  int v43; // edx
  int v44; // esi
  int v45; // r10d
  int v46; // r13d
  int v47; // eax
  bool v48; // sf
  __int128 v49; // xmm1
  __int128 v50; // xmm5
  __int128 v51; // xmm6
  __int128 v52; // xmm7
  int v53; // r11d
  int v54; // r15d
  int v55; // r10d
  int v56; // esi
  int v57; // eax
  struct _POINTFIX *v58; // rdx
  FIX v59; // ecx
  FIX *p_y; // rax
  unsigned int v61; // r10d
  int v62; // eax
  unsigned int v63; // eax
  FIX v64; // ecx
  FIX *v65; // rax
  __int128 v66; // xmm2
  __int128 v67; // xmm4
  struct _POINTFIX *v68; // [rsp+28h] [rbp-59h]
  __int128 v69; // [rsp+38h] [rbp-49h]
  __int128 v70; // [rsp+48h] [rbp-39h]
  __int64 v71; // [rsp+58h] [rbp-29h]
  __int128 v72; // [rsp+60h] [rbp-21h] BYREF
  __int128 v73; // [rsp+70h] [rbp-11h]
  __int64 v74; // [rsp+80h] [rbp-1h]
  int v76; // [rsp+F8h] [rbp+77h]

  v76 = a3;
  v4 = a4;
  v5 = a3 - 1;
  v8 = v4;
  y = v4->y;
  v10 = v4;
  v68 = &v4[a3 - 1];
  if ( v4[1].y <= y )
  {
    while ( 1 )
    {
      ++v10;
      if ( !--v5 )
        break;
      if ( v10[1].y > v10->y )
      {
        v58 = v10;
        while ( --v5 )
        {
          v59 = v58[2].y;
          ++v58;
          p_y = &v58->y;
          if ( v59 < v58->y )
          {
            while ( 1 )
            {
              if ( v59 < y )
                return 0LL;
              if ( !--v5 )
                break;
              v59 = p_y[4];
              p_y += 2;
              if ( v59 > *p_y )
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
    while ( --v5 )
    {
      v11 = v8[1].y;
      ++v8;
      if ( v8[1].y < v11 )
      {
        do
        {
          if ( !--v5 )
          {
            if ( v8[1].y < y )
              v10 = v8 + 1;
            goto LABEL_7;
          }
          v64 = v8[2].y;
          ++v8;
          v65 = &v8->y;
        }
        while ( v64 <= v8->y );
        v10 = v8;
        do
        {
          if ( v64 > y )
            break;
          if ( !--v5 )
            goto LABEL_7;
          v64 = v65[4];
          v65 += 2;
        }
        while ( v64 >= *v65 );
        return 0LL;
      }
    }
  }
LABEL_7:
  v12 = (__m128i *)*((_QWORD *)a2 + 1);
  v13 = v10->y + 15;
  *((_QWORD *)&v73 + 1) = v10;
  *((_QWORD *)&v70 + 1) = v10;
  v14 = v13 >> 4;
  v71 = 8LL;
  v15 = (_mm_srli_si128(v12[48LL], 8).m128i_i32[1] - (__int64)(int)HIDWORD(v12[3].m128i_i64[0]) + 15) >> 4;
  v74 = 4294967288LL;
  v16 = 24 * v15 + 136;
  if ( v16 > 0x7FFFFFFF )
    return 0LL;
  Object = AllocateObject((unsigned int)v16);
  *(_QWORD *)this = Object;
  if ( !Object )
    return 0LL;
  *(_DWORD *)(Object + 24) = v16;
  v18 = 1;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + (unsigned int)v16;
  v19 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v19[1] = v19;
  *v19 = v19;
  v20 = (_DWORD *)(*(_QWORD *)this + 104LL);
  v20[1] = 0x80000000;
  *v20 = 0;
  v20[2] = v14;
  v20[3] = 0;
  v21 = (_DWORD *)((char *)v20 + (unsigned int)(4 * *v20 + 16));
LABEL_10:
  v22 = 1LL;
  v23 = (char *)&v72 + 4;
LABEL_11:
  if ( *((_DWORD *)v23 + 8) )
    goto LABEL_24;
  while ( --v76 >= 0 )
  {
    v24 = *(int **)(v23 + 20);
    v25 = (struct _POINTFIX *)((char *)v24 + *((int *)v23 + 7));
    *(_QWORD *)(v23 + 20) = v25;
    if ( v25 < v4 )
    {
      v26 = v68;
    }
    else
    {
      v26 = v25;
      if ( v25 > v68 )
        v26 = v4;
    }
    v27 = v26->y;
    *(_QWORD *)(v23 + 20) = v26;
    *((_DWORD *)v23 + 8) = ((v27 + 15) >> 4) - v14;
    if ( ((v27 + 15) >> 4) - v14 > 0 )
    {
      v28 = v24[1];
      v29 = v27 - v28;
      v30 = *v24;
      v31 = v26->x - *v24;
      if ( v31 < 0 )
      {
        v61 = v30 - v26->x;
        if ( (int)v61 < (int)v29 )
        {
          *(_DWORD *)v23 = -1;
          v63 = v29 - v61;
        }
        else
        {
          v62 = -(int)(v61 / v29);
          *((_DWORD *)v23 + 2) = v61 % v29;
          *(_DWORD *)v23 = v62;
          if ( (int)(v61 % v29) <= 0 )
            goto LABEL_20;
          *(_DWORD *)v23 = v62 - 1;
          v63 = v29 - v61 % v29;
        }
        *((_DWORD *)v23 + 2) = v63;
        goto LABEL_20;
      }
      if ( v31 >= (int)v29 )
      {
        *(_DWORD *)v23 = v31 / v29;
        *((_DWORD *)v23 + 2) = v31 % v29;
      }
      else
      {
        *(_DWORD *)v23 = 0;
        *((_DWORD *)v23 + 2) = v31;
      }
LABEL_20:
      *((_DWORD *)v23 + 1) = -1;
      *((_DWORD *)v23 + 3) = v29;
      *((_DWORD *)v23 - 1) = v30;
      v32 = v28 & 0xF;
      if ( v32 )
      {
        v43 = 16 - v32;
        if ( 16 - v32 > 0 )
        {
          v44 = *(_DWORD *)v23;
          v45 = -1;
          v46 = *((_DWORD *)v23 + 2);
          do
          {
            v47 = v44 + *((_DWORD *)v23 - 1);
            v48 = v46 + v45 < 0;
            v45 += v46;
            *((_DWORD *)v23 - 1) = v47;
            if ( !v48 )
            {
              v45 -= v29;
              *((_DWORD *)v23 - 1) = v47 + 1;
            }
            --v43;
          }
          while ( v43 > 0 );
          *((_DWORD *)v23 + 1) = v45;
        }
      }
      v33 = *((_DWORD *)v23 - 1);
      if ( (v33 & 0xF) != 0 )
      {
        *((_DWORD *)v23 + 1) -= v29 * (16 - (*((_DWORD *)v23 - 1) & 0xF));
        *((_DWORD *)v23 - 1) = v33 + 15;
      }
      *((int *)v23 - 1) >>= 4;
      *((int *)v23 + 1) >>= 4;
      v4 = a4;
LABEL_24:
      v23 -= 40;
      if ( --v22 < 0 )
      {
        v34 = HIDWORD(v71);
        v35 = DWORD1(v72);
        v36 = DWORD1(v69);
        if ( SHIDWORD(v74) < SHIDWORD(v71) )
          v34 = HIDWORD(v74);
        HIDWORD(v74) -= v34;
        HIDWORD(v71) -= v34;
        v37 = HIDWORD(v72);
        if ( !(HIDWORD(v72) | HIDWORD(v69)) && !(DWORD1(v72) | DWORD1(v69)) )
        {
          v38 = v72;
          v39 = v69;
          if ( (_DWORD)v72 != (_DWORD)v69 )
          {
            if ( (int)v72 > (int)v69 )
            {
              v38 = v69;
              v39 = v72;
            }
            if ( *v20 == 2 && v20[3] == v38 && v20[4] == v39 )
              goto LABEL_88;
            *v21 = 2;
            v21[3] = v38;
            v21[4] = v39;
            v21[5] = 2;
LABEL_34:
            v21[1] = v14;
            v20 = v21;
            v40 = *v21;
            v14 += v34;
            v21[2] = v14;
            v21 = (_DWORD *)((char *)v21 + (unsigned int)(4 * v40 + 16));
            ++v18;
            goto LABEL_35;
          }
          if ( *v20 )
          {
            *v21 = 0;
            v21[3] = 0;
            goto LABEL_34;
          }
LABEL_88:
          v14 += v34;
          v20[2] = v14;
LABEL_35:
          v4 = a4;
          goto LABEL_10;
        }
        v49 = (unsigned __int64)v74;
        v50 = v73;
        v51 = (unsigned __int64)v71;
        v52 = v70;
        while ( 2 )
        {
          v53 = v69;
          v54 = DWORD2(v69);
          v55 = v72;
          v56 = DWORD2(v72);
LABEL_48:
          if ( v53 - v55 <= 0 )
          {
            if ( v53 != v55 )
            {
              v66 = v72;
              v67 = v49;
              v70 = v50;
              v72 = v69;
              v35 = DWORD1(v69);
              v37 = HIDWORD(v69);
              v50 = v52;
              v69 = v66;
              v36 = DWORD1(v66);
              v49 = v51;
              v51 = v67;
              v73 = v52;
              v52 = v70;
              continue;
            }
            if ( *v20 )
            {
              *v21 = 0;
              v21[3] = 0;
              goto LABEL_52;
            }
LABEL_60:
            v20[2] = ++v14;
          }
          else
          {
            if ( *v20 == 2 && v20[3] == v55 && v20[4] == v53 )
              goto LABEL_60;
            *v21 = 2;
            v21[3] = v55;
            v21[4] = v53;
            v21[5] = 2;
LABEL_52:
            v57 = *v21;
            v20 = v21;
            v21[1] = v14++;
            v21[2] = v14;
            v21 = (_DWORD *)((char *)v21 + (unsigned int)(4 * v57 + 16));
            v37 = HIDWORD(v72);
            ++v18;
          }
          break;
        }
        v53 += v36;
        v48 = HIDWORD(v69) + v54 < 0;
        v54 += HIDWORD(v69);
        DWORD2(v69) = v54;
        LODWORD(v69) = v53;
        if ( !v48 )
        {
          v54 -= v70;
          ++v53;
          DWORD2(v69) = v54;
          LODWORD(v69) = v53;
        }
        v55 += v35;
        v48 = v37 + v56 < 0;
        v56 += v37;
        LODWORD(v72) = v55;
        DWORD2(v72) = v56;
        if ( !v48 )
        {
          v56 -= v73;
          ++v55;
          DWORD2(v72) = v56;
          LODWORD(v72) = v55;
        }
        if ( !--v34 )
        {
          v74 = v49;
          v71 = v51;
          goto LABEL_35;
        }
        goto LABEL_48;
      }
      goto LABEL_11;
    }
  }
  if ( *v20 )
  {
    *v21 = 0;
    ++v18;
    v21[3] = 0;
    v41 = *v21;
    v21[1] = v14;
    v21[2] = 0x7FFFFFFF;
    v21 = (_DWORD *)((char *)v21 + (unsigned int)(4 * v41 + 16));
  }
  else
  {
    v20[2] = 0x7FFFFFFF;
  }
  result = 1LL;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = v18;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = v21;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = (_DWORD)v21 - *(_QWORD *)this;
  return result;
}
