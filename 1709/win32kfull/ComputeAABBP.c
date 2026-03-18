/*
 * XREFs of ComputeAABBP @ 0x1C00F2ADC
 * Callers:
 *     SetupAAHeader @ 0x1C0074630 (SetupAAHeader.c)
 * Callees:
 *     IntersectRECTL @ 0x1C00F2F3C (IntersectRECTL.c)
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
  __int64 (__fastcall *v24)(int, int, int, int, int); // rdx
  __int64 (__fastcall *v25)(int, int, int, int, int); // rax
  bool v26; // zf
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __m128i v30; // xmm0
  __int64 result; // rax
  char v32; // al
  __int32 v33; // ecx
  __int32 v34; // eax
  int v35; // edx
  int v36; // ecx
  __m128i v37; // [rsp+28h] [rbp-99h] BYREF
  int v38; // [rsp+38h] [rbp-89h]
  __int128 v39; // [rsp+48h] [rbp-79h]
  __m128i v40; // [rsp+58h] [rbp-69h]
  __m128i v41; // [rsp+68h] [rbp-59h]
  __int128 v42; // [rsp+78h] [rbp-49h] BYREF
  __int128 v43; // [rsp+88h] [rbp-39h] BYREF
  __int128 v44; // [rsp+98h] [rbp-29h]
  __int64 v45; // [rsp+A8h] [rbp-19h]
  _DWORD v46[2]; // [rsp+B8h] [rbp-9h] BYREF
  __int128 v47; // [rsp+C0h] [rbp-1h]
  int v48; // [rsp+128h] [rbp+67h]

  v5 = a3->m128i_i32[0];
  v6 = a1[4];
  v7 = (__m128i)a1[1];
  v39 = *a1;
  v8 = (__m128i)a1[2];
  v42 = a1[3];
  v9 = _mm_cvtsi128_si32(v8);
  v44 = a1[5];
  v41 = v8;
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8));
  v43 = v6;
  *(_QWORD *)&v6 = *((_QWORD *)a1 + 12);
  v40 = v7;
  v45 = v6;
  v41.m128i_i32[2] = v10;
  v41.m128i_i32[0] = v9;
  if ( v10 < v9 )
  {
    v41.m128i_i32[0] = v10;
    v41.m128i_i32[2] = v9;
    v9 = v10;
    v8 = v41;
    v10 = v41.m128i_i32[2];
    v5 |= 1u;
  }
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12));
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
  v41.m128i_i32[3] = v11;
  v41.m128i_i32[1] = v12;
  if ( v11 < v12 )
  {
    v41.m128i_i32[1] = v11;
    v41.m128i_i32[3] = v12;
    v12 = v11;
    v8 = v41;
    v11 = v41.m128i_i32[3];
    v5 |= 2u;
  }
  v13 = _mm_cvtsi128_si32(v7);
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
  v40.m128i_i32[0] = v13;
  v40.m128i_i32[2] = v14;
  if ( v14 < v13 )
  {
    v40.m128i_i32[0] = v14;
    v40.m128i_i32[2] = v13;
    v13 = v14;
    v7 = v40;
    v14 = v40.m128i_i32[2];
    v5 ^= 1u;
  }
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12));
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
  v40.m128i_i32[3] = v15;
  v40.m128i_i32[1] = v16;
  if ( v15 < v16 )
  {
    v40.m128i_i32[1] = v15;
    v40.m128i_i32[3] = v16;
    v16 = v15;
    v7 = v40;
    v15 = v40.m128i_i32[3];
    v5 ^= 2u;
  }
  if ( v13 >= v14 || v16 >= v15 || v9 >= v10 || v12 >= v11 )
    return 0LL;
  v17 = v14 - v13;
  a3[8].m128i_i64[0] = v44;
  v18 = v11 - v12;
  v48 = v10 - v9;
  v19 = v15 - v16;
  v38 = v11 - v12;
  if ( (1000 * (v10 - v9) + 500) / v17 > 667 && (1000 * v18 + 500) / v19 > 667 )
    v5 |= 0x40u;
  v20 = 524304;
  if ( v48 * v18 >= v17 * v19 )
    v20 = 8;
  v21 = v5 | v20;
  if ( v19 == v18 )
  {
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
    if ( v48 >= v17 || (v32 = 3, a4) )
      v32 = 2;
    a3->m128i_i8[4] = v32;
    goto LABEL_44;
  }
  a3[2].m128i_i64[1] = (__int64)ExpandMask_CY;
  a3[3].m128i_i64[1] = (__int64)ExpandAV_CY;
  a3[1].m128i_i64[1] = (__int64)BuildExpandAAInfo;
  v22 = v21;
  if ( v48 <= v17 )
  {
    a3->m128i_i8[4] = 4;
  }
  else
  {
    if ( (v21 & 0x200) == 0 && 5 * v19 >= v38 && 5 * v17 >= v48 )
      v22 = v21 | 0x4000;
    a3->m128i_i8[4] = 5;
  }
  v23 = a4;
LABEL_24:
  if ( v17 == v48 )
  {
    a3->m128i_i8[5] = 0;
    a3[3].m128i_i64[0] = (__int64)BltAV_CX;
    v24 = CopyDIB_CX;
    a3[2].m128i_i64[0] = (__int64)BltMask_CX;
    a3[1].m128i_i64[0] = (__int64)BuildBltAAInfo;
    v25 = GrayCopyDIB_CX;
  }
  else if ( v17 >= v48 )
  {
    a3->m128i_i8[5] = 1;
    a3[2].m128i_i64[0] = (__int64)ShrinkMask_CX;
    v24 = ShrinkDIB_CX;
    v22 |= 0x2000u;
    a3[3].m128i_i64[0] = (__int64)ShrinkAV_CX;
    a3[1].m128i_i64[0] = (__int64)BuildShrinkAAInfo;
    v25 = GrayShrinkDIB_CX;
  }
  else
  {
    a3->m128i_i8[5] = 2;
    a3[2].m128i_i64[0] = (__int64)ExpandMask_CX;
    v24 = ExpandDIB_CX;
    a3[3].m128i_i64[0] = (__int64)ExpandAV_CX;
    a3[1].m128i_i64[0] = (__int64)BuildExpandAAInfo;
    v25 = GrayExpandDIB_CX;
  }
  if ( !v23 )
    v25 = v24;
  v26 = (v39 & 0x40) == 0;
  a3->m128i_i64[1] = (__int64)v25;
  if ( !v26 )
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
  v27 = DWORD2(v44) - v13;
  a3->m128i_i32[0] = v22;
  a3[8].m128i_i32[2] = v27;
  v28 = HIDWORD(v44) - v16;
  v26 = (v39 & 1) == 0;
  a3[4] = v7;
  a3[8].m128i_i32[3] = v28;
  v37 = v8;
  if ( !v26 && !(unsigned int)IntersectRECTL(&v37, &v42) )
    return 0LL;
  if ( (v39 & 0x10) != 0 )
  {
    if ( !(unsigned int)IntersectRECTL(&v37, &v43) )
      return 0LL;
    v9 -= v43;
    v29 = DWORD1(v43);
    v10 -= v43;
    v37.m128i_i32[0] -= v43;
    v12 -= DWORD1(v43);
    v37.m128i_i32[2] -= v43;
    v11 -= DWORD1(v43);
    v37.m128i_i32[1] -= DWORD1(v43);
    v37.m128i_i32[3] -= DWORD1(v43);
    a3[8].m128i_i32[0] -= v43;
    a3[8].m128i_i32[1] -= v29;
    v41.m128i_i32[0] = v9;
    *(__int64 *)((char *)v41.m128i_i64 + 4) = __PAIR64__(v10, v12);
    v41.m128i_i32[3] = v11;
    v8 = v41;
  }
  v46[1] = 0;
  v46[0] = 0;
  *(_QWORD *)&v47 = *(_QWORD *)(a2 + 12);
  if ( !(unsigned int)IntersectRECTL(&v37, v46) )
    return 0LL;
  if ( (v22 & 1) != 0 )
  {
    v33 = v37.m128i_i32[2] - v37.m128i_i32[0];
    v37.m128i_i32[0] = v10 - v37.m128i_i32[2];
    v34 = v33 + v10 - v37.m128i_i32[2];
    a3[7].m128i_i32[0] = v10;
    v41.m128i_i32[0] = 0;
    v41.m128i_i32[2] = v10 - v9;
    v8 = v41;
    v37.m128i_i32[2] = v34;
  }
  if ( (v22 & 2) != 0 )
  {
    v35 = v37.m128i_i32[3] - v37.m128i_i32[1];
    v37.m128i_i32[1] = v11 - v37.m128i_i32[3];
    v36 = v35 + v11 - v37.m128i_i32[3];
    a3[7].m128i_i32[1] = v11;
    v41.m128i_i32[1] = 0;
    v41.m128i_i32[3] = v11 - v12;
    v8 = v41;
    v37.m128i_i32[3] = v36;
  }
  v30 = v37;
  result = 1LL;
  a3[6] = v8;
  a3[5] = v30;
  return result;
}
