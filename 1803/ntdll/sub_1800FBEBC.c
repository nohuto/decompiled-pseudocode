/*
 * XREFs of sub_1800FBEBC @ 0x1800FBEBC
 * Callers:
 *     sub_1800FA000 @ 0x1800FA000 (sub_1800FA000.c)
 *     sub_1800FA060 @ 0x1800FA060 (sub_1800FA060.c)
 *     sub_1800FA0C8 @ 0x1800FA0C8 (sub_1800FA0C8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FBEBC(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  __int64 v7; // rax
  int v8; // r8d
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax

  v7 = a3;
  v8 = a1;
  if ( !a1 )
    return 0LL;
  v10 = a4 * v7;
  if ( v10 > 0xFFFFFFFF || a2 + (unsigned int)v10 < a2 )
    return 0LL;
  v11 = a2 + v10;
  if ( a7 )
    *a7 = v11;
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8, v11);
}
