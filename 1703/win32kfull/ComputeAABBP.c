/*
 * XREFs of ComputeAABBP @ 0x1C00371AC
 * Callers:
 *     SetupAAHeader @ 0x1C0035E8C (SetupAAHeader.c)
 * Callees:
 *     IntersectRECTL @ 0x1C003760C (IntersectRECTL.c)
 */

__int64 __fastcall ComputeAABBP(__int128 *a1, __int64 a2, __m128i *a3, int a4)
{
  int v5; // r8d
  __int128 v6; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // xmm6
  int v9; // r12d
  int v10; // esi
  int v11; // edi
  int v12; // r14d
  int v13; // r11d
  int v14; // r10d
  int v15; // r9d
  int v16; // r13d
  int v17; // r10d
  int v18; // r15d
  int v19; // r9d
  int v20; // edx
  int v21; // edx
  int v22; // r15d
  int v23; // ecx
  __int64 (__fastcall *v24)(); // r9
  __int64 (__fastcall *v25)(); // r8
  __int64 (__fastcall *v26)(int, int, int, int, int); // rdx
  __int64 (__fastcall *v27)(int, int, int, int, int); // rax
  bool v28; // zf
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __m128i v32; // xmm0
  __int64 result; // rax
  char v34; // al
  __int32 v35; // ecx
  __int32 v36; // eax
  int v37; // edx
  int v38; // ecx
  __m128i v39; // [rsp+28h] [rbp-99h] BYREF
  int v40; // [rsp+38h] [rbp-89h]
  __int128 v41; // [rsp+48h] [rbp-79h]
  __m128i v42; // [rsp+58h] [rbp-69h]
  __m128i v43; // [rsp+68h] [rbp-59h]
  __int128 v44; // [rsp+78h] [rbp-49h] BYREF
  __int128 v45; // [rsp+88h] [rbp-39h] BYREF
  __int128 v46; // [rsp+98h] [rbp-29h]
  __int64 v47; // [rsp+A8h] [rbp-19h]
  _DWORD v48[2]; // [rsp+B8h] [rbp-9h] BYREF
  __int128 v49; // [rsp+C0h] [rbp-1h]
  int v50; // [rsp+128h] [rbp+67h]

  v5 = a3->m128i_i32[0];
  v6 = a1[4];
  v7 = (__m128i)a1[1];
  v41 = *a1;
  v8 = (__m128i)a1[2];
  v44 = a1[3];
  v9 = _mm_cvtsi128_si32(v8);
  v46 = a1[5];
  v43 = v8;
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8));
  v45 = v6;
  *(_QWORD *)&v6 = *((_QWORD *)a1 + 12);
  v42 = v7;
  v47 = v6;
  v43.m128i_i32[2] = v10;
  v43.m128i_i32[0] = v9;
  if ( v10 < v9 )
  {
    v43.m128i_i32[0] = v10;
    v43.m128i_i32[2] = v9;
    v9 = v10;
    v8 = v43;
    v10 = v43.m128i_i32[2];
    v5 |= 1u;
  }
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12));
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
  v43.m128i_i32[3] = v11;
  v43.m128i_i32[1] = v12;
  if ( v11 < v12 )
  {
    v43.m128i_i32[1] = v11;
    v43.m128i_i32[3] = v12;
    v12 = v11;
    v8 = v43;
    v11 = v43.m128i_i32[3];
    v5 |= 2u;
  }
  v13 = _mm_cvtsi128_si32(v7);
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
  v42.m128i_i32[0] = v13;
  v42.m128i_i32[2] = v14;
  if ( v14 < v13 )
  {
    v42.m128i_i32[0] = v14;
    v42.m128i_i32[2] = v13;
    v13 = v14;
    v7 = v42;
    v14 = v42.m128i_i32[2];
    v5 ^= 1u;
  }
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12));
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
  v42.m128i_i32[3] = v15;
  v42.m128i_i32[1] = v16;
  if ( v15 < v16 )
  {
    v42.m128i_i32[1] = v15;
    v42.m128i_i32[3] = v16;
    v16 = v15;
    v7 = v42;
    v15 = v42.m128i_i32[3];
    v5 ^= 2u;
  }
  if ( v13 >= v14 || v16 >= v15 || v9 >= v10 || v12 >= v11 )
    return 0LL;
  v17 = v14 - v13;
  a3[8].m128i_i64[0] = v46;
  v18 = v11 - v12;
  v50 = v10 - v9;
  v19 = v15 - v16;
  v40 = v11 - v12;
  if ( (1000 * (v10 - v9) + 500) / v17 > 667 && (1000 * v18 + 500) / v19 > 667 )
    v5 |= 0x40u;
  v20 = 8;
  if ( v50 * v18 < v17 * v19 )
    v20 = 524304;
  v21 = v5 | v20;
  if ( v19 == v18 )
  {
    v24 = BltMask_CY;
    a3[1].m128i_i64[1] = (__int64)BuildBltAAInfo;
    v23 = a4;
    a3[2].m128i_i64[1] = (__int64)BltMask_CY;
    a3[3].m128i_i64[1] = (__int64)BltAV_CY;
    a3->m128i_i8[4] = 1;
LABEL_44:
    v22 = v21;
    goto LABEL_24;
  }
  if ( v19 >= v18 )
  {
    v23 = a4;
    a3[2].m128i_i64[1] = (__int64)ShrinkMask_CY;
    a3[3].m128i_i64[1] = (__int64)ShrinkAV_CY;
    a3[1].m128i_i64[1] = (__int64)BuildShrinkAAInfo;
    if ( v50 >= v17 || (v34 = 3, a4) )
      v34 = 2;
    a3->m128i_i8[4] = v34;
    v24 = BltMask_CY;
    goto LABEL_44;
  }
  a3[2].m128i_i64[1] = (__int64)ExpandMask_CY;
  a3[3].m128i_i64[1] = (__int64)ExpandAV_CY;
  a3[1].m128i_i64[1] = (__int64)BuildExpandAAInfo;
  v22 = v21;
  if ( v50 <= v17 )
  {
    a3->m128i_i8[4] = 4;
  }
  else
  {
    if ( (v21 & 0x200) == 0 && 5 * v19 >= v40 && 5 * v17 >= v50 )
      v22 = v21 | 0x4000;
    a3->m128i_i8[4] = 5;
  }
  v23 = a4;
  v24 = BltMask_CY;
LABEL_24:
  v25 = BltMask_CX;
  if ( v17 == v50 )
  {
    a3->m128i_i8[5] = 0;
    a3[3].m128i_i64[0] = (__int64)BltAV_CX;
    v26 = CopyDIB_CX;
    a3[2].m128i_i64[0] = (__int64)BltMask_CX;
    a3[1].m128i_i64[0] = (__int64)BuildBltAAInfo;
    v27 = GrayCopyDIB_CX;
  }
  else if ( v17 >= v50 )
  {
    a3->m128i_i8[5] = 1;
    a3[2].m128i_i64[0] = (__int64)ShrinkMask_CX;
    v26 = ShrinkDIB_CX;
    v22 |= 0x2000u;
    a3[3].m128i_i64[0] = (__int64)ShrinkAV_CX;
    a3[1].m128i_i64[0] = (__int64)BuildShrinkAAInfo;
    v27 = GrayShrinkDIB_CX;
  }
  else
  {
    a3->m128i_i8[5] = 2;
    a3[2].m128i_i64[0] = (__int64)ExpandMask_CX;
    v26 = ExpandDIB_CX;
    a3[3].m128i_i64[0] = (__int64)ExpandAV_CX;
    a3[1].m128i_i64[0] = (__int64)BuildExpandAAInfo;
    v27 = GrayExpandDIB_CX;
  }
  if ( !v23 )
    v27 = v26;
  v28 = (v41 & 0x40) == 0;
  a3->m128i_i64[1] = (__int64)v27;
  if ( !v28 )
  {
    a3[3].m128i_i64[0] = 0LL;
    a3->m128i_i64[1] = 0LL;
    a3[3].m128i_i64[1] = (__int64)TileAV_CY;
    a3[1].m128i_i64[0] = (__int64)BuildTileAAInfo;
    a3[1].m128i_i64[1] = (__int64)BuildTileAAInfo;
    a3->m128i_i8[4] = 0;
    a3[2].m128i_i64[0] = (__int64)BltMask_CX;
    a3[2].m128i_i64[1] = (__int64)BltMask_CY;
  }
  v29 = DWORD2(v46) - v13;
  a3->m128i_i32[0] = v22;
  a3[8].m128i_i32[2] = v29;
  v30 = HIDWORD(v46) - v16;
  v28 = (v41 & 1) == 0;
  a3[4] = v7;
  a3[8].m128i_i32[3] = v30;
  v39 = v8;
  if ( !v28 && !(unsigned int)IntersectRECTL(&v39, &v44, BltMask_CX, BltMask_CY) )
    return 0LL;
  if ( (v41 & 0x10) != 0 )
  {
    if ( !(unsigned int)IntersectRECTL(&v39, &v45, v25, v24) )
      return 0LL;
    v9 -= v45;
    v31 = DWORD1(v45);
    v10 -= v45;
    v39.m128i_i32[0] -= v45;
    v12 -= DWORD1(v45);
    v39.m128i_i32[2] -= v45;
    v11 -= DWORD1(v45);
    v39.m128i_i32[1] -= DWORD1(v45);
    v39.m128i_i32[3] -= DWORD1(v45);
    a3[8].m128i_i32[0] -= v45;
    a3[8].m128i_i32[1] -= v31;
    v43.m128i_i32[0] = v9;
    *(__int64 *)((char *)v43.m128i_i64 + 4) = __PAIR64__(v10, v12);
    v43.m128i_i32[3] = v11;
    v8 = v43;
  }
  v48[1] = 0;
  v48[0] = 0;
  *(_QWORD *)&v49 = *(_QWORD *)(a2 + 12);
  if ( !(unsigned int)IntersectRECTL(&v39, v48, v25, v24) )
    return 0LL;
  if ( (v22 & 1) != 0 )
  {
    v35 = v39.m128i_i32[2] - v39.m128i_i32[0];
    v39.m128i_i32[0] = v10 - v39.m128i_i32[2];
    v36 = v35 + v10 - v39.m128i_i32[2];
    a3[7].m128i_i32[0] = v10;
    v43.m128i_i32[0] = 0;
    v43.m128i_i32[2] = v10 - v9;
    v8 = v43;
    v39.m128i_i32[2] = v36;
  }
  if ( (v22 & 2) != 0 )
  {
    v37 = v39.m128i_i32[3] - v39.m128i_i32[1];
    v39.m128i_i32[1] = v11 - v39.m128i_i32[3];
    v38 = v37 + v11 - v39.m128i_i32[3];
    a3[7].m128i_i32[1] = v11;
    v43.m128i_i32[1] = 0;
    v43.m128i_i32[3] = v11 - v12;
    v8 = v43;
    v39.m128i_i32[3] = v38;
  }
  v32 = v39;
  result = 1LL;
  a3[6] = v8;
  a3[5] = v32;
  return result;
}
