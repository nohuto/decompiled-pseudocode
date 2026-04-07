/*
 * XREFs of ?GetMidPoint@CTouchDragVisualHelper@@CA?AUTOUCH_DRAG_POINT@@PEBU2@0@Z @ 0x18008C338
 * Callers:
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18004B068 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTouchDragVisualHelper::GetMidPoint(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 v3; // xmm2
  __m128 v4; // xmm1
  float v5; // eax
  __m128 v6; // xmm3
  __m128 v7; // xmm2
  float v8; // eax

  v3 = (__m128)*(unsigned int *)(a2 + 4);
  v3.m128_f32[0] = v3.m128_f32[0] + *(float *)(a3 + 4);
  v4 = (__m128)*(unsigned int *)(a2 + 8);
  v4.m128_f32[0] = v4.m128_f32[0] + *(float *)(a3 + 8);
  v5 = *(float *)(a2 + 12) + *(float *)(a3 + 12);
  *(_QWORD *)(a1 + 4) = _mm_unpacklo_ps(v3, v4).m128_u64[0];
  *(float *)(a1 + 12) = v5;
  v6 = (__m128)*(unsigned int *)(a1 + 4);
  v7 = (__m128)*(unsigned int *)(a1 + 8);
  v6.m128_f32[0] = v6.m128_f32[0] * 0.5;
  v8 = *(float *)(a1 + 12) * 0.5;
  v7.m128_f32[0] = v7.m128_f32[0] * 0.5;
  *(_QWORD *)(a1 + 4) = _mm_unpacklo_ps(v6, v7).m128_u64[0];
  *(float *)(a1 + 12) = v8;
  *(_DWORD *)a1 = (unsigned int)(*(_DWORD *)a3 + *(_DWORD *)a2) >> 1;
  return a1;
}
