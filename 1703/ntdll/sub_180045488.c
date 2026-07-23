/*
 * XREFs of sub_180045488 @ 0x180045488
 * Callers:
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     sub_180045B5C @ 0x180045B5C (sub_180045B5C.c)
 *     sub_18006E760 @ 0x18006E760 (sub_18006E760.c)
 *     sub_18008F0E0 @ 0x18008F0E0 (sub_18008F0E0.c)
 *     sub_1800946FC @ 0x1800946FC (sub_1800946FC.c)
 *     sub_180094A20 @ 0x180094A20 (sub_180094A20.c)
 *     sub_1800FD028 @ 0x1800FD028 (sub_1800FD028.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

PVOID __fastcall sub_180045488(__int64 a1, unsigned int a2)
{
  PVOID result; // rax
  unsigned __int64 v3; // rcx

  result = 0LL;
  v3 = 2LL * a2;
  if ( v3 <= 0xFFFFFFFF )
  {
    if ( (_DWORD)v3 )
      return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v3);
  }
  return result;
}
