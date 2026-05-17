/*
 * XREFs of sub_180100B78 @ 0x180100B78
 * Callers:
 *     RtlSetUserFlagsHeap @ 0x1800EB820 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     sub_180072588 @ 0x180072588 (sub_180072588.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     RtlSetUserFlagsHeap @ 0x1800EB820 (RtlSetUserFlagsHeap.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

char __fastcall sub_180100B78(unsigned __int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  char v9; // di
  char v10; // r14
  int v12; // esi
  unsigned __int64 v13; // rdx

  v9 = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_180156470)(a1);
  if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    return 0;
  if ( sub_18001FC58((_DWORD *)a1, "RtlSetUserFlagsHeap") )
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
    if ( sub_180072588(a1, v13, "RtlSetUserFlagsHeap") )
    {
      v9 = RtlSetUserFlagsHeap(a1, v12, a3, a4, a5);
      sub_18010120C(a1, 0LL);
    }
  }
  else
  {
    v9 = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v9;
}
