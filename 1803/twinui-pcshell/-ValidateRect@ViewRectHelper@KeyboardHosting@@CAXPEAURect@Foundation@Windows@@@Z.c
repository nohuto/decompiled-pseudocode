/*
 * XREFs of ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x180256640
 * Callers:
 *     ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x180255F58 (-GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x180249CD0 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180256628 (-_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 */

void __fastcall KeyboardHosting::ViewRectHelper::ValidateRect(struct _GUID *a1)
{
  HWND ForegroundWindow; // rax
  __m128 v3; // xmm2
  float v4; // xmm1_4
  struct _GUID v5; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-28h] BYREF

  ForegroundWindow = GetForegroundWindow();
  *(_QWORD *)&Rect.left = 0LL;
  *(_QWORD *)&Rect.right = 0LL;
  if ( ForegroundWindow )
    GetWindowRect(ForegroundWindow, &Rect);
  v5 = *a1;
  if ( !KeyboardHosting::IsRectNull((float *)&v5.Data1) )
  {
    if ( *(float *)a1->Data4 < 1.0 )
      *(_DWORD *)a1->Data4 = 1065353216;
    if ( *(float *)&a1->Data4[4] < 1.0 )
      *(_DWORD *)&a1->Data4[4] = 1065353216;
    v5 = (struct _GUID)Rect;
    if ( !_TlgGuidIsZero(&v5) )
    {
      v3 = (__m128)_mm_loadu_si128((const __m128i *)a1);
      v4 = _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
      *(float *)&a1->Data1 = (float)(int)v3.m128_f32[0];
      *(float *)a1->Data4 = (float)((int)(float)(_mm_shuffle_ps(v3, v3, 170).m128_f32[0] + v3.m128_f32[0])
                                  - (int)v3.m128_f32[0]);
      *(float *)&a1->Data2 = (float)(int)v4;
      *(float *)&a1->Data4[4] = (float)((int)(float)(_mm_shuffle_ps(v3, v3, 255).m128_f32[0] + v4) - (int)v4);
    }
  }
}
