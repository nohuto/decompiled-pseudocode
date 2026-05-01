/*
 * XREFs of ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x1801AEEDC
 * Callers:
 *     ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x1801AF014 (-GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall KeyboardHosting::ViewRectHelper::ValidateRect(__m128i *a1)
{
  HWND ForegroundWindow; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __m128 v5; // xmm2
  float v6; // xmm1_4
  struct tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF

  ForegroundWindow = GetForegroundWindow();
  v3 = 0LL;
  *(_QWORD *)&Rect.left = 0LL;
  v4 = 0LL;
  *(_QWORD *)&Rect.right = 0LL;
  if ( ForegroundWindow )
  {
    GetWindowRect(ForegroundWindow, &Rect);
    v4 = *(_QWORD *)&Rect.right;
    v3 = *(_QWORD *)&Rect.left;
  }
  Rect = (struct tagRECT)_mm_loadu_si128(a1);
  if ( *(float *)&Rect.left != 0.0
    || *(float *)&Rect.top != 0.0
    || *(float *)&Rect.right != 0.0
    || *(float *)&Rect.bottom != 0.0 )
  {
    if ( *(float *)&a1->m128i_i32[2] < 1.0 )
      a1->m128i_i32[2] = 1065353216;
    if ( *(float *)&a1->m128i_i32[3] < 1.0 )
      a1->m128i_i32[3] = 1065353216;
    if ( (_DWORD)v3 || __PAIR64__(HIDWORD(v3), 0) != (unsigned int)v4 || HIDWORD(v4) )
    {
      v5 = (__m128)_mm_loadu_si128(a1);
      v6 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
      *(float *)a1->m128i_i32 = (float)(int)v5.m128_f32[0];
      *(float *)&a1->m128i_i32[2] = (float)((int)(float)(_mm_shuffle_ps(v5, v5, 170).m128_f32[0] + v5.m128_f32[0])
                                          - (int)v5.m128_f32[0]);
      *(float *)&a1->m128i_i32[1] = (float)(int)v6;
      *(float *)&a1->m128i_i32[3] = (float)((int)(float)(_mm_shuffle_ps(v5, v5, 255).m128_f32[0] + v6) - (int)v6);
    }
  }
}
