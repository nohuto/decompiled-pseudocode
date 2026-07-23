/*
 * XREFs of RtlExtendCorrelationVector @ 0x1800F51B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x1800F554C (RtlpGetCorrelationVectorBufferLength.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x1800F5568 (RtlpGetCorrelationVectorEndPosition.c)
 */

DWORD __cdecl RtlExtendCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  int CorrelationVectorEndPosition; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int CorrelationVectorBufferLength; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  DWORD v7; // r10d
  __int64 v8; // r11

  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition();
  if ( CorrelationVectorEndPosition < 0 )
    return -2147483643;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(v3, v2, CorrelationVectorEndPosition);
  if ( (int)v6 >= CorrelationVectorBufferLength - 3 )
    return -2147483643;
  *(_BYTE *)(v6 + v5 + 1) = 46;
  *(_BYTE *)((int)v6 + 1 + v8 + 1) = 48;
  *(_BYTE *)((int)v6 + 2 + v8 + 1) = v7;
  return v7;
}
