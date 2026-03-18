/*
 * XREFs of RtlpHpLfhSubsegmentCountEmptyUnits @ 0x14029B84C
 * Callers:
 *     RtlpHpLfhCacheAddSubsegment @ 0x14029A288 (RtlpHpLfhCacheAddSubsegment.c)
 *     RtlpHpLfhCacheEmpty @ 0x14029A380 (RtlpHpLfhCacheEmpty.c)
 *     RtlpHpLfhSubsegmentFree @ 0x14029C1A0 (RtlpHpLfhSubsegmentFree.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x14029C0F4 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
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
