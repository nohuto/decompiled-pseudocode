/*
 * XREFs of sub_1800FF9D0 @ 0x1800FF9D0
 * Callers:
 *     RtlCompactHeap @ 0x1800EAF00 (RtlCompactHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     RtlCompactHeap @ 0x1800EAF00 (RtlCompactHeap.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_18010180C @ 0x18010180C (sub_18010180C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

SIZE_T __fastcall sub_1800FF9D0(PRTL_CRITICAL_SECTION *Src, int a2)
{
  char v4; // si
  SIZE_T v6; // rbx
  ULONG v7; // ebx

  v4 = 0;
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_180156488)(Src);
  if ( sub_18001FC58(Src, "RtlCompactHeap") )
  {
    v7 = *((_DWORD *)Src + 29) | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(Src[44]);
      v4 = 1;
      v7 |= 1u;
    }
    sub_18010120C((_DWORD)Src);
    v6 = RtlCompactHeap(Src, v7);
    sub_18010180C(Src);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 )
    RtlLeaveCriticalSection(Src[44]);
  return v6;
}
