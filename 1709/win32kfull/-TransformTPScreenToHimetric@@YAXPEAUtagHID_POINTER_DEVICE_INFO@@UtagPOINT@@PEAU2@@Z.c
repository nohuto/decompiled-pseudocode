/*
 * XREFs of ?TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01AF440
 * Callers:
 *     ?CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z @ 0x1C01AD8E0 (-CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@.c)
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AE51C (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AE66C (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 *     CachePTPInertiaInfo @ 0x1C01B3E30 (CachePTPInertiaInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall TransformTPScreenToHimetric(__m128i *a1, struct tagPOINT a2, struct tagPOINT *a3)
{
  LONG x; // eax
  __m128i v4; // xmm6
  int v7; // edx
  int v8; // eax
  LONG y; // [rsp+4Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  v4 = a1[10];
  v7 = _mm_cvtsi128_si32(v4);
  a3->x = EngMulDiv(x - v7, a1[11].m128i_i32[2], _mm_cvtsi128_si32(_mm_srli_si128(v4, 8)) - v7);
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 4));
  a3->y = EngMulDiv(y - v8, a1[11].m128i_i32[3], _mm_cvtsi128_si32(_mm_srli_si128(v4, 12)) - v8);
}
