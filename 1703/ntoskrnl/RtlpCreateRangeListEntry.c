/*
 * XREFs of RtlpCreateRangeListEntry @ 0x1405B4C78
 * Callers:
 *     RtlAddRange @ 0x1405B4B10 (RtlAddRange.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x14003F4BC (ExAllocateFromPagedLookasideList.c)
 */

_BYTE *__fastcall RtlpCreateRangeListEntry(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  _BYTE *result; // rax

  result = ExAllocateFromPagedLookasideList(&RtlpRangeListEntryLookasideList);
  if ( result )
  {
    result[33] = 0;
    *((_WORD *)result + 17) = 0;
    *((_QWORD *)result + 3) = a5;
    *(_QWORD *)result = a1;
    *((_QWORD *)result + 1) = a2;
    result[32] = a3;
    *((_QWORD *)result + 2) = a4;
  }
  return result;
}
