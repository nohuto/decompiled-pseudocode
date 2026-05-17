/*
 * XREFs of RtlpHpSegLfhVsFree @ 0x18004AC30
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180040530 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpVsSubsegmentFree @ 0x180061818 (RtlpHpVsSubsegmentFree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegLfhVsFree(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  return RtlpHpSegFree(a1, a2, a4 & 1);
}
