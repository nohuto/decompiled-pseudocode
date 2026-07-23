/*
 * XREFs of sub_180101254 @ 0x180101254
 * Callers:
 *     RtlCreateTagHeap @ 0x180081820 (RtlCreateTagHeap.c)
 * Callees:
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_1800610C8 @ 0x1800610C8 (sub_1800610C8.c)
 *     RtlCreateTagHeap @ 0x180081820 (RtlCreateTagHeap.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

__int64 __fastcall sub_180101254(PRTL_CRITICAL_SECTION *BaseAddress, int a2, WCHAR *a3, WCHAR *a4)
{
  char v8; // si
  ULONG TagHeap; // r14d
  ULONG v10; // edi

  v8 = 0;
  TagHeap = 0;
  if ( sub_18001F9B0(BaseAddress, "RtlCreateTagHeap") )
  {
    v10 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(BaseAddress[44]);
      v8 = 1;
      v10 |= 1u;
    }
    if ( sub_180090710((PVOID *)BaseAddress, 0) )
      TagHeap = RtlCreateTagHeap(BaseAddress, v10, a3, a4);
    sub_1800610C8((PVOID *)BaseAddress, 1);
  }
  if ( v8 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return TagHeap;
}
