/*
 * XREFs of RtlpGetCorrelationVectorEndPosition @ 0x1800F5568
 * Callers:
 *     RtlExtendCorrelationVector @ 0x1800F51B0 (RtlExtendCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1800F53A0 (RtlValidateCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x1800F554C (RtlpGetCorrelationVectorBufferLength.c)
 */

__int64 __fastcall RtlpGetCorrelationVectorEndPosition(_BYTE *a1)
{
  int CorrelationVectorBufferLength; // eax
  __int64 v2; // rcx
  unsigned int v3; // r8d
  int v4; // r9d
  __int64 i; // rdx
  __int64 result; // rax

  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1);
  v4 = CorrelationVectorBufferLength;
  for ( i = 0LL; i < CorrelationVectorBufferLength; ++i )
  {
    if ( !*(_BYTE *)(v2 + i + 1) )
      break;
    ++v3;
  }
  result = 0xFFFFFFFFLL;
  if ( v4 > (int)v3 )
    return v3;
  return result;
}
