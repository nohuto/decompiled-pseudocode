/*
 * XREFs of RtlExtendCorrelationVector @ 0x140723CD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCorrelationVectorEndPosition @ 0x140255734 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x140724050 (RtlpGetCorrelationVectorBufferLength.c)
 */

DWORD __cdecl RtlExtendCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  __int64 v1; // rdx
  int CorrelationVectorEndPosition; // eax
  __int64 v4; // rdx
  int CorrelationVectorBufferLength; // eax
  __int64 v6; // r8
  DWORD v7; // r11d

  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition((__int64)CorrelationVector, v1);
  if ( CorrelationVectorEndPosition < 0 )
    return -2147483643;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(
                                    CorrelationVector,
                                    v4,
                                    CorrelationVectorEndPosition);
  if ( (int)v6 >= CorrelationVectorBufferLength - 3 )
    return -2147483643;
  CorrelationVector->Vector[v6] = 46;
  CorrelationVector->Vector[(int)v6 + 1] = 48;
  CorrelationVector->Vector[(int)v6 + 2] = v7;
  return v7;
}
