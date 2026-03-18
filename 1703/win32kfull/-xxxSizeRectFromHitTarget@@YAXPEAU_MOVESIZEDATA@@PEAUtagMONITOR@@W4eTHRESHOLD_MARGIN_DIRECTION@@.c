/*
 * XREFs of ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F508C
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01F470C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01F3018 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 */

__int64 __fastcall xxxSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm1
  int v11; // edi
  int v12; // edi
  __int32 v13; // ecx
  int v14; // eax
  __int32 v15; // r8d
  __int32 v16; // edx
  __int32 v17; // r9d
  __int32 v18; // r8d
  __int32 v19; // edx
  __int32 v20; // ecx
  __int32 v21; // eax
  __int32 v22; // edx
  __int32 v23; // ecx
  __int32 v24; // eax
  __int32 v25; // ecx
  __int32 v26; // ecx
  __int32 v27; // eax
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // edx
  __m128i v37; // [rsp+20h] [rbp-20h] BYREF

  result = xxxGetSizeRectFromShell(a1, a2, a3, v37.m128i_i32);
  if ( (_DWORD)result )
    goto LABEL_49;
  v7 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 368LL) & 0xF) == 0
    && (v8 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 408LL)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v8 + 8) + 52LL) & 1) != 0 )
  {
    result = *(_QWORD *)(a2 + 40) + 92LL;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)a1 + 368LL) & 0xF) == 1
         && (v9 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 52LL) & 1) != 0 )
  {
    result = *(_QWORD *)(a2 + 40) + 108LL;
  }
  else
  {
    result = *(_QWORD *)(a2 + 40) + 76LL;
  }
  v10 = *(__m128i *)result;
  v37 = *(__m128i *)result;
  if ( a3 )
  {
    v11 = a3 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          v13 = *(_DWORD *)(a1 + 88);
          v14 = _mm_cvtsi128_si32(v10);
          v37.m128i_i32[0] = v14;
          v37.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
          v15 = v37.m128i_i32[2] - v14;
          if ( v37.m128i_i32[2] - v14 < v13 )
            v37.m128i_i32[2] = v13 + v14;
          v16 = *(_DWORD *)(a1 + 100);
          if ( v15 < v16 )
          {
            result = v37.m128i_u32[1];
          }
          else
          {
            result = (unsigned int)(v37.m128i_i32[3] - v16);
            v37.m128i_i32[1] = v37.m128i_i32[3] - v16;
          }
          v17 = *(_DWORD *)(a1 + 92);
          v18 = v37.m128i_i32[3] - result;
          if ( v37.m128i_i32[3] - (int)result < v17 )
          {
            result = (unsigned int)(v37.m128i_i32[3] - v17);
            v37.m128i_i32[1] = v37.m128i_i32[3] - v17;
          }
          if ( v18 >= v16 )
            v37.m128i_i32[1] = v37.m128i_i32[3] - v16;
        }
        goto LABEL_49;
      }
      v19 = (v37.m128i_i32[2] - v37.m128i_i32[0]) / 2;
      v37.m128i_i32[0] = v37.m128i_i32[2] - v19;
      v20 = *(_DWORD *)(a1 + 88);
      if ( v19 < v20 )
        v37.m128i_i32[0] = v37.m128i_i32[2] - v20;
      v21 = *(_DWORD *)(a1 + 96);
      if ( v19 >= v21 )
        v37.m128i_i32[0] = v37.m128i_i32[2] - v21;
      v22 = v37.m128i_i32[3] - v37.m128i_i32[1];
      if ( v37.m128i_i32[3] - v37.m128i_i32[1] < *(_DWORD *)(a1 + 92) )
        v37.m128i_i32[3] = v37.m128i_i32[1] + *(_DWORD *)(a1 + 100);
      result = *(unsigned int *)(a1 + 100);
      if ( v22 >= (int)result )
      {
        result = (unsigned int)(v37.m128i_i32[1] + result);
LABEL_48:
        v37.m128i_i32[3] = result;
      }
    }
    else
    {
      v23 = *(_DWORD *)(a1 + 88);
      v37.m128i_i32[2] = v37.m128i_i32[0] + (v37.m128i_i32[2] - v37.m128i_i32[0]) / 2;
      v24 = v37.m128i_i32[2] - v37.m128i_i32[0];
      if ( v37.m128i_i32[2] - v37.m128i_i32[0] < v23 )
        v37.m128i_i32[2] = v37.m128i_i32[0] + v23;
      v25 = *(_DWORD *)(a1 + 96);
      if ( v24 >= v25 )
        v37.m128i_i32[2] = v25 + v37.m128i_i32[0];
      v26 = v37.m128i_i32[3] - v37.m128i_i32[1];
      v27 = *(_DWORD *)(a1 + 92);
      if ( v37.m128i_i32[3] - v37.m128i_i32[1] < v27 )
        v37.m128i_i32[3] = v37.m128i_i32[1] + v27;
      result = *(unsigned int *)(a1 + 100);
      if ( v26 >= (int)result )
      {
        result = (unsigned int)(v37.m128i_i32[1] + result);
        goto LABEL_48;
      }
    }
  }
  else
  {
    v28 = *(_DWORD *)(a1 + 88);
    v29 = _mm_cvtsi128_si32(v37);
    v30 = _mm_cvtsi128_si32(_mm_srli_si128(v37, 8));
    v37.m128i_i32[0] = v29;
    v37.m128i_i32[2] = v30;
    v31 = v30 - v29;
    if ( v31 < v28 )
      v37.m128i_i32[2] = v29 + v28;
    v32 = *(_DWORD *)(a1 + 96);
    if ( v31 >= v32 )
      v37.m128i_i32[2] = v29 + v32;
    v33 = *(_DWORD *)(a1 + 92);
    v34 = _mm_cvtsi128_si32(_mm_srli_si128(v37, 4));
    v35 = _mm_cvtsi128_si32(_mm_srli_si128(v37, 12));
    v37.m128i_i32[1] = v34;
    v36 = v35 - v34;
    if ( v36 < v33 )
      v37.m128i_i32[3] = v34 + v33;
    result = *(unsigned int *)(a1 + 100);
    if ( v36 >= (int)result )
    {
      result = (unsigned int)(v34 + result);
      goto LABEL_48;
    }
  }
LABEL_49:
  if ( (*(_DWORD *)(a1 + 180) & 0x2000000) != 0 )
    *(__m128i *)(a1 + 56) = v37;
  else
    *(__m128i *)(a1 + 24) = v37;
  return result;
}
