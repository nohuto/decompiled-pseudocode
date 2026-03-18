/*
 * XREFs of ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00EA950
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00EA7C8 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bFastFill(
        int a1,
        struct _POINTFIX *a2,
        struct _RECTL *a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void (*a5)(int, struct _ROW *, unsigned int, void *))
{
  struct _POINTFIX *v5; // r13
  struct _POINTFIX *v6; // r8
  int v7; // r10d
  FIX y; // r9d
  struct _POINTFIX *v9; // rcx
  __int32 *v11; // r14
  int v12; // esi
  int v13; // ebx
  int i; // r12d
  int *v15; // rdx
  struct _POINTFIX *v16; // rcx
  struct _POINTFIX *v17; // rax
  int v18; // edi
  int v19; // r13d
  unsigned int v20; // r9d
  int v21; // r10d
  int v22; // ecx
  int v23; // edx
  int v24; // r10d
  __int64 v25; // r11
  int v26; // eax
  int v27; // edi
  int v28; // edx
  unsigned int v29; // ecx
  int v30; // eax
  __int128 v31; // xmm2
  __int128 v32; // xmm3
  __int64 v33; // xmm4_8
  FIX v34; // ecx
  FIX *p_y; // rax
  int v36; // r8d
  int v37; // edx
  __int64 v38; // r8
  char *v39; // rdx
  struct _POINTFIX *v40; // rcx
  __m128i v41; // xmm0
  int v42; // r12d
  __int32 v43; // ecx
  int v44; // r8d
  __int32 v45; // eax
  int v46; // ecx
  int v47; // eax
  unsigned int v48; // eax
  int j; // ecx
  int v50; // edx
  int v51; // eax
  bool v52; // sf
  int v53; // edx
  int v54; // r10d
  __int64 v55; // rax
  struct _POINTFIX *v56; // [rsp+48h] [rbp-240h]
  __int128 v57; // [rsp+50h] [rbp-238h]
  __int128 v58; // [rsp+60h] [rbp-228h]
  __int64 v59; // [rsp+70h] [rbp-218h]
  __int128 v60; // [rsp+78h] [rbp-210h]
  __int128 v61; // [rsp+88h] [rbp-200h] BYREF
  __int64 v62; // [rsp+98h] [rbp-1F0h]
  __int32 *v63; // [rsp+A0h] [rbp-1E8h]
  __m128i v64; // [rsp+A8h] [rbp-1E0h]
  struct _POINTFIX *v65; // [rsp+B8h] [rbp-1D0h]
  void (*v66)(int, struct _ROW *, unsigned int, void *); // [rsp+C0h] [rbp-1C8h]
  struct _POINTFIX *v67; // [rsp+C8h] [rbp-1C0h]
  struct _RECTL *v68; // [rsp+D0h] [rbp-1B8h]
  void (*v69)(struct _RECTL *, unsigned int, void *); // [rsp+D8h] [rbp-1B0h]
  int v70; // [rsp+E0h] [rbp-1A8h]
  int v71; // [rsp+E8h] [rbp-1A0h]
  int v72; // [rsp+ECh] [rbp-19Ch]
  int v73; // [rsp+F0h] [rbp-198h]
  int v74; // [rsp+F4h] [rbp-194h]
  _BYTE v75[320]; // [rsp+100h] [rbp-188h] BYREF
  int v76; // [rsp+290h] [rbp+8h]

  v76 = a1;
  v5 = a2;
  v56 = a2;
  v65 = a2;
  v68 = a3;
  v69 = a4;
  v66 = a5;
  v6 = a2;
  v67 = &a2[a1 - 1];
  v7 = a1 - 1;
  y = a2->y;
  if ( a2[1].y <= y )
  {
    do
    {
      ++v6;
      if ( !--v7 )
        goto LABEL_13;
    }
    while ( v6[1].y <= v6->y );
    v9 = v6;
    do
    {
      if ( !--v7 )
        goto LABEL_13;
      ++v9;
    }
    while ( v9[1].y >= v9->y );
    do
    {
      if ( v9[1].y < y )
        break;
      if ( !--v7 )
        goto LABEL_13;
      ++v9;
    }
    while ( v9[1].y <= v9->y );
    return 0LL;
  }
  do
  {
    if ( !--v7 )
    {
LABEL_13:
      v62 = 4294967288LL;
      v59 = 8LL;
      *((_QWORD *)&v61 + 1) = v6;
      *((_QWORD *)&v58 + 1) = v6;
      v64 = 0uLL;
      v11 = (__int32 *)v75;
      v63 = (__int32 *)v75;
      v12 = 0;
      v13 = (v6->y + 15) >> 4;
      if ( v68 )
      {
        v41 = *(__m128i *)v68;
        v64 = v41;
        if ( v41.m128i_i32[1] > v13 )
          v13 = v41.m128i_i32[1];
        if ( v13 >= _mm_srli_si128(v41, 8).m128i_i32[1] )
          return 1LL;
      }
      else
      {
        v64.m128i_i32[1] = 0x80000000;
        v64.m128i_i32[3] = 0x7FFFFFFF;
      }
      if ( !v68 )
        goto LABEL_16;
      v38 = 1LL;
      v39 = (char *)&v61 + 8;
      while ( v38 >= 0 )
      {
        while ( 1 )
        {
          if ( !v76 )
            return 1LL;
          v40 = (struct _POINTFIX *)(*(_QWORD *)v39 + *((int *)v39 + 2));
          if ( v40 < v5 )
          {
            v40 = v67;
          }
          else if ( v40 > v67 )
          {
            v40 = v5;
          }
          if ( v40->y >> 4 >= v64.m128i_i32[1] )
            break;
          --v76;
          *(_QWORD *)v39 = v40;
        }
        --v38;
        v39 -= 40;
      }
LABEL_16:
      while ( 1 )
      {
        for ( i = 1; i >= 0; --i )
        {
          if ( *((_DWORD *)&v59 + 10 * i + 1) )
            continue;
          do
          {
            if ( --v76 < 0 || v13 >= v64.m128i_i32[3] )
            {
              if ( v12 )
                _guard_dispatch_icall_fptr();
              return 1LL;
            }
            v15 = (int *)*((_QWORD *)&v58 + 5 * i + 1);
            v16 = (struct _POINTFIX *)((char *)v15 + *((int *)&v59 + 10 * i));
            *((_QWORD *)&v58 + 5 * i + 1) = v16;
            if ( v16 < v5 )
            {
              v17 = v67;
            }
            else
            {
              v17 = v16;
              if ( v16 > v67 )
                v17 = v5;
            }
            *((_QWORD *)&v58 + 5 * i + 1) = v17;
            v18 = v17->y;
            *((_DWORD *)&v59 + 10 * i + 1) = ((v18 + 15) >> 4) - v13;
          }
          while ( ((v18 + 15) >> 4) - v13 <= 0 );
          v19 = v15[1];
          v20 = v18 - v19;
          v21 = *v15;
          v22 = v17->x - *v15;
          if ( v22 < 0 )
          {
            v29 = *v15 - v17->x;
            if ( (int)v29 < (int)v20 )
            {
              *((_DWORD *)&v57 + 10 * i + 1) = -1;
              v48 = v20 - v29;
            }
            else
            {
              v30 = -(int)(v29 / v20);
              *((_DWORD *)&v57 + 10 * i + 1) = v30;
              *((_DWORD *)&v57 + 10 * i + 3) = v29 % v20;
              if ( (int)(v29 % v20) <= 0 )
                goto LABEL_28;
              *((_DWORD *)&v57 + 10 * i + 1) = v30 - 1;
              v48 = v20 - v29 % v20;
            }
            *((_DWORD *)&v57 + 10 * i + 3) = v48;
          }
          else if ( v22 >= (int)v20 )
          {
            *((_DWORD *)&v57 + 10 * i + 1) = v22 / v20;
            *((_DWORD *)&v57 + 10 * i + 3) = v22 % v20;
          }
          else
          {
            *((_DWORD *)&v57 + 10 * i + 1) = 0;
            *((_DWORD *)&v57 + 10 * i + 3) = v22;
          }
LABEL_28:
          *((_DWORD *)&v58 + 10 * i) = v20;
          *((_DWORD *)&v57 + 10 * i + 2) = -1;
          *((_DWORD *)&v57 + 10 * i) = v21;
          if ( (v19 & 0xF) != 0 )
          {
            for ( j = 16 - (v19 & 0xF); j > 0; --j )
            {
              *((_DWORD *)&v57 + 10 * i) += *((_DWORD *)&v57 + 10 * i + 1);
              v50 = *((_DWORD *)&v57 + 10 * i);
              v51 = *((_DWORD *)&v57 + 10 * i + 3);
              v52 = v51 + *((_DWORD *)&v57 + 10 * i + 2) < 0;
              *((_DWORD *)&v57 + 10 * i + 2) += v51;
              if ( !v52 )
              {
                *((_DWORD *)&v57 + 10 * i + 2) -= v20;
                *((_DWORD *)&v57 + 10 * i) = v50 + 1;
              }
            }
          }
          v23 = *((_DWORD *)&v57 + 10 * i);
          if ( (v23 & 0xF) != 0 )
          {
            *((_DWORD *)&v57 + 10 * i + 2) -= v20 * (16 - (*((_DWORD *)&v57 + 10 * i) & 0xF));
            *((_DWORD *)&v57 + 10 * i) = v23 + 15;
          }
          *((int *)&v57 + 10 * i) >>= 4;
          v24 = *((_DWORD *)&v57 + 10 * i);
          *((int *)&v57 + 10 * i + 2) >>= 4;
          v25 = *((int *)&v57 + 10 * i + 2);
          v26 = (v19 + 15) >> 4;
          if ( v26 >= v64.m128i_i32[1] )
            goto LABEL_32;
          v53 = v64.m128i_i32[1] - v26;
          if ( v18 >> 4 < v64.m128i_i32[1] && !*((_DWORD *)&v57 + 10 * i + 1) && !*((_DWORD *)&v57 + 10 * i + 3) )
            goto LABEL_32;
          v54 = v53 * *((_DWORD *)&v57 + 10 * i + 1) + v24;
          *((_DWORD *)&v57 + 10 * i) = v54;
          v55 = v25 + v53 * (__int64)*((int *)&v57 + 10 * i + 3);
          if ( v55 < 0 )
          {
            *((_DWORD *)&v57 + 10 * i + 2) = v55;
LABEL_32:
            v5 = v56;
            continue;
          }
          v5 = v56;
          if ( (v55 & 0xFFFFFFFF80000000uLL) != 0 )
          {
            v70 = v55 % (unsigned __int64)v20;
            *((_DWORD *)&v57 + 10 * i + 2) = v70 - v20;
            *((_DWORD *)&v57 + 10 * i) = v54 + v55 / (unsigned __int64)v20 + 1;
          }
          else
          {
            *((_DWORD *)&v57 + 10 * i) = v54 + (int)v55 / (int)v20 + 1;
            *((_DWORD *)&v57 + 10 * i + 2) = (int)v55 % (int)v20 - v20;
          }
        }
        v27 = HIDWORD(v59);
        if ( SHIDWORD(v62) < SHIDWORD(v59) )
          v27 = HIDWORD(v62);
        HIDWORD(v62) -= v27;
        HIDWORD(v59) -= v27;
        if ( v27 + v13 > v64.m128i_i32[3] )
          v27 = v64.m128i_i32[3] - v13;
        if ( HIDWORD(v60) | HIDWORD(v57) || DWORD1(v60) | DWORD1(v57) || v27 <= 2 )
          break;
        if ( v12 )
        {
          _guard_dispatch_icall_fptr();
          v11 = (__int32 *)v75;
          v63 = (__int32 *)v75;
          v12 = 0;
        }
        v36 = v60;
        v37 = v57;
        if ( (_DWORD)v60 != (_DWORD)v57 )
        {
          if ( (int)v60 > (int)v57 )
          {
            v36 = v57;
            v37 = v60;
          }
          v72 = v13;
          v74 = v27 + v13;
          if ( v68 )
          {
            v46 = v64.m128i_i32[0];
            if ( v36 >= v64.m128i_i32[0] )
              v46 = v36;
            v71 = v46;
            v47 = v64.m128i_i32[2];
            if ( v37 <= v64.m128i_i32[2] )
              v47 = v37;
            v73 = v47;
            if ( v46 < v47 )
              _guard_dispatch_icall_fptr();
          }
          else
          {
            v71 = v36;
            v73 = v37;
            _guard_dispatch_icall_fptr();
          }
        }
        v13 += v27;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v28 = v57;
          if ( (int)v57 - (int)v60 > 0 )
            break;
          if ( (_DWORD)v57 == (_DWORD)v60 )
          {
            if ( !v12 )
              goto LABEL_44;
LABEL_73:
            _guard_dispatch_icall_fptr();
            v11 = (__int32 *)v75;
            v63 = (__int32 *)v75;
            v12 = 0;
            goto LABEL_44;
          }
          v31 = v60;
          v32 = v61;
          v33 = v62;
          v60 = v57;
          v61 = v58;
          v62 = v59;
          v57 = v31;
          v58 = v32;
          v59 = v33;
        }
        if ( v68 )
        {
          v42 = v64.m128i_i32[0];
          v43 = v64.m128i_i32[0];
          if ( (int)v60 >= v64.m128i_i32[0] )
            v43 = v60;
          *v11 = v43;
          v44 = v64.m128i_i32[2];
          v45 = v64.m128i_i32[2];
          if ( (int)v57 <= v64.m128i_i32[2] )
            v45 = v57;
          v11[1] = v45;
          if ( v43 >= v45 )
          {
            if ( v12 )
            {
              _guard_dispatch_icall_fptr();
              v11 = (__int32 *)v75;
              v63 = (__int32 *)v75;
              v12 = 0;
              v44 = v64.m128i_i32[2];
            }
            if ( (int)v60 < v42 && (int)**((_DWORD **)&v61 + 1) >> 4 < v42 && (int)**((_DWORD **)&v58 + 1) >> 4 < v42
              || (int)v60 >= v44 && (int)**((_DWORD **)&v61 + 1) >> 4 >= v44 && (int)**((_DWORD **)&v58 + 1) >> 4 >= v44 )
            {
              v13 += v27;
              v5 = v56;
              goto LABEL_16;
            }
            goto LABEL_44;
          }
        }
        else
        {
          *v11 = v60;
          v11[1] = v28;
        }
        ++v12;
        v11 += 2;
        v63 = v11;
        if ( v12 == 40 )
          goto LABEL_73;
LABEL_44:
        LODWORD(v57) = DWORD1(v57) + v57;
        DWORD2(v57) += HIDWORD(v57);
        if ( (SDWORD2(v57) & 0x80000000) == 0 )
        {
          DWORD2(v57) -= v58;
          LODWORD(v57) = v57 + 1;
        }
        LODWORD(v60) = DWORD1(v60) + v60;
        DWORD2(v60) += HIDWORD(v60);
        if ( (SDWORD2(v60) & 0x80000000) == 0 )
        {
          DWORD2(v60) -= v61;
          LODWORD(v60) = v60 + 1;
        }
        --v27;
        ++v13;
        if ( !v27 )
        {
          v5 = v56;
          goto LABEL_16;
        }
      }
    }
    ++a2;
  }
  while ( a2[1].y >= a2->y );
  do
  {
    if ( !--v7 )
    {
      if ( a2[1].y < y )
        v6 = a2 + 1;
      goto LABEL_13;
    }
    ++a2;
    v34 = a2[1].y;
    p_y = &a2->y;
  }
  while ( v34 <= a2->y );
  v6 = a2;
  do
  {
    if ( v34 > y )
      break;
    if ( !--v7 )
      goto LABEL_13;
    p_y += 2;
    v34 = p_y[2];
  }
  while ( v34 >= *p_y );
  return 0LL;
}
