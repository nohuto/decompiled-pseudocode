/*
 * XREFs of sub_1801015EC @ 0x1801015EC
 * Callers:
 *     RtlQueryTagHeap @ 0x1800EF530 (RtlQueryTagHeap.c)
 * Callees:
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     RtlQueryTagHeap @ 0x1800EF530 (RtlQueryTagHeap.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

void *__fastcall sub_1801015EC(__int64 a1, int a2, unsigned __int16 a3, char a4, __int64 a5)
{
  char v9; // si
  void *TagHeap; // r14
  int v11; // ebx

  v9 = 0;
  TagHeap = 0LL;
  if ( sub_18001F9B0((_DWORD *)a1, "RtlQueryTagHeap") )
  {
    v11 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 = 1;
      v11 |= 1u;
    }
    if ( sub_180090710(a1, 0) )
      TagHeap = RtlQueryTagHeap(a1, v11, a3, a4, a5);
  }
  if ( v9 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return TagHeap;
}
