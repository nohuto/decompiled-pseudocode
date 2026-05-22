/*
 * XREFs of ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x18003FB64
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x18003F7A8 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ControllerProcessor::CalculateMarginPanDelta(ControllerProcessor *this)
{
  char v1; // si
  LONG *v3; // rdi
  BOOL v4; // eax
  DWORD TickCount; // eax
  DWORD v6; // r8d
  LONG v7; // edx
  __m128 v8; // xmm3
  __m128i v9; // xmm2
  LONG v10; // eax
  __m128 v11; // xmm2
  LONG v12; // ecx
  __m128 v13; // xmm4
  __m128 v14; // xmm1
  __m128 v15; // xmm4
  __m128 v16; // xmm4
  float v17; // xmm1_4
  __m128 v18; // xmm0
  POINT pt; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 376);
  (*(void (__fastcall **)(_QWORD, POINT *, LONG *))(**((_QWORD **)this + 33) + 24LL))(
    *((_QWORD *)this + 33),
    &pt,
    &pt.y);
  v3 = (LONG *)((char *)this + 360);
  v4 = PtInRect((const RECT *)((char *)this + 360), pt);
  *((_BYTE *)this + 376) = !v4;
  if ( v4 )
    return;
  TickCount = GetTickCount();
  v6 = TickCount;
  if ( !v1 )
    *((_DWORD *)this + 95) = TickCount;
  v7 = *((_DWORD *)this + 91);
  v8 = 0LL;
  if ( pt.y <= v7 )
  {
    v9 = _mm_cvtsi32_si128(v7 - pt.y);
LABEL_8:
    v11 = _mm_cvtepi32_ps(v9);
    goto LABEL_10;
  }
  v10 = *((_DWORD *)this + 93);
  if ( pt.y >= v10 )
  {
    v9 = _mm_cvtsi32_si128(v10 - pt.y);
    goto LABEL_8;
  }
  v11 = 0LL;
LABEL_10:
  v12 = *v3;
  if ( pt.x > *v3 && (v12 = *((_DWORD *)this + 92), pt.x < v12) )
    v13 = 0LL;
  else
    v13 = (__m128)COERCE_UNSIGNED_INT((float)(v12 - pt.x));
  v14 = (__m128)LODWORD(FLOAT_1_0);
  v15 = _mm_unpacklo_ps(_mm_unpacklo_ps(v13, (__m128)0LL), _mm_unpacklo_ps(v11, (__m128)0LL));
  v8.m128_f32[0] = fmaxf(0.0, (float)(int)(v6 - *((_DWORD *)this + 95)) / 1000.0);
  if ( v8.m128_f32[0] <= 1.0 )
    v14 = v8;
  v16 = _mm_mul_ps(_mm_mul_ps(_mm_div_ps(v15, (__m128)_xmm), (__m128)_xmm), _mm_shuffle_ps(v14, v14, 0));
  v17 = _mm_shuffle_ps(v16, v16, 85).m128_f32[0] + *((float *)this + 97);
  *((float *)this + 96) = v16.m128_f32[0] + *((float *)this + 96);
  v18 = _mm_mul_ps(v16, (__m128)_xmm);
  v16.m128_f32[0] = _mm_shuffle_ps(v18, v18, 85).m128_f32[0] + *((float *)this + 86);
  v18.m128_f32[0] = v18.m128_f32[0] + *((float *)this + 85);
  *((float *)this + 97) = v17;
  *((_DWORD *)this + 86) = v16.m128_i32[0];
  *((_DWORD *)this + 85) = v18.m128_i32[0];
}
