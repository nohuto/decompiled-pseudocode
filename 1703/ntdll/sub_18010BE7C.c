/*
 * XREFs of sub_18010BE7C @ 0x18010BE7C
 * Callers:
 *     sub_18010BF68 @ 0x18010BF68 (sub_18010BF68.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18010C634 @ 0x18010C634 (sub_18010C634.c)
 *     sub_18010C7E0 @ 0x18010C7E0 (sub_18010C7E0.c)
 */

__int64 __fastcall sub_18010BE7C(int a1, int a2, __int64 a3, int a4, PCWSTR SourceString)
{
  __int64 Heap; // rax
  int v9; // r9d
  __int64 v11; // rbx
  int v12; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0;
  v13 = 0LL;
  v14 = 0;
  v12 = 24;
  sub_18010C7E0(2LL, 0LL, &v15);
  if ( !v15 )
    return -1LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
  v13 = Heap;
  if ( !Heap )
    return -1LL;
  if ( !(unsigned int)sub_18010C7E0(2LL, Heap, &v15) )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
    return -1LL;
  }
  v11 = sub_18010C634(a1, (int)&v12, a2, v9, a4, SourceString);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
  return v11;
}
