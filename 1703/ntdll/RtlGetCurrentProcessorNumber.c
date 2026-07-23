/*
 * XREFs of RtlGetCurrentProcessorNumber @ 0x1800A9950
 * Callers:
 *     sub_180009FB0 @ 0x180009FB0 (sub_180009FB0.c)
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_18002BA00 @ 0x18002BA00 (sub_18002BA00.c)
 *     sub_180080558 @ 0x180080558 (sub_180080558.c)
 *     sub_180095910 @ 0x180095910 (sub_180095910.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetCurrentProcessorNumber(void)
{
  unsigned __int8 v0; // cl
  char v2; // zf
  unsigned __int32 v3; // eax

  if ( MEMORY[0x7FFE0294] )
  {
    __asm { rdtscp }
    return v0;
  }
  else
  {
    v3 = __segmentlimit(0x53u);
    if ( v2 )
      return v3 >> 14;
    else
      return ZwGetCurrentProcessorNumber();
  }
}
