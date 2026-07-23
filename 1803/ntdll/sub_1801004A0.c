/*
 * XREFs of sub_1801004A0 @ 0x1801004A0
 * Callers:
 *     RtlQueryTagHeap @ 0x1800EB580 (RtlQueryTagHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     RtlQueryTagHeap @ 0x1800EB580 (RtlQueryTagHeap.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

PWSTR __fastcall sub_1801004A0(
        PRTL_CRITICAL_SECTION *HeapHandle,
        int a2,
        USHORT a3,
        BOOLEAN a4,
        PRTL_HEAP_TAG_INFO TagInfo)
{
  char v9; // si
  PWSTR TagHeap; // r14
  ULONG v11; // ebx

  v9 = 0;
  TagHeap = 0LL;
  if ( sub_18001FC58(HeapHandle, "RtlQueryTagHeap") )
  {
    v11 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(HeapHandle[44]);
      v9 = 1;
      v11 |= 1u;
    }
    if ( (unsigned __int8)sub_18010120C((_DWORD)HeapHandle) )
      TagHeap = RtlQueryTagHeap(HeapHandle, v11, a3, a4, TagInfo);
  }
  if ( v9 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  return TagHeap;
}
