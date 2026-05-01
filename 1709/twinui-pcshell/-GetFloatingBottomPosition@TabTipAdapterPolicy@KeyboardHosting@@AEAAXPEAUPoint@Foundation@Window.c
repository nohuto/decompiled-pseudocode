/*
 * XREFs of ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@@Z @ 0x1801ABA0C
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1801AACE0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        struct Windows::Foundation::Point *a2)
{
  __int64 v2; // r8
  __m128 v3; // xmm4
  __m128 v4; // xmm2
  float v5; // xmm3_4
  float v6; // xmm1_4
  __m128 v7; // [rsp+0h] [rbp-58h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  v2 = *((_BYTE *)this + 400) != 0 ? 0x38 : 0;
  v3 = *(__m128 *)((char *)this + v2 + 192);
  v4 = *(__m128 *)((char *)this + v2 + 208);
  v8 = *(_QWORD *)((char *)this + v2 + 240);
  v5 = _mm_shuffle_ps(v3, v3, 170).m128_f32[0];
  v3.m128_f32[0] = _mm_shuffle_ps(v3, v3, 255).m128_f32[0];
  v7.m128_f32[0] = (float)((int)v8 * (int)v5 / 100);
  v7.m128_f32[1] = (float)((int)v8 * (int)v3.m128_f32[0] / 100);
  v7.m128_f32[2] = (float)((int)v8 * (int)v4.m128_f32[0] / 100);
  v7.m128_f32[3] = (float)((int)v8 * (int)_mm_shuffle_ps(v4, v4, 85).m128_f32[0] / 100);
  v6 = (float)((float)(_mm_shuffle_ps(v7, v7, 255).m128_f32[0] - *((float *)this + 99)) * *((float *)this + 96))
     + v3.m128_f32[0];
  *(float *)a2 = (float)((float)(_mm_shuffle_ps(v7, v7, 170).m128_f32[0] - *((float *)this + 98)) * *((float *)this + 95))
               + v5;
  *((float *)a2 + 1) = v6;
}
