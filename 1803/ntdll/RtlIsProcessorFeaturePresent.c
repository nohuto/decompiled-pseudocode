/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x18002B4D0
 * Callers:
 *     sub_18002B488 @ 0x18002B488 (sub_18002B488.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlIsProcessorFeaturePresent(unsigned int a1)
{
  if ( a1 >= 0x40 )
    return 0;
  else
    return *(_BYTE *)(a1 + 0x7FFE0274LL);
}
