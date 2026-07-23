/*
 * XREFs of sub_180101FF0 @ 0x180101FF0
 * Callers:
 *     RtlSizeHeap @ 0x180023760 (RtlSizeHeap.c)
 * Callees:
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlSizeHeap @ 0x180023760 (RtlSizeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180078084 @ 0x180078084 (sub_180078084.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

SIZE_T __fastcall sub_180101FF0(PRTL_CRITICAL_SECTION *BaseAddress, int a2, char *a3)
{
  char v6; // r14
  SIZE_T v8; // rdi
  ULONG v9; // esi
  unsigned __int64 v10; // rdx

  v6 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_180155490)(BaseAddress);
  v8 = -1LL;
  if ( sub_18001F9B0(BaseAddress, "RtlSizeHeap") )
  {
    v9 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(BaseAddress[44]);
      v9 |= 1u;
      v6 = 1;
    }
    sub_180090710((PVOID *)BaseAddress, 0);
    v10 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    if ( sub_180078084((unsigned __int64)BaseAddress, v10, "RtlSizeHeap") )
      v8 = RtlSizeHeap(BaseAddress, v9, a3);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v6 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return v8;
}
