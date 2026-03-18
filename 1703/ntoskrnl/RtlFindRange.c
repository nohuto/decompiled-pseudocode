/*
 * XREFs of RtlFindRange @ 0x1405B4EA0
 * Callers:
 *     ArbFindSuitableRange @ 0x1405B4CF0 (ArbFindSuitableRange.c)
 *     IopPortFindSuitableRange @ 0x1405B5B50 (IopPortFindSuitableRange.c)
 * Callees:
 *     RtlpIsRangeAvailable @ 0x1405B4FE8 (RtlpIsRangeAvailable.c)
 *     RtlGetLastRange @ 0x1405B5220 (RtlGetLastRange.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlFindRange(
        PRTL_RANGE_LIST RangeList,
        ULONGLONG Minimum,
        ULONGLONG Maximum,
        ULONG Length,
        ULONG Alignment,
        ULONG Flags,
        UCHAR AttributeAvailableMask,
        PVOID Context,
        PRTL_CONFLICT_RANGE_CALLBACK Callback,
        PULONGLONG Start)
{
  unsigned __int64 v10; // rbp
  __int64 v12; // rsi
  ULONGLONG v13; // rbx
  char v14; // r13
  char v15; // r15
  unsigned __int64 v16; // rbx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+50h] [rbp-48h] BYREF

  v10 = *(_QWORD *)&Alignment;
  v12 = *(_QWORD *)&Length;
  v13 = Maximum - *(_QWORD *)&Length + 1 - (Maximum - *(_QWORD *)&Length + 1) % *(_QWORD *)&Alignment;
  if ( Minimum > Maximum
    || Maximum - Minimum < *(_QWORD *)&Length - 1LL
    || Minimum + *(_QWORD *)&Alignment < Minimum
    || v13 < Minimum
    || !*(_QWORD *)&Length
    || !*(_QWORD *)&Alignment )
  {
    return -1073741811;
  }
  v14 = Flags & 1;
  v15 = Flags & 2;
  RtlGetLastRange(RangeList, &Iterator, &Alignment);
  while ( !(unsigned __int8)RtlpIsRangeAvailable(&Iterator, v14, v15, 0, (__int64)Context, (__int64)Callback) )
  {
    v16 = *(_QWORD *)Iterator.Current - v12;
    if ( v16 <= *(_QWORD *)Iterator.Current )
    {
      v13 = v16 - v16 % v10;
      if ( v13 >= Minimum )
        continue;
    }
    return -1073741823;
  }
  *Start = v13;
  return 0;
}
