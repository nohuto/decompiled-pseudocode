/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x1800F554C
 * Callers:
 *     RtlExtendCorrelationVector @ 0x1800F51B0 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x1800F5210 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1800F53A0 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x1800F5568 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1800F55A4 (RtlpGetLastContiguosBase64Position.c)
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
