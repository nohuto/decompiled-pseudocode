/*
 * XREFs of sub_180032C68 @ 0x180032C68
 * Callers:
 *     sub_180032BDC @ 0x180032BDC (sub_180032BDC.c)
 *     sub_18007007C @ 0x18007007C (sub_18007007C.c)
 *     sub_1800F8C00 @ 0x1800F8C00 (sub_1800F8C00.c)
 *     sub_1800F8C94 @ 0x1800F8C94 (sub_1800F8C94.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 */

PVOID __fastcall sub_180032C68(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // r8d
  unsigned __int64 v8; // rcx
  unsigned int v9; // edx
  PVOID result; // rax

  v6 = a3 * (unsigned __int64)a2;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  if ( a1 + (unsigned int)v6 < a1 )
    return 0LL;
  v7 = a1 + v6;
  v8 = a5 * (unsigned __int64)a4;
  if ( v8 > 0xFFFFFFFF || v7 + (unsigned int)v8 < v7 )
    return 0LL;
  v9 = v7 + v8;
  result = 0LL;
  if ( a6 )
    *a6 = v9;
  if ( v9 )
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v9);
  return result;
}
