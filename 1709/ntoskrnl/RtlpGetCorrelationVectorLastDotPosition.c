/*
 * XREFs of RtlpGetCorrelationVectorLastDotPosition @ 0x140255778
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x140723D30 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x140724050 (RtlpGetCorrelationVectorBufferLength.c)
 */

__int64 __fastcall RtlpGetCorrelationVectorLastDotPosition(__int64 a1, __int64 a2)
{
  __int64 CorrelationVectorBufferLength; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  __int64 v5; // r10
  __int64 i; // rax
  char v7; // cl

  CorrelationVectorBufferLength = (int)RtlpGetCorrelationVectorBufferLength(a1, a2, 0xFFFFFFFFLL);
  for ( i = 0LL; i < CorrelationVectorBufferLength; ++i )
  {
    v7 = *(_BYTE *)(v5 + i + 1);
    if ( !v7 )
      break;
    if ( v7 == 46 )
      v3 = v4;
    ++v4;
  }
  return v3;
}
