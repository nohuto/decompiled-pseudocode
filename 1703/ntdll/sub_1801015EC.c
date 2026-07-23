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

PWSTR __fastcall sub_1801015EC(
        PRTL_CRITICAL_SECTION *BaseAddress,
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
  if ( sub_18001F9B0(BaseAddress, "RtlQueryTagHeap") )
  {
    v11 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(BaseAddress[44]);
      v9 = 1;
      v11 |= 1u;
    }
    if ( sub_180090710((PVOID *)BaseAddress, 0) )
      TagHeap = RtlQueryTagHeap(BaseAddress, v11, a3, a4, TagInfo);
  }
  if ( v9 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return TagHeap;
}
