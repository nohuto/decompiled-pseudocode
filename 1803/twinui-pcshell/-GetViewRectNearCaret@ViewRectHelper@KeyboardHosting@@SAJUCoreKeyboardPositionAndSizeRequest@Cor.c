/*
 * XREFs of ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x1802561F4
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180254280 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@W.c)
 *     ?GetViewRectOverlay@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11W4CoreKeyboardEditControlLineType@45678@PEAU9Foundation@8@@Z @ 0x1802564EC (-GetViewRectOverlay@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x180249CD0 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x180255F58 (-GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@0@Z.c)
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@U3@UtagSIZE@@W4CoreKeyboardAlignment@Core@Text@Internal@UI@6@@Z @ 0x18025608C (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@U3@.c)
 *     ?_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180256628 (-_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
        _DWORD *a1,
        float *a2,
        __int64 a3,
        const __m128i *a4,
        char a5,
        __int64 a6,
        bool *a7,
        char *a8)
{
  char v8; // bl
  __m128 v13; // xmm2
  float v14; // xmm1_4
  struct _GUID v15; // xmm1
  struct _GUID v16; // xmm0
  __int128 v17; // xmm1
  __m128i *RelativePosition; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // xmm0_8
  unsigned __int64 v21; // rdx
  int v22; // r9d
  float v23; // xmm4_4
  float v24; // xmm3_4
  int v25; // eax
  float v26; // xmm2_4
  float v27; // xmm1_4
  bool v28; // cc
  float v29; // xmm2_4
  __int64 result; // rax
  int v31; // [rsp+20h] [rbp-71h]
  struct _GUID v32; // [rsp+30h] [rbp-61h] BYREF
  __m128i v33; // [rsp+40h] [rbp-51h] BYREF
  char *v34; // [rsp+50h] [rbp-41h]
  __int128 v35; // [rsp+60h] [rbp-31h] BYREF
  struct _GUID v36; // [rsp+70h] [rbp-21h] BYREF

  v8 = 0;
  *(_QWORD *)&v32.Data1 = 0LL;
  *(_QWORD *)v32.Data4 = 0LL;
  v34 = a8;
  *(_OWORD *)a6 = 0u;
  *a7 = 0;
  *a8 = 0;
  if ( a5 )
  {
    v13 = (__m128)_mm_loadu_si128(a4);
    v32.Data1 = (int)v13.m128_f32[0];
    v14 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
    *(_DWORD *)&v32.Data2 = (int)v14;
    *(_DWORD *)v32.Data4 = (int)(float)(_mm_shuffle_ps(v13, v13, 170).m128_f32[0] + v13.m128_f32[0]);
    *(_DWORD *)&v32.Data4[4] = (int)(float)(_mm_shuffle_ps(v13, v13, 255).m128_f32[0] + v14);
    v36 = v32;
  }
  else
  {
    v15 = *(struct _GUID *)a3;
    v36 = (struct _GUID)*a4;
    v32 = v15;
    v36 = *(struct _GUID *)KeyboardHosting::ViewRectHelper::GetAvoidanceRect(
                             &v33,
                             (struct Windows::Foundation::Rect *)&v32,
                             (struct Windows::Foundation::Rect *)&v36);
  }
  v16 = v36;
  v33 = (__m128i)v36;
  v32 = v36;
  if ( _TlgGuidIsZero(&v32) )
  {
    *(float *)(a6 + 8) = (float)(int)a1[2];
    *(float *)(a6 + 12) = (float)(int)a1[1];
    v24 = (float)(a2[2] + *a2) - (float)(int)a1[2];
    v29 = (float)(a2[1] + a2[3]) - (float)(int)a1[1];
    v33 = *(__m128i *)a3;
    v26 = v29 - 10.0;
    if ( !KeyboardHosting::IsRectNull((float *)v33.m128i_i32)
      || (v33 = *a4, !KeyboardHosting::IsRectNull((float *)v33.m128i_i32)) )
    {
      v24 = fminf(v24, (float)(int)a1[3] + *(float *)a3);
      v26 = fmaxf(a2[1], *(float *)(a3 + 4) - (float)(int)a1[4]);
    }
  }
  else
  {
    v17 = *(_OWORD *)a2;
    *(_QWORD *)&v32.Data1 = 0LL;
    v32.Data1 = a1[2];
    *(_DWORD *)&v32.Data2 = a1[1];
    v31 = a1[5];
    v36 = v16;
    v35 = v17;
    RelativePosition = (__m128i *)KeyboardHosting::ViewRectHelper::GetRelativePosition(
                                    (__int128 *)&v32,
                                    (__int64)&v35,
                                    (int *)&v36,
                                    *(__int64 *)&v32.Data1,
                                    v31);
    v19 = RelativePosition->m128i_i64[0];
    v20 = _mm_srli_si128(*RelativePosition, 8).m128i_u64[0];
    v21 = HIDWORD(RelativePosition->m128i_i64[0]);
    v22 = v20 - RelativePosition->m128i_i64[0];
    *(float *)(a6 + 8) = (float)v22;
    *(float *)(a6 + 12) = (float)(HIDWORD(v20) - (int)v21);
    v23 = (float)(v19 + a1[3]);
    if ( *a2 > v23 )
      v23 = *a2;
    v24 = (float)(*a2 + a2[2]) - (float)(v22 + 1);
    if ( v23 <= v24 )
      v24 = v23;
    v25 = a1[4];
    if ( (int)v21 > v33.m128i_i32[1] )
    {
      v27 = (float)((int)v21 + v25);
      v26 = (float)(a2[3] + a2[1]) - (float)(HIDWORD(v20) - (int)v21 + 1);
      v28 = v27 <= v26;
    }
    else
    {
      v26 = a2[1];
      v27 = (float)((int)v21 - v25);
      v28 = v26 <= v27;
    }
    if ( v28 )
      v26 = v27;
    *a7 = v23 != v24;
    if ( v27 != v26 )
      v8 = 1;
    *v34 = v8;
  }
  *(float *)a6 = v24;
  result = 0LL;
  *(float *)(a6 + 4) = v26;
  return result;
}
