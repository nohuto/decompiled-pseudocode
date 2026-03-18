/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x140787920
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x14028D774 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x14028D7B8 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlExtendCorrelationVector @ 0x1407875A0 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x140787600 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x140787760 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x140787944 (RtlpGetLastContiguosBase64Position.c)
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
