/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x18002B4D0
 * Callers:
 *     sub_18002B488 @ 0x18002B488 (sub_18002B488.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  if ( ProcessorFeature >= 0x40 )
    return 0;
  else
    return *(_BYTE *)(ProcessorFeature + 0x7FFE0274LL);
}
