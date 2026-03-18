/*
 * XREFs of ExIsProcessorFeaturePresent @ 0x14014B850
 * Callers:
 *     PiIsDriverBlocked @ 0x1404B6244 (PiIsDriverBlocked.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  if ( ProcessorFeature >= 0x40 )
    return 0;
  else
    return *(_BYTE *)(ProcessorFeature - 0x87FFFFFFD8CLL);
}
