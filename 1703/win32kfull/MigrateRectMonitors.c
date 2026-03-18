/*
 * XREFs of MigrateRectMonitors @ 0x1C01F5BCC
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00B79CC (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01F27EC (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C01F7344 (xxxEvaluateDestRectForMonitorMigration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01A3E74 (ReduceArrangedRectangleByFrameMargin.c)
 *     TransformRectAroundPoint @ 0x1C01C09B4 (TransformRectAroundPoint.c)
 */

_BOOL8 __fastcall MigrateRectMonitors(
        __int64 a1,
        __m128i *a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        char a8)
{
  __m128i v8; // xmm1
  int v9; // edx
  __int64 v11; // r9
  int v12; // edx
  __int64 v13; // rax
  _DWORD *v14; // rsi
  __int64 v15; // rax
  __int32 v16; // r11d
  INT v17; // r14d
  INT v18; // r8d
  INT v19; // r10d
  __m128i v20; // xmm0
  INT v21; // r12d
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  int *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  INT v32; // edx
  INT v33; // ecx
  char v34; // r15
  int v35; // r9d
  __int64 v36; // r13
  INT v37; // r12d
  INT v38; // eax
  INT v39; // eax
  INT v40; // esi
  INT v41; // eax
  INT v42; // ecx
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  int v46; // r10d
  int v47; // r11d
  int v48; // r14d
  int v49; // r10d
  int v50; // ecx
  int v51; // eax
  INT v52; // ecx
  int v53; // eax
  __int64 v54; // rax
  BOOL v55; // edi
  INT v56; // eax
  INT v57; // eax
  INT v58; // r13d
  INT v59; // ecx
  int v60; // edx
  int v61; // r8d
  int v62; // ecx
  int v63; // eax
  INT b; // [rsp+30h] [rbp-81h]
  INT c; // [rsp+38h] [rbp-79h]
  INT v67; // [rsp+40h] [rbp-71h]
  INT v68; // [rsp+50h] [rbp-61h]
  __int128 v71; // [rsp+78h] [rbp-39h] BYREF
  __m128i v72; // [rsp+88h] [rbp-29h] BYREF

  v8 = *a2;
  v9 = *(_DWORD *)(a1 + 368);
  v11 = a1;
  v72 = v8;
  v12 = v9 & 0xF;
  if ( !v12
    && (v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 52LL) & 1) != 0 )
  {
    v14 = (_DWORD *)(*(_QWORD *)(a3 + 40) + 92LL);
  }
  else if ( v12 == 1
         && (v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v15 + 8) + 52LL) & 1) != 0 )
  {
    v14 = (_DWORD *)(*(_QWORD *)(a3 + 40) + 108LL);
  }
  else
  {
    v14 = (_DWORD *)(*(_QWORD *)(a3 + 40) + 76LL);
  }
  if ( (*(_BYTE *)(a1 + 305) & 3) != 0 )
  {
    ReduceArrangedRectangleByFrameMargin(a1, v14, v72.m128i_i32);
    v8 = v72;
    v11 = a1;
  }
  v16 = v72.m128i_i32[1];
  v17 = v72.m128i_i32[3] - v72.m128i_i32[1];
  v18 = v14[2] - *v14;
  v19 = v14[3] - v14[1];
  v20 = _mm_srli_si128(v8, 8);
  v21 = _mm_cvtsi128_si32(v20) - v8.m128i_i32[0];
  v67 = v18;
  c = v19;
  if ( a6 )
  {
    v22 = *(_DWORD *)(v11 + 368) & 0xF;
    if ( !v22
      && (v23 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 408LL)) != 0
      && (*(_DWORD *)(**(_QWORD **)(v23 + 8) + 52LL) & 1) != 0 )
    {
      v24 = *(_QWORD *)(a5 + 40) + 92LL;
    }
    else if ( v22 == 1
           && (v25 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 408LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v25 + 8) + 52LL) & 1) != 0 )
    {
      v24 = *(_QWORD *)(a5 + 40) + 108LL;
    }
    else
    {
      v24 = *(_QWORD *)(a5 + 40) + 76LL;
    }
    if ( !v22
      && (v26 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 408LL)) != 0
      && (*(_DWORD *)(**(_QWORD **)(v26 + 8) + 52LL) & 1) != 0 )
    {
      v27 = *(_QWORD *)(a6 + 40) + 92LL;
    }
    else if ( v22 == 1
           && (v28 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 408LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v28 + 8) + 52LL) & 1) != 0 )
    {
      v27 = *(_QWORD *)(a6 + 40) + 108LL;
    }
    else
    {
      v27 = *(_QWORD *)(a6 + 40) + 76LL;
    }
    v29 = (int *)&v71;
    v18 = v14[2] - *v14;
    *(_QWORD *)&v71 = *(_QWORD *)v24;
    DWORD2(v71) = *(_DWORD *)(v24 + 8);
    HIDWORD(v71) = *(_DWORD *)(v27 + 12);
  }
  else if ( (*(_DWORD *)(v11 + 368) & 0xF) == 0
         && (v30 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v30 + 8) + 52LL) & 1) != 0 )
  {
    v29 = (int *)(*(_QWORD *)(a5 + 40) + 92LL);
  }
  else if ( (*(_DWORD *)(v11 + 368) & 0xF) == 1
         && (v31 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v31 + 8) + 52LL) & 1) != 0 )
  {
    v29 = (int *)(*(_QWORD *)(a5 + 40) + 108LL);
  }
  else
  {
    v29 = (int *)(*(_QWORD *)(a5 + 40) + 76LL);
  }
  v32 = v29[2] - *v29;
  v33 = v29[3] - v29[1];
  v68 = v32;
  b = v33;
  if ( v32 < v21 )
  {
    v56 = EngMulDiv(v21, v32, v18);
    v34 = a8;
    v21 = v56;
    v33 = b;
    v19 = c;
    if ( (a8 & 0x20) != 0 && v56 <= a7[22] )
      v21 = a7[22];
  }
  else
  {
    v34 = a8;
    v35 = a8 & 1;
    if ( (a8 & 1) != 0 || v33 >= v17 )
    {
      *(__m128i *)a4 = v8;
      if ( v20.m128i_i32[0] <= v14[2] && ((a8 & 1) != 0 || v72.m128i_i32[3] <= v14[3]) )
      {
        v36 = v8.m128i_i64[0];
        if ( v18 == v21 )
        {
          v37 = 0;
        }
        else
        {
          v38 = EngMulDiv(v8.m128i_i32[0] - *v14, v32 - v21, v18 - v21);
          v33 = b;
          v37 = v38;
          v35 = a8 & 1;
          v19 = c;
          v16 = v72.m128i_i32[1];
        }
        if ( !v35 && v19 != v17 )
        {
          v39 = EngMulDiv(v16 - v14[1], v33 - v17, v19 - v17);
          v40 = b;
LABEL_56:
          v35 = a8 & 1;
LABEL_57:
          v43 = v39 + v29[1] - v72.m128i_i32[1];
          v44 = v37 + *v29 - v36;
          v45 = v44 + *a4;
          v46 = a4[1];
          v47 = v44 + a4[2];
          v48 = v43 + a4[3];
          *a4 = v45;
          v49 = v43 + v46;
          a4[2] = v47;
          a4[3] = v48;
          a4[1] = v49;
          if ( (a8 & 4) != 0 )
          {
            v50 = *v29 - v45;
            *a4 = *v29;
            v51 = v47 + v50;
          }
          else
          {
            if ( (a8 & 2) == 0 )
            {
LABEL_62:
              if ( v35 )
              {
                if ( (a8 & 8) != 0 || (v52 = a7[25], v53 = v49 + v52, v40 < v52) )
                  v53 = v29[3];
                a4[3] = v53;
              }
              v54 = *(_QWORD *)a4 - v36;
              if ( *(_QWORD *)a4 == v36 )
                v54 = *((_QWORD *)a4 + 1) - v20.m128i_i64[0];
              v55 = v54 != 0;
              goto LABEL_93;
            }
            v51 = v29[2];
            *a4 = v51 + v45 - v47;
          }
          a4[1] = v49;
          a4[3] = v48;
          a4[2] = v51;
          goto LABEL_62;
        }
      }
      else
      {
        v36 = v8.m128i_i64[0];
        v41 = EngMulDiv(v8.m128i_i32[0] - *v14, v32, v18);
        v35 = a8 & 1;
        v37 = v41;
        if ( (a8 & 1) == 0 )
        {
          v42 = v72.m128i_i32[1] - v14[1];
          v40 = b;
          v39 = EngMulDiv(v42, b, c);
          goto LABEL_56;
        }
      }
      v40 = b;
      v39 = 0;
      goto LABEL_57;
    }
  }
  if ( (v34 & 1) != 0 )
  {
    v17 = v33;
  }
  else if ( v33 < v17 )
  {
    v57 = EngMulDiv(v17, v33, v19);
    v17 = v57;
    if ( (v34 & 0x20) != 0 && v57 <= a7[23] )
      v17 = a7[23];
  }
  if ( (v34 & 8) != 0 || v21 < a7[22] || v21 > a7[24] || v17 < a7[23] || v17 > a7[25] )
    return 0;
  v58 = EngMulDiv(v8.m128i_i32[0] - *v14, v68, v67);
  if ( (v34 & 1) != 0 )
    v59 = 0;
  else
    v59 = EngMulDiv(v72.m128i_i32[1] - v14[1], b, c);
  v60 = v58 + *v29;
  *a4 = v60;
  v61 = v59 + v29[1];
  a4[1] = v61;
  a4[2] = v60 + v21;
  a4[3] = v61 + v17;
  if ( (v34 & 4) != 0 )
  {
    v62 = *v29 - v60;
    *a4 = *v29;
    v63 = v60 + v21 + v62;
LABEL_91:
    a4[1] = v61;
    a4[3] = v61 + v17;
    a4[2] = v63;
    goto LABEL_92;
  }
  if ( (v34 & 2) != 0 )
  {
    v63 = v29[2];
    *a4 = v63 - v21;
    goto LABEL_91;
  }
LABEL_92:
  v55 = 1;
LABEL_93:
  if ( v55 && (*(_DWORD *)(a1 + 368) & 0xF) == 2 && (v34 & 0x10) != 0 )
  {
    v71 = *(_OWORD *)a4;
    TransformRectAroundPoint(
      &v71,
      *(_WORD *)(*(_QWORD *)(a3 + 40) + 128LL),
      0LL,
      a4,
      *(_WORD *)(*(_QWORD *)(a5 + 40) + 128LL),
      v71);
  }
  return v55;
}
