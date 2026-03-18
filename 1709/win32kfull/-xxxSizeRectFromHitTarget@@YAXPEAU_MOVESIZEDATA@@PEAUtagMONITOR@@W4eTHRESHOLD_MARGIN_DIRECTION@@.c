/*
 * XREFs of ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01DC3B0
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01DBAC0 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01DA9AC (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 */

__int64 __fastcall xxxSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __m128i v7; // xmm1
  int v8; // edi
  int v9; // edi
  __int32 v10; // ecx
  int v11; // eax
  __int32 v12; // r8d
  __int32 v13; // edx
  __int32 v14; // r9d
  __int32 v15; // r8d
  __int32 v16; // edx
  __int32 v17; // ecx
  __int32 v18; // eax
  __int32 v19; // edx
  __int32 v20; // ecx
  __int32 v21; // eax
  __int32 v22; // ecx
  __int32 v23; // ecx
  __int32 v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // edx
  __int128 v34; // [rsp+20h] [rbp-30h] BYREF
  __m128i v35; // [rsp+30h] [rbp-20h] BYREF

  result = xxxGetSizeRectFromShell(a1, a2, a3, v35.m128i_i32);
  if ( (_DWORD)result )
    goto LABEL_40;
  result = (__int64)GetMonitorWorkRectForWindow(&v34, a2, *(struct tagWND **)(a1 + 16));
  v7 = *(__m128i *)result;
  v35 = *(__m128i *)result;
  if ( a3 )
  {
    v8 = a3 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v10 = *(_DWORD *)(a1 + 104);
          v11 = _mm_cvtsi128_si32(v7);
          v35.m128i_i32[0] = v11;
          v35.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
          v12 = v35.m128i_i32[2] - v11;
          if ( v35.m128i_i32[2] - v11 < v10 )
            v35.m128i_i32[2] = v10 + v11;
          v13 = *(_DWORD *)(a1 + 116);
          if ( v12 < v13 )
          {
            result = v35.m128i_u32[1];
          }
          else
          {
            result = (unsigned int)(v35.m128i_i32[3] - v13);
            v35.m128i_i32[1] = v35.m128i_i32[3] - v13;
          }
          v14 = *(_DWORD *)(a1 + 108);
          v15 = v35.m128i_i32[3] - result;
          if ( v35.m128i_i32[3] - (int)result < v14 )
          {
            result = (unsigned int)(v35.m128i_i32[3] - v14);
            v35.m128i_i32[1] = v35.m128i_i32[3] - v14;
          }
          if ( v15 >= v13 )
            v35.m128i_i32[1] = v35.m128i_i32[3] - v13;
        }
        goto LABEL_40;
      }
      v16 = (v35.m128i_i32[2] - v35.m128i_i32[0]) / 2;
      v35.m128i_i32[0] = v35.m128i_i32[2] - v16;
      v17 = *(_DWORD *)(a1 + 104);
      if ( v16 < v17 )
        v35.m128i_i32[0] = v35.m128i_i32[2] - v17;
      v18 = *(_DWORD *)(a1 + 112);
      if ( v16 >= v18 )
        v35.m128i_i32[0] = v35.m128i_i32[2] - v18;
      v19 = v35.m128i_i32[3] - v35.m128i_i32[1];
      if ( v35.m128i_i32[3] - v35.m128i_i32[1] < *(_DWORD *)(a1 + 108) )
        v35.m128i_i32[3] = v35.m128i_i32[1] + *(_DWORD *)(a1 + 116);
      result = *(unsigned int *)(a1 + 116);
      if ( v19 >= (int)result )
      {
        result = (unsigned int)(v35.m128i_i32[1] + result);
LABEL_39:
        v35.m128i_i32[3] = result;
      }
    }
    else
    {
      v20 = *(_DWORD *)(a1 + 104);
      v35.m128i_i32[2] = v35.m128i_i32[0] + (v35.m128i_i32[2] - v35.m128i_i32[0]) / 2;
      v21 = v35.m128i_i32[2] - v35.m128i_i32[0];
      if ( v35.m128i_i32[2] - v35.m128i_i32[0] < v20 )
        v35.m128i_i32[2] = v35.m128i_i32[0] + v20;
      v22 = *(_DWORD *)(a1 + 112);
      if ( v21 >= v22 )
        v35.m128i_i32[2] = v22 + v35.m128i_i32[0];
      v23 = v35.m128i_i32[3] - v35.m128i_i32[1];
      v24 = *(_DWORD *)(a1 + 108);
      if ( v35.m128i_i32[3] - v35.m128i_i32[1] < v24 )
        v35.m128i_i32[3] = v35.m128i_i32[1] + v24;
      result = *(unsigned int *)(a1 + 116);
      if ( v23 >= (int)result )
      {
        result = (unsigned int)(v35.m128i_i32[1] + result);
        goto LABEL_39;
      }
    }
  }
  else
  {
    v25 = *(_DWORD *)(a1 + 104);
    v26 = _mm_cvtsi128_si32(v35);
    v27 = _mm_cvtsi128_si32(_mm_srli_si128(v35, 8));
    v35.m128i_i32[0] = v26;
    v35.m128i_i32[2] = v27;
    v28 = v27 - v26;
    if ( v28 < v25 )
      v35.m128i_i32[2] = v26 + v25;
    v29 = *(_DWORD *)(a1 + 112);
    if ( v28 >= v29 )
      v35.m128i_i32[2] = v26 + v29;
    v30 = *(_DWORD *)(a1 + 108);
    v31 = _mm_cvtsi128_si32(_mm_srli_si128(v35, 4));
    v32 = _mm_cvtsi128_si32(_mm_srli_si128(v35, 12));
    v35.m128i_i32[1] = v31;
    v33 = v32 - v31;
    if ( v33 < v30 )
      v35.m128i_i32[3] = v31 + v30;
    result = *(unsigned int *)(a1 + 116);
    if ( v33 >= (int)result )
    {
      result = (unsigned int)(v31 + result);
      goto LABEL_39;
    }
  }
LABEL_40:
  if ( (*(_DWORD *)(a1 + 196) & 0x2000000) != 0 )
    *(__m128i *)(a1 + 72) = v35;
  else
    *(__m128i *)(a1 + 40) = v35;
  return result;
}
