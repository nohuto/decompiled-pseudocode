/*
 * XREFs of ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C0124E9C
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C0124D14 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bFastFill(
        int a1,
        struct _POINTFIX *a2,
        struct _RECTL *a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void (*a5)(int, struct _ROW *, unsigned int, void *))
{
  struct _POINTFIX *v5; // r12
  struct _POINTFIX *v6; // r8
  int v7; // r10d
  FIX y; // r9d
  struct _POINTFIX *v9; // rcx
  __int32 *v11; // r14
  int v12; // esi
  int v13; // ebx
  int i; // r13d
  int *v15; // rdx
  unsigned __int64 v16; // rcx
  struct _POINTFIX *v17; // rax
  int v18; // ecx
  int v19; // r12d
  int v20; // edi
  unsigned int v21; // r9d
  int v22; // r10d
  int v23; // ecx
  int v24; // edx
  int v25; // r10d
  __int64 v26; // r11
  int v27; // eax
  int v28; // edi
  int v29; // edx
  unsigned int v30; // ecx
  int v31; // eax
  __int128 v32; // xmm2
  __int128 v33; // xmm3
  __int64 v34; // xmm4_8
  FIX v35; // eax
  FIX *p_y; // rdx
  int v37; // r8d
  int v38; // edx
  int v39; // r12d
  __int32 v40; // ecx
  int v41; // r8d
  __int32 v42; // eax
  __int64 v43; // r8
  char *v44; // rdx
  struct _POINTFIX *v45; // rcx
  __m128i v46; // xmm0
  unsigned int v47; // eax
  int j; // ecx
  int v49; // edx
  int v50; // eax
  bool v51; // sf
  int v52; // edx
  int v53; // r10d
  __int64 v54; // rax
  int v55; // ecx
  int v56; // eax
  struct _POINTFIX *v57; // [rsp+48h] [rbp-240h]
  __int128 v58; // [rsp+50h] [rbp-238h]
  __int128 v59; // [rsp+60h] [rbp-228h]
  __int64 v60; // [rsp+70h] [rbp-218h]
  __int128 v61; // [rsp+78h] [rbp-210h]
  __int128 v62; // [rsp+88h] [rbp-200h] BYREF
  __int64 v63; // [rsp+98h] [rbp-1F0h]
  __int32 *v64; // [rsp+A0h] [rbp-1E8h]
  __m128i v65; // [rsp+A8h] [rbp-1E0h]
  struct _POINTFIX *v66; // [rsp+B8h] [rbp-1D0h]
  void (*v67)(int, struct _ROW *, unsigned int, void *); // [rsp+C0h] [rbp-1C8h]
  struct _POINTFIX *v68; // [rsp+C8h] [rbp-1C0h]
  struct _RECTL *v69; // [rsp+D0h] [rbp-1B8h]
  void (*v70)(struct _RECTL *, unsigned int, void *); // [rsp+D8h] [rbp-1B0h]
  int v71; // [rsp+E0h] [rbp-1A8h]
  int v72; // [rsp+E8h] [rbp-1A0h]
  int v73; // [rsp+ECh] [rbp-19Ch]
  int v74; // [rsp+F0h] [rbp-198h]
  int v75; // [rsp+F4h] [rbp-194h]
  _BYTE v76[320]; // [rsp+100h] [rbp-188h] BYREF
  int v77; // [rsp+290h] [rbp+8h]

  v77 = a1;
  v5 = a2;
  v57 = a2;
  v66 = a2;
  v69 = a3;
  v70 = a4;
  v67 = a5;
  v6 = a2;
  v68 = &a2[a1 - 1];
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
      v63 = 4294967288LL;
      v60 = 8LL;
      *((_QWORD *)&v62 + 1) = v6;
      *((_QWORD *)&v59 + 1) = v6;
      v65 = 0uLL;
      v11 = (__int32 *)v76;
      v64 = (__int32 *)v76;
      v12 = 0;
      v13 = (v6->y + 15) >> 4;
      if ( v69 )
      {
        v46 = *(__m128i *)v69;
        v65 = v46;
        if ( v46.m128i_i32[1] > v13 )
          v13 = v46.m128i_i32[1];
        if ( v13 >= _mm_srli_si128(v46, 8).m128i_i32[1] )
          return 1LL;
      }
      else
      {
        v65.m128i_i32[1] = 0x80000000;
        v65.m128i_i32[3] = 0x7FFFFFFF;
      }
      if ( !v69 )
        goto LABEL_16;
      v43 = 1LL;
      v44 = (char *)&v62 + 8;
      while ( v43 >= 0 )
      {
        while ( 1 )
        {
          if ( !v77 )
            return 1LL;
          v45 = (struct _POINTFIX *)(*(_QWORD *)v44 + *((int *)v44 + 2));
          if ( v45 < v5 )
          {
            v45 = v68;
          }
          else if ( v45 > v68 )
          {
            v45 = v5;
          }
          if ( v45->y >> 4 >= v65.m128i_i32[1] )
            break;
          --v77;
          *(_QWORD *)v44 = v45;
        }
        --v43;
        v44 -= 40;
      }
LABEL_16:
      while ( 1 )
      {
        for ( i = 1; i >= 0; --i )
        {
          if ( *((_DWORD *)&v60 + 10 * i + 1) )
            continue;
          do
          {
            if ( --v77 < 0 || v13 >= v65.m128i_i32[3] )
            {
              if ( v12 )
                _guard_dispatch_icall_fptr();
              return 1LL;
            }
            v15 = (int *)*((_QWORD *)&v59 + 5 * i + 1);
            *((_QWORD *)&v59 + 5 * i + 1) = (char *)v15 + *((int *)&v60 + 10 * i);
            v16 = *((_QWORD *)&v59 + 5 * i + 1);
            if ( v16 < (unsigned __int64)v5 )
            {
              v17 = v68;
            }
            else
            {
              v17 = (struct _POINTFIX *)*((_QWORD *)&v59 + 5 * i + 1);
              if ( v16 > (unsigned __int64)v68 )
                v17 = v5;
            }
            *((_QWORD *)&v59 + 5 * i + 1) = v17;
            v18 = ((v17->y + 15) >> 4) - v13;
            *((_DWORD *)&v60 + 10 * i + 1) = v18;
          }
          while ( v18 <= 0 );
          v19 = v17->y;
          v20 = v15[1];
          v21 = v19 - v20;
          v22 = *v15;
          v23 = v17->x - *v15;
          if ( v23 < 0 )
          {
            v30 = *v15 - v17->x;
            if ( (int)v30 < (int)v21 )
            {
              *((_DWORD *)&v58 + 10 * i + 1) = -1;
              v47 = v21 - v30;
            }
            else
            {
              v31 = -(int)(v30 / v21);
              *((_DWORD *)&v58 + 10 * i + 1) = v31;
              *((_DWORD *)&v58 + 10 * i + 3) = v30 % v21;
              if ( (int)(v30 % v21) <= 0 )
                goto LABEL_28;
              *((_DWORD *)&v58 + 10 * i + 1) = v31 - 1;
              v47 = v21 - v30 % v21;
            }
            *((_DWORD *)&v58 + 10 * i + 3) = v47;
          }
          else if ( v23 >= (int)v21 )
          {
            *((_DWORD *)&v58 + 10 * i + 1) = v23 / v21;
            *((_DWORD *)&v58 + 10 * i + 3) = v23 % v21;
          }
          else
          {
            *((_DWORD *)&v58 + 10 * i + 1) = 0;
            *((_DWORD *)&v58 + 10 * i + 3) = v23;
          }
LABEL_28:
          *((_DWORD *)&v59 + 10 * i) = v21;
          *((_DWORD *)&v58 + 10 * i + 2) = -1;
          *((_DWORD *)&v58 + 10 * i) = v22;
          if ( (v20 & 0xF) != 0 )
          {
            for ( j = 16 - (v20 & 0xF); j > 0; --j )
            {
              *((_DWORD *)&v58 + 10 * i) += *((_DWORD *)&v58 + 10 * i + 1);
              v49 = *((_DWORD *)&v58 + 10 * i);
              v50 = *((_DWORD *)&v58 + 10 * i + 3);
              v51 = v50 + *((_DWORD *)&v58 + 10 * i + 2) < 0;
              *((_DWORD *)&v58 + 10 * i + 2) += v50;
              if ( !v51 )
              {
                *((_DWORD *)&v58 + 10 * i + 2) -= v21;
                *((_DWORD *)&v58 + 10 * i) = v49 + 1;
              }
            }
          }
          v24 = *((_DWORD *)&v58 + 10 * i);
          if ( (v24 & 0xF) != 0 )
          {
            *((_DWORD *)&v58 + 10 * i + 2) -= v21 * (16 - (*((_DWORD *)&v58 + 10 * i) & 0xF));
            *((_DWORD *)&v58 + 10 * i) = v24 + 15;
          }
          *((int *)&v58 + 10 * i) >>= 4;
          v25 = *((_DWORD *)&v58 + 10 * i);
          *((int *)&v58 + 10 * i + 2) >>= 4;
          v26 = *((int *)&v58 + 10 * i + 2);
          v27 = (v20 + 15) >> 4;
          if ( v27 >= v65.m128i_i32[1] )
            goto LABEL_32;
          v52 = v65.m128i_i32[1] - v27;
          if ( v19 >> 4 < v65.m128i_i32[1] && !*((_DWORD *)&v58 + 10 * i + 1) && !*((_DWORD *)&v58 + 10 * i + 3) )
            goto LABEL_32;
          v53 = v52 * *((_DWORD *)&v58 + 10 * i + 1) + v25;
          *((_DWORD *)&v58 + 10 * i) = v53;
          v54 = v26 + v52 * (__int64)*((int *)&v58 + 10 * i + 3);
          if ( v54 < 0 )
          {
            *((_DWORD *)&v58 + 10 * i + 2) = v54;
LABEL_32:
            v5 = v57;
            continue;
          }
          v5 = v57;
          if ( (v54 & 0xFFFFFFFF80000000uLL) != 0 )
          {
            v71 = v54 % (unsigned __int64)v21;
            *((_DWORD *)&v58 + 10 * i + 2) = v71 - v21;
            *((_DWORD *)&v58 + 10 * i) = v53 + v54 / (unsigned __int64)v21 + 1;
          }
          else
          {
            *((_DWORD *)&v58 + 10 * i) = v53 + (int)v54 / (int)v21 + 1;
            *((_DWORD *)&v58 + 10 * i + 2) = (int)v54 % (int)v21 - v21;
          }
        }
        v28 = HIDWORD(v60);
        if ( SHIDWORD(v63) < SHIDWORD(v60) )
          v28 = HIDWORD(v63);
        HIDWORD(v63) -= v28;
        HIDWORD(v60) -= v28;
        if ( v28 + v13 > v65.m128i_i32[3] )
          v28 = v65.m128i_i32[3] - v13;
        if ( HIDWORD(v61) | HIDWORD(v58) || DWORD1(v61) | DWORD1(v58) || v28 <= 2 )
          break;
        if ( v12 )
        {
          _guard_dispatch_icall_fptr();
          v11 = (__int32 *)v76;
          v64 = (__int32 *)v76;
          v12 = 0;
        }
        v37 = v61;
        v38 = v58;
        if ( (_DWORD)v61 != (_DWORD)v58 )
        {
          if ( (int)v61 > (int)v58 )
          {
            v37 = v58;
            v38 = v61;
          }
          v73 = v13;
          v75 = v28 + v13;
          if ( v69 )
          {
            v55 = v65.m128i_i32[0];
            if ( v37 >= v65.m128i_i32[0] )
              v55 = v37;
            v72 = v55;
            v56 = v65.m128i_i32[2];
            if ( v38 <= v65.m128i_i32[2] )
              v56 = v38;
            v74 = v56;
            if ( v55 < v56 )
              _guard_dispatch_icall_fptr();
          }
          else
          {
            v72 = v37;
            v74 = v38;
            _guard_dispatch_icall_fptr();
          }
        }
        v13 += v28;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v29 = v58;
          if ( (int)v58 - (int)v61 > 0 )
            break;
          if ( (_DWORD)v58 == (_DWORD)v61 )
          {
            if ( !v12 )
              goto LABEL_44;
LABEL_73:
            _guard_dispatch_icall_fptr();
            v11 = (__int32 *)v76;
            v64 = (__int32 *)v76;
            v12 = 0;
            goto LABEL_44;
          }
          v32 = v61;
          v33 = v62;
          v34 = v63;
          v61 = v58;
          v62 = v59;
          v63 = v60;
          v58 = v32;
          v59 = v33;
          v60 = v34;
        }
        if ( v69 )
        {
          v39 = v65.m128i_i32[0];
          v40 = v65.m128i_i32[0];
          if ( (int)v61 >= v65.m128i_i32[0] )
            v40 = v61;
          *v11 = v40;
          v41 = v65.m128i_i32[2];
          v42 = v65.m128i_i32[2];
          if ( (int)v58 <= v65.m128i_i32[2] )
            v42 = v58;
          v11[1] = v42;
          if ( v40 >= v42 )
          {
            if ( v12 )
            {
              _guard_dispatch_icall_fptr();
              v11 = (__int32 *)v76;
              v64 = (__int32 *)v76;
              v12 = 0;
              v41 = v65.m128i_i32[2];
            }
            if ( (int)v61 < v39 && (int)**((_DWORD **)&v62 + 1) >> 4 < v39 && (int)**((_DWORD **)&v59 + 1) >> 4 < v39
              || (int)v61 >= v41 && (int)**((_DWORD **)&v62 + 1) >> 4 >= v41 && (int)**((_DWORD **)&v59 + 1) >> 4 >= v41 )
            {
              v13 += v28;
              v5 = v57;
              goto LABEL_16;
            }
            goto LABEL_44;
          }
        }
        else
        {
          *v11 = v61;
          v11[1] = v29;
        }
        ++v12;
        v11 += 2;
        v64 = v11;
        if ( v12 == 40 )
          goto LABEL_73;
LABEL_44:
        LODWORD(v58) = DWORD1(v58) + v58;
        DWORD2(v58) += HIDWORD(v58);
        if ( (SDWORD2(v58) & 0x80000000) == 0 )
        {
          DWORD2(v58) -= v59;
          LODWORD(v58) = v58 + 1;
        }
        LODWORD(v61) = DWORD1(v61) + v61;
        DWORD2(v61) += HIDWORD(v61);
        if ( (SDWORD2(v61) & 0x80000000) == 0 )
        {
          DWORD2(v61) -= v62;
          LODWORD(v61) = v61 + 1;
        }
        --v28;
        ++v13;
        if ( !v28 )
        {
          v5 = v57;
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
  }
  while ( a2[1].y <= a2->y );
  v6 = a2;
  v35 = a2[1].y;
  p_y = &a2->y;
  do
  {
    if ( v35 > y )
      break;
    if ( !--v7 )
      goto LABEL_13;
    p_y += 2;
    v35 = p_y[2];
  }
  while ( v35 >= *p_y );
  return 0LL;
}
