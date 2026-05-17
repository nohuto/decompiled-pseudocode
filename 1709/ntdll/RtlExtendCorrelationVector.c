/*
 * XREFs of RtlExtendCorrelationVector @ 0x1800F51B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x1800F554C (RtlpGetCorrelationVectorBufferLength.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x1800F5568 (RtlpGetCorrelationVectorEndPosition.c)
 */

__int64 RtlExtendCorrelationVector()
{
  int CorrelationVectorEndPosition; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  int CorrelationVectorBufferLength; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r10d
  __int64 v7; // r11

  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition();
  if ( CorrelationVectorEndPosition < 0 )
    return (unsigned int)-2147483643;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(v2, v1, CorrelationVectorEndPosition);
  if ( (int)v5 >= CorrelationVectorBufferLength - 3 )
  {
    return (unsigned int)-2147483643;
  }
  else
  {
    *(_BYTE *)(v5 + v4 + 1) = 46;
    *(_BYTE *)((int)v5 + 1 + v7 + 1) = 48;
    *(_BYTE *)((int)v5 + 2 + v7 + 1) = v6;
  }
  return v6;
}
