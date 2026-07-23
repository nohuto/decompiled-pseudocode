/*
 * XREFs of sub_18002B488 @ 0x18002B488
 * Callers:
 *     sub_18002AFBC @ 0x18002AFBC (sub_18002AFBC.c)
 *     sub_1800CC6AC @ 0x1800CC6AC (sub_1800CC6AC.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x18002B4D0 (RtlIsProcessorFeaturePresent.c)
 */

__int64 sub_18002B488()
{
  int v0; // ecx

  if ( !RtlIsProcessorFeaturePresent(0x1Cu) )
    return 0LL;
  v0 = 0;
  while ( 1 )
  {
    __asm { rdrand  r8 }
    if ( _CF )
      break;
    if ( (unsigned int)++v0 >= 0xA )
      return 0LL;
  }
  return _R8;
}
