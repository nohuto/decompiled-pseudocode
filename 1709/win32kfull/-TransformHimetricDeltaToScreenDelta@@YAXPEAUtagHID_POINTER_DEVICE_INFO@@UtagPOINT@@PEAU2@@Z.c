/*
 * XREFs of ?TransformHimetricDeltaToScreenDelta@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01AF3B4
 * Callers:
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AE51C (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AE66C (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 * Callees:
 *     <none>
 */

void __fastcall TransformHimetricDeltaToScreenDelta(__m128i *a1, struct tagPOINT a2, struct tagPOINT *a3)
{
  __m128i v3; // xmm6
  INT v6; // eax
  INT v7; // r8d
  INT y; // [rsp+4Ch] [rbp+14h]

  y = a2.y;
  v3 = a1[10];
  v6 = EngMulDiv(a2.x, _mm_cvtsi128_si32(_mm_srli_si128(v3, 8)) - _mm_cvtsi128_si32(v3), a1[11].m128i_i32[2]);
  v7 = a1[11].m128i_i32[3];
  a3->x = v6;
  a3->y = EngMulDiv(y, _mm_cvtsi128_si32(_mm_srli_si128(v3, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v3, 4)), v7);
}
