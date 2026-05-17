/*
 * XREFs of sub_180100ECC @ 0x180100ECC
 * Callers:
 *     RtlSizeHeap @ 0x18001B860 (RtlSizeHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlSizeHeap @ 0x18001B860 (RtlSizeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     sub_180072588 @ 0x180072588 (sub_180072588.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

__int64 __fastcall sub_180100ECC(unsigned __int64 a1, int a2, unsigned __int64 a3)
{
  char v6; // r14
  __int64 v8; // rdi
  unsigned int v9; // esi
  unsigned __int64 v10; // rdx

  v6 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_180156480)(a1);
  v8 = -1LL;
  if ( sub_18001FC58((_DWORD *)a1, "RtlSizeHeap") )
  {
    v9 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 |= 1u;
      v6 = 1;
    }
    sub_18010120C(a1, 0LL);
    v10 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    if ( sub_180072588(a1, v10, "RtlSizeHeap") )
      v8 = RtlSizeHeap(a1, v9, a3);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v6 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v8;
}
