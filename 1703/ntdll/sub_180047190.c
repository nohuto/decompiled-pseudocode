/*
 * XREFs of sub_180047190 @ 0x180047190
 * Callers:
 *     sub_180047104 @ 0x180047104 (sub_180047104.c)
 *     sub_18006E60C @ 0x18006E60C (sub_18006E60C.c)
 *     sub_1800FA968 @ 0x1800FA968 (sub_1800FA968.c)
 *     sub_1800FAA04 @ 0x1800FAA04 (sub_1800FAA04.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

PVOID __fastcall sub_180047190(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned __int64 v9; // r8
  unsigned int v10; // edx
  PVOID result; // rax

  v7 = a3 * (unsigned __int64)a2;
  if ( v7 > 0xFFFFFFFF )
    return 0LL;
  if ( (unsigned int)v7 + a1 < a1 )
    return 0LL;
  v8 = v7 + a1;
  v9 = a5 * (unsigned __int64)a4;
  if ( v9 > 0xFFFFFFFF || (unsigned int)v9 + v8 < v8 )
    return 0LL;
  v10 = v9 + v8;
  result = 0LL;
  if ( a6 )
    *a6 = v10;
  if ( v10 )
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v10);
  return result;
}
