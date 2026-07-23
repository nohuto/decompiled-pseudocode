/*
 * XREFs of sub_180101E60 @ 0x180101E60
 * Callers:
 *     RtlSetUserValueHeap @ 0x180077230 (RtlSetUserValueHeap.c)
 * Callees:
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     RtlSetUserValueHeap @ 0x180077230 (RtlSetUserValueHeap.c)
 *     sub_180078084 @ 0x180078084 (sub_180078084.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

BOOLEAN __fastcall sub_180101E60(PRTL_CRITICAL_SECTION *BaseAddress, int a2, char *a3, void *a4)
{
  BOOLEAN v8; // si
  char v9; // r14
  ULONG v11; // edi
  unsigned __int64 v12; // rdx

  v8 = 0;
  v9 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_180155470)();
  if ( sub_18001F9B0(BaseAddress, "RtlSetUserValueHeap") )
  {
    v11 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(BaseAddress[44]);
      v9 = 1;
      v11 |= 1u;
    }
    sub_180090710((PVOID *)BaseAddress, 0);
    v12 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
    if ( sub_180078084((unsigned __int64)BaseAddress, v12, "RtlSetUserValueHeap") )
    {
      v8 = RtlSetUserValueHeap(BaseAddress, v11, a3, a4);
      sub_180090710((PVOID *)BaseAddress, 0);
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v9 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return v8;
}
