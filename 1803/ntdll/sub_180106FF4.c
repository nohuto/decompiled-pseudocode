/*
 * XREFs of sub_180106FF4 @ 0x180106FF4
 * Callers:
 *     sub_180007740 @ 0x180007740 (sub_180007740.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x18000C460 (RtlWalkFrameChain.c)
 */

__int64 __fastcall sub_180106FF4(__int64 *a1, _WORD *a2)
{
  __int64 result; // rax
  __int16 v5; // r8

  result = RtlWalkFrameChain(*a1 + 16, 256, 0);
  v5 = 8 * result;
  if ( 8 * (_WORD)result )
  {
    *a2 = v5 + 16;
    *(_QWORD *)(*a1 + 8) = 0LL;
    *(_WORD *)*a1 = v5 + 16;
    *(_WORD *)(*a1 + 2) = 6;
    *(_WORD *)(*a1 + 6) = v5;
    *(_WORD *)(*a1 + 4) &= ~1u;
    result = *a1;
    *(_WORD *)(*a1 + 4) &= 1u;
  }
  else
  {
    *a1 = 0LL;
  }
  return result;
}
