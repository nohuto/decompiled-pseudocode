/*
 * XREFs of RtlpHpSegLfhAllocate @ 0x180037F80
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x180046890 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegLfhAllocate(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned int v4; // r10d
  __int64 v5; // r9

  v4 = a4 & 1 | 0x4000000;
  v5 = a4 & 1 | 0x4000004u;
  if ( a2 < 0x10000 )
    v5 = v4;
  return RtlpHpSegAlloc(a1, a2, a2, v5);
}
