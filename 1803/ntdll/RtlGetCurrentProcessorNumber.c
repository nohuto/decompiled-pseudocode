/*
 * XREFs of RtlGetCurrentProcessorNumber @ 0x18009F270
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 *     sub_18007E9DC @ 0x18007E9DC (sub_18007E9DC.c)
 *     sub_1800F39A0 @ 0x1800F39A0 (sub_1800F39A0.c)
 *     sub_180104C98 @ 0x180104C98 (sub_180104C98.c)
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
