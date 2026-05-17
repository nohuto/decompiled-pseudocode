/*
 * XREFs of RtlWalkFrameChain @ 0x18000C460
 * Callers:
 *     RtlCaptureStackBackTrace @ 0x18000C3C0 (RtlCaptureStackBackTrace.c)
 *     sub_180106FF4 @ 0x180106FF4 (sub_180106FF4.c)
 * Callees:
 *     sub_18000C4A0 @ 0x18000C4A0 (sub_18000C4A0.c)
 */

__int64 __fastcall RtlWalkFrameChain(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // r8
  __int64 result; // rax

  if ( (a3 & 0xFFFF00FF) != 0 )
    return 0LL;
  v3 = a3 >> 8;
  if ( (unsigned int)v3 > 0xFE || a2 == -1 )
    return 0LL;
  result = sub_18000C4A0(a1, (unsigned int)(a2 + 1), v3, (unsigned int)(v3 + 1));
  if ( (_DWORD)result )
    return (unsigned int)(result - 1);
  return result;
}
