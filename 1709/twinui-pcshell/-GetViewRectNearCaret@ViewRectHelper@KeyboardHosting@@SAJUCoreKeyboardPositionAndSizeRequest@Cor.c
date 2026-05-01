/*
 * XREFs of ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11PEAU9Foundation@8@@Z @ 0x1801AEC1C
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@PEAU345@@Z @ 0x1801AC5B0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@W.c)
 * Callees:
 *     ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x1801AF014 (-GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@0@Z.c)
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@U3@UtagSIZE@@W4CoreKeyboardAlignment@Core@Text@Internal@UI@6@@Z @ 0x1801AF1F4 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@U3@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
        int *a1,
        float *a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5)
{
  __m128i v9; // xmm0
  float v10; // xmm2_4
  float v11; // xmm3_4
  __int128 v12; // xmm1
  __m128i *RelativePosition; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // xmm0_8
  unsigned __int64 v16; // rdx
  float v17; // xmm3_4
  float v18; // xmm2_4
  int v20; // [rsp+20h] [rbp-41h]
  __m128i v21; // [rsp+30h] [rbp-31h] BYREF
  __m128i v22; // [rsp+40h] [rbp-21h] BYREF
  __int128 v23; // [rsp+50h] [rbp-11h] BYREF
  __m128i v24; // [rsp+60h] [rbp-1h]

  v21 = 0uLL;
  *(_OWORD *)a5 = 0uLL;
  v9 = *(__m128i *)a3;
  v21 = *a4;
  v22 = v9;
  v22 = *(__m128i *)KeyboardHosting::ViewRectHelper::GetAvoidanceRect(&v23, &v22, &v21);
  v24 = v22;
  if ( __PAIR128__(__PAIR64__(v22.m128i_u32[2], 0), 0LL) == __PAIR128__(v22.m128i_u32[3], v22.m128i_u64[0]) )
  {
    *(float *)(a5 + 8) = (float)a1[2];
    *(float *)(a5 + 12) = (float)a1[1];
    v10 = (float)(a2[2] + *a2) - (float)a1[2];
    v11 = (float)((float)(a2[1] + a2[3]) - (float)a1[1]) - 10.0;
    v21 = _mm_loadu_si128((const __m128i *)a3);
    if ( *(float *)v21.m128i_i32 != 0.0
      || *(float *)&v21.m128i_i32[1] != 0.0
      || *(float *)&v21.m128i_i32[2] != 0.0
      || *(float *)&v21.m128i_i32[3] != 0.0
      || (v21 = _mm_loadu_si128(a4), *(float *)v21.m128i_i32 != 0.0)
      || *(float *)&v21.m128i_i32[1] != 0.0
      || *(float *)&v21.m128i_i32[2] != 0.0
      || *(float *)&v21.m128i_i32[3] != 0.0 )
    {
      v10 = fminf(v10, (float)a1[3] + *(float *)a3);
      v11 = fmaxf(a2[1], *(float *)(a3 + 4) - (float)a1[4]);
    }
    *(float *)a5 = v10;
    *(float *)(a5 + 4) = v11;
  }
  else
  {
    v12 = *(_OWORD *)a2;
    v21.m128i_i64[0] = 0LL;
    v21.m128i_i32[0] = a1[2];
    v21.m128i_i32[1] = a1[1];
    v20 = a1[5];
    v23 = v12;
    RelativePosition = (__m128i *)KeyboardHosting::ViewRectHelper::GetRelativePosition(
                                    &v21,
                                    &v23,
                                    &v22,
                                    v21.m128i_i64[0],
                                    v20);
    v14 = RelativePosition->m128i_i64[0];
    v15 = _mm_srli_si128(*RelativePosition, 8).m128i_u64[0];
    v16 = HIDWORD(RelativePosition->m128i_i64[0]);
    *(float *)(a5 + 8) = (float)(int)(v15 - RelativePosition->m128i_i64[0]);
    *(float *)(a5 + 12) = (float)(HIDWORD(v15) - (int)v16);
    v17 = fminf((float)(a2[2] + *a2) - (float)((int)v15 - v14 + 1), (float)(v14 + a1[3]));
    if ( (int)v16 > v24.m128i_i32[1] )
    {
      v18 = fminf((float)((int)v16 + a1[4]), (float)(a2[3] + a2[1]) - (float)(HIDWORD(v15) - (int)v16 + 1));
    }
    else
    {
      v18 = a2[1];
      if ( v18 < (float)((int)v16 - a1[4]) )
        v18 = (float)((int)v16 - a1[4]);
    }
    *(float *)a5 = v17;
    *(float *)(a5 + 4) = v18;
  }
  return 0LL;
}
