/*
 * XREFs of sub_180100300 @ 0x180100300
 * Callers:
 *     RtlGetUserInfoHeap @ 0x1800634E0 (RtlGetUserInfoHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     RtlGetUserInfoHeap @ 0x1800634E0 (RtlGetUserInfoHeap.c)
 *     sub_180072588 @ 0x180072588 (sub_180072588.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

char __fastcall sub_180100300(unsigned __int64 a1, int a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  char UserInfoHeap; // si
  char v10; // r14
  unsigned int v12; // edi
  unsigned __int64 v13; // rdx

  UserInfoHeap = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_180156468)(a1);
  if ( sub_18001FC58((_DWORD *)a1, "RtlGetUserInfoHeap") )
  {
    v12 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v12 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v10 = 1;
      v12 |= 1u;
    }
    sub_18010120C(a1, 0LL);
    v13 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
    if ( sub_180072588(a1, v13, "RtlGetUserInfoHeap") )
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
