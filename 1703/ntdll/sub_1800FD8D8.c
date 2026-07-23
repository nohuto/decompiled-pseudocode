/*
 * XREFs of sub_1800FD8D8 @ 0x1800FD8D8
 * Callers:
 *     sub_1800FBC0C @ 0x1800FBC0C (sub_1800FBC0C.c)
 *     sub_1800FBC6C @ 0x1800FBC6C (sub_1800FBC6C.c)
 *     sub_1800FBCD4 @ 0x1800FBCD4 (sub_1800FBCD4.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_1800FD8D8(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  __int64 v7; // rax
  unsigned __int64 v11; // rdx
  unsigned int v12; // ecx

  v7 = a3;
  if ( !a1 )
    return 0LL;
  v11 = a4 * v7;
  if ( v11 > 0xFFFFFFFF || (unsigned int)v11 + a2 < a2 )
    return 0LL;
  v12 = v11 + a2;
  if ( a7 )
    *a7 = v12;
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1, v12);
}
