/*
 * XREFs of sub_180036414 @ 0x180036414
 * Callers:
 *     sub_1800362CC @ 0x1800362CC (sub_1800362CC.c)
 *     sub_18006FC80 @ 0x18006FC80 (sub_18006FC80.c)
 *     sub_18008A9A4 @ 0x18008A9A4 (sub_18008A9A4.c)
 *     sub_1800F891C @ 0x1800F891C (sub_1800F891C.c)
 *     sub_1800F985C @ 0x1800F985C (sub_1800F985C.c)
 *     sub_1800FB5E4 @ 0x1800FB5E4 (sub_1800FB5E4.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 */

PVOID __fastcall sub_180036414(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx

  v2 = 2LL * a2;
  v3 = 0LL;
  if ( v2 <= 0xFFFFFFFF && (_DWORD)v2 )
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v2);
  return (PVOID)v3;
}
