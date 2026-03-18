/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x140724050
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x140255734 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x140255778 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlExtendCorrelationVector @ 0x140723CD0 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x140723D30 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x140723E90 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x140724074 (RtlpGetLastContiguosBase64Position.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetCorrelationVectorBufferLength(_BYTE *a1)
{
  __int64 result; // rax

  if ( *a1 == 1 )
    return 65LL;
  result = 0xFFFFFFFFLL;
  if ( *a1 == 2 )
    return 129LL;
  return result;
}
