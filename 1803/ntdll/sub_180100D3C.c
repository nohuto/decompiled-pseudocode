/*
 * XREFs of sub_180100D3C @ 0x180100D3C
 * Callers:
 *     RtlSetUserValueHeap @ 0x180063860 (RtlSetUserValueHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     RtlSetUserValueHeap @ 0x180063860 (RtlSetUserValueHeap.c)
 *     sub_180072588 @ 0x180072588 (sub_180072588.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

BOOLEAN __fastcall sub_180100D3C(PRTL_CRITICAL_SECTION *HeapHandle, int a2, char *a3, void *a4)
{
  BOOLEAN v8; // si
  char v9; // r14
  ULONG v11; // edi
  unsigned __int64 v12; // rdx

  v8 = 0;
  v9 = 0;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_180156460)();
  if ( sub_18001FC58(HeapHandle, "RtlSetUserValueHeap") )
  {
    v11 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(HeapHandle[44]);
      v9 = 1;
      v11 |= 1u;
    }
    sub_18010120C((_DWORD)HeapHandle);
    v12 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
    if ( sub_180072588((unsigned __int64)HeapHandle, v12, "RtlSetUserValueHeap") )
    {
      v8 = RtlSetUserValueHeap(HeapHandle, v11, a3, a4);
      sub_18010120C((_DWORD)HeapHandle);
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v9 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  return v8;
}
