/*
 * XREFs of sub_180100E1C @ 0x180100E1C
 * Callers:
 *     RtlCompactHeap @ 0x1800EF180 (RtlCompactHeap.c)
 * Callees:
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_1800610C8 @ 0x1800610C8 (sub_1800610C8.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     RtlCompactHeap @ 0x1800EF180 (RtlCompactHeap.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

SIZE_T __fastcall sub_180100E1C(PRTL_CRITICAL_SECTION *BaseAddress, int a2)
{
  char v4; // si
  SIZE_T v6; // rbx
  ULONG v7; // ebx

  v4 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_180155498)(BaseAddress);
  if ( sub_18001F9B0(BaseAddress, "RtlCompactHeap") )
  {
    v7 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(BaseAddress[44]);
      v4 = 1;
      v7 |= 1u;
    }
    sub_180090710((PVOID *)BaseAddress, 0);
    v6 = RtlCompactHeap(BaseAddress, v7);
    sub_1800610C8((PVOID *)BaseAddress, 1);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return v6;
}
