/*
 * XREFs of RtlpHpLfhSubsegmentCountEmptyUnits @ 0x18004A2A4
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180040530 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentFree @ 0x18005EFC0 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhCacheAddSubsegment @ 0x18005F08C (RtlpHpLfhCacheAddSubsegment.c)
 *     RtlpHpLfhCacheEmpty @ 0x180079758 (RtlpHpLfhCacheEmpty.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x1800497B8 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCountEmptyUnits(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // eax
  unsigned int i; // ebx
  int EmptyUnits; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 45);
  v2 = 0;
  for ( i = 0; v2 < v1; v2 = v7 + EmptyUnits )
  {
    EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(a1, v2, &v7);
    if ( EmptyUnits == -1 )
      break;
    i += v7;
  }
  return i;
}
