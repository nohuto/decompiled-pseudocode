/*
 * XREFs of sub_18010144C @ 0x18010144C
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180076E40 (RtlGetUserInfoHeap.c)
 * Callees:
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     RtlGetUserInfoHeap @ 0x180076E40 (RtlGetUserInfoHeap.c)
 *     sub_180078084 @ 0x180078084 (sub_180078084.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

BOOLEAN __fastcall sub_18010144C(PRTL_CRITICAL_SECTION *BaseAddress, int a2, char *a3, PVOID *a4, PULONG UserFlags)
{
  BOOLEAN UserInfoHeap; // si
  char v10; // r14
  ULONG v12; // edi
  unsigned __int64 v13; // rdx

  UserInfoHeap = 0;
  v10 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_180155478)(BaseAddress);
  if ( sub_18001F9B0(BaseAddress, "RtlGetUserInfoHeap") )
  {
    v12 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
    if ( (v12 & 1) == 0 )
    {
      RtlEnterCriticalSection(BaseAddress[44]);
      v10 = 1;
      v12 |= 1u;
    }
    sub_180090710((PVOID *)BaseAddress, 0);
    v13 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
    if ( sub_180078084((unsigned __int64)BaseAddress, v13, "RtlGetUserInfoHeap") )
      UserInfoHeap = RtlGetUserInfoHeap(BaseAddress, v12, a3, a4, UserFlags);
  }
  else
  {
    UserInfoHeap = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return UserInfoHeap;
}
