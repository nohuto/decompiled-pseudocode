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

char __fastcall sub_18010144C(unsigned __int64 a1, int a2, unsigned __int64 a3, _QWORD *a4, _DWORD *a5)
{
  char UserInfoHeap; // si
  char v10; // r14
  int v12; // edi
  unsigned __int64 v13; // rdx

  UserInfoHeap = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_180155478)(a1);
  if ( sub_18001F9B0((_DWORD *)a1, "RtlGetUserInfoHeap") )
  {
    v12 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v12 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v10 = 1;
      v12 |= 1u;
    }
    sub_180090710(a1, 0);
    v13 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
    if ( sub_180078084(a1, v13, "RtlGetUserInfoHeap") )
      UserInfoHeap = RtlGetUserInfoHeap(a1, v12, a3, a4, a5);
  }
  else
  {
    UserInfoHeap = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return UserInfoHeap;
}
