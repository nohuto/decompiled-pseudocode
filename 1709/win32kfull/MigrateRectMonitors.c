/*
 * XREFs of MigrateRectMonitors @ 0x1C01DCF04
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01DA1B4 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C01DE61C (xxxEvaluateDestRectForMonitorMigration.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01AB288 (ReduceArrangedRectangleByFrameMargin.c)
 *     TransformRectAroundPoint @ 0x1C01C40FC (TransformRectAroundPoint.c)
 */

_BOOL8 __fastcall MigrateRectMonitors(
        __int64 a1,
        __m128i *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        char a8)
{
  __m128i v8; // xmm7
  BOOL v11; // r13d
  __int128 *MonitorWorkRectForWindow; // rax
  bool v13; // zf
  INT v14; // r14d
  __m128i v15; // xmm0
  int v16; // esi
  __m128i v17; // xmm0
  INT v18; // esi
  int v19; // edi
  __m128i v20; // xmm6
  __m128i v21; // xmm0
  int v22; // r12d
  INT v23; // edx
  INT v24; // r15d
  char v25; // r14
  int v26; // r9d
  int v27; // eax
  __int64 v28; // r13
  INT v29; // esi
  INT v30; // eax
  INT v31; // edx
  INT v32; // r8d
  INT v33; // eax
  INT v34; // ecx
  INT v35; // eax
  int v36; // ecx
  int v37; // esi
  int v38; // r10d
  int v39; // r8d
  int v40; // r11d
  int v41; // edx
  int v42; // r12d
  int v43; // eax
  int v44; // ecx
  INT v45; // ecx
  int v46; // eax
  __int64 v47; // rax
  INT v48; // eax
  _DWORD *v49; // rcx
  INT v50; // r13d
  INT v51; // eax
  int v52; // r9d
  int v53; // r8d
  int v54; // eax
  int v55; // ecx
  __int64 v56; // r8
  int v58; // [rsp+3Ch] [rbp-9Dh]
  __int128 v59; // [rsp+48h] [rbp-91h] BYREF
  INT c; // [rsp+58h] [rbp-81h]
  int v61; // [rsp+5Ch] [rbp-7Dh]
  __int128 v62; // [rsp+60h] [rbp-79h] BYREF
  __int64 v63; // [rsp+70h] [rbp-69h]
  INT b; // [rsp+78h] [rbp-61h]
  __int64 v65; // [rsp+80h] [rbp-59h]
  __int64 v66; // [rsp+88h] [rbp-51h]
  __int64 v67; // [rsp+90h] [rbp-49h]
  __int64 v68; // [rsp+98h] [rbp-41h]
  __m128i v69; // [rsp+A0h] [rbp-39h] BYREF

  v8 = *a2;
  v68 = a3;
  v67 = a1;
  v65 = a5;
  v11 = 0;
  v69 = v8;
  MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(&v59, a3, (struct tagWND *)a1);
  v13 = (*(_BYTE *)(a1 + 305) & 3) == 0;
  v62 = *MonitorWorkRectForWindow;
  if ( !v13 )
  {
    ReduceArrangedRectangleByFrameMargin(a1, &v62, v69.m128i_i32);
    v8 = v69;
  }
  v14 = DWORD2(v62) - v62;
  v63 = v8.m128i_i64[0];
  v15 = _mm_srli_si128(v8, 8);
  v16 = _mm_cvtsi128_si32(v15);
  v66 = v15.m128i_i64[0];
  v17 = _mm_srli_si128(v8, 12);
  v18 = v16 - v8.m128i_i32[0];
  v19 = _mm_cvtsi128_si32(v17) - v69.m128i_i32[1];
  v61 = _mm_cvtsi128_si32(v17);
  c = DWORD2(v62) - v62;
  v58 = HIDWORD(v62) - DWORD1(v62);
  if ( a6 )
  {
    v20 = *(__m128i *)GetMonitorWorkRectForWindow(&v59, a6, (struct tagWND *)a1);
    v21 = *(__m128i *)GetMonitorWorkRectForWindow(&v59, v65, (struct tagWND *)a1);
    *(_QWORD *)&v59 = v21.m128i_i64[0];
    *((_QWORD *)&v59 + 1) = __PAIR64__(
                              _mm_cvtsi128_si32(_mm_srli_si128(v20, 12)),
                              _mm_cvtsi128_si32(_mm_srli_si128(v21, 8)));
  }
  else
  {
    v59 = *GetMonitorWorkRectForWindow(&v59, v65, (struct tagWND *)a1);
  }
  v22 = v59;
  v23 = DWORD2(v59) - v59;
  v24 = HIDWORD(v59) - DWORD1(v59);
  b = DWORD2(v59) - v59;
  if ( DWORD2(v59) - (int)v59 < v18 )
  {
    v48 = EngMulDiv(v18, v23, v14);
    v25 = a8;
    v18 = v48;
    if ( (a8 & 0x20) != 0 && v48 <= a7[26] )
      v18 = a7[26];
  }
  else
  {
    v25 = a8;
    v26 = a8 & 1;
    if ( (a8 & 1) != 0 || v24 >= v19 )
    {
      v27 = v66;
      *(__m128i *)a4 = v8;
      if ( v27 <= SDWORD2(v62) && ((a8 & 1) != 0 || v61 <= SHIDWORD(v62)) )
      {
        v28 = v63;
        if ( c == v18 )
        {
          v29 = 0;
        }
        else
        {
          v30 = EngMulDiv(v63 - v62, v23 - v18, c - v18);
          v26 = a8 & 1;
          v29 = v30;
        }
        if ( !v26 && v58 != v19 )
        {
          v31 = v24 - v19;
          v32 = v58 - v19;
LABEL_21:
          v35 = EngMulDiv(v69.m128i_i32[1] - DWORD1(v62), v31, v32);
          v26 = a8 & 1;
          v34 = v35;
LABEL_22:
          v36 = DWORD1(v59) + v34 - v69.m128i_i32[1];
          v37 = v22 + v29 - v28;
          v38 = v37 + *a4;
          v39 = v37 + a4[2];
          v40 = v36 + a4[3];
          v41 = v36 + a4[1];
          *a4 = v38;
          a4[2] = v39;
          a4[3] = v40;
          a4[1] = v41;
          if ( (a8 & 4) != 0 )
          {
            v42 = v22 - v38;
            *a4 = v38 + v42;
            v43 = v39 + v42;
          }
          else
          {
            if ( (a8 & 2) == 0 )
            {
LABEL_27:
              if ( v26 )
              {
                if ( (a8 & 8) != 0 || (v45 = a7[29], v46 = v45 + v41, v24 < v45) )
                  v46 = HIDWORD(v59);
                a4[3] = v46;
              }
              v47 = *(_QWORD *)a4 - v28;
              if ( *(_QWORD *)a4 == v28 )
                v47 = *((_QWORD *)a4 + 1) - v66;
              v11 = v47 != 0;
              goto LABEL_60;
            }
            v44 = DWORD2(v59) - v39;
            *a4 = v38 + DWORD2(v59) - v39;
            v43 = v39 + v44;
          }
          a4[1] = v41;
          a4[3] = v40;
          a4[2] = v43;
          goto LABEL_27;
        }
      }
      else
      {
        v28 = v63;
        v33 = EngMulDiv(v63 - v62, v23, c);
        v26 = a8 & 1;
        v29 = v33;
        if ( (a8 & 1) == 0 )
        {
          v32 = v58;
          v31 = v24;
          goto LABEL_21;
        }
      }
      v34 = 0;
      goto LABEL_22;
    }
  }
  v61 = v25 & 1;
  if ( (v25 & 1) != 0 )
  {
    v19 = v24;
LABEL_40:
    v49 = a7;
    goto LABEL_41;
  }
  if ( v24 >= v19 )
    goto LABEL_40;
  v19 = EngMulDiv(v19, v24, v58);
  if ( (v25 & 0x20) == 0 )
    goto LABEL_40;
  v49 = a7;
  if ( v19 <= a7[27] )
    v19 = a7[27];
LABEL_41:
  if ( (v25 & 8) != 0 || v18 < v49[26] || v18 > v49[28] || v19 < v49[27] || v19 > v49[29] )
    return v11;
  v50 = EngMulDiv(v63 - v62, b, c);
  if ( v61 )
    v51 = 0;
  else
    v51 = EngMulDiv(v69.m128i_i32[1] - DWORD1(v62), v24, v58);
  v52 = v51 + DWORD1(v59);
  *a4 = v22 + v50;
  a4[1] = v52;
  v53 = v22 + v50 + v18;
  a4[2] = v53;
  a4[3] = v52 + v19;
  if ( (v25 & 4) != 0 )
  {
    *a4 = v22;
    v54 = v22 + v18;
LABEL_58:
    a4[1] = v52;
    a4[3] = v52 + v19;
    a4[2] = v54;
    goto LABEL_59;
  }
  if ( (v25 & 2) != 0 )
  {
    v55 = DWORD2(v59) - v53;
    *a4 = DWORD2(v59) - v18;
    v54 = v53 + v55;
    goto LABEL_58;
  }
LABEL_59:
  v11 = 1;
LABEL_60:
  if ( v11 && (*(_DWORD *)(v67 + 368) & 0xF) == 2 && (v25 & 0x10) != 0 )
  {
    v56 = *(_QWORD *)(v65 + 40);
    v69 = *(__m128i *)a4;
    TransformRectAroundPoint(
      &v69,
      *(_WORD *)(*(_QWORD *)(v68 + 40) + 64LL),
      0LL,
      a4,
      *(_WORD *)(v56 + 64),
      v69.m128i_i64[0]);
  }
  return v11;
}
