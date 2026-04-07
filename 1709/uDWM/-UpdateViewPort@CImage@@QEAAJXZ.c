/*
 * XREFs of ?UpdateViewPort@CImage@@QEAAJXZ @ 0x180071A80
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x1800136A0 (-ValidateVisual@CImage@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImage::UpdateViewPort(CImage *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  unsigned int v3; // eax
  float v4; // xmm1_4
  float v5; // xmm2_4
  __m128i v6; // xmm0
  int v7; // eax
  int v8; // eax
  float v10[4]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 38);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 82);
    v4 = (float)*((int *)this + 80);
    v5 = (float)*((int *)this + 81);
    v10[0] = v4;
    v10[1] = v5;
    if ( !v3 )
      v3 = *((_DWORD *)this + 30);
    v6 = _mm_cvtsi32_si128(v3);
    v7 = *((_DWORD *)this + 83);
    v10[2] = _mm_cvtepi32_ps(v6).m128_f32[0] + v4;
    if ( !v7 )
      v7 = *((_DWORD *)this + 31);
    v10[3] = (float)v7 + v5;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**(_QWORD **)(v1 + 16) + 304LL))(
           *(_QWORD *)(v1 + 16),
           *(unsigned int *)(v1 + 24),
           v10);
    v2 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB2u);
  }
  return v2;
}
