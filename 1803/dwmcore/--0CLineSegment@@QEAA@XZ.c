/*
 * XREFs of ??0CLineSegment@@QEAA@XZ @ 0x1800D7410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLineSegment *__fastcall CLineSegment::CLineSegment(CLineSegment *this)
{
  CLineSegment *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  result = this;
  *(_QWORD *)this = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  return result;
}
