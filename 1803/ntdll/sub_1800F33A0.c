/*
 * XREFs of sub_1800F33A0 @ 0x1800F33A0
 * Callers:
 *     RtlHeapTrkInitialize @ 0x1800F3000 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 */

char __fastcall sub_1800F33A0(__int64 *a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v8; // ebx
  __int64 Heap; // rax
  unsigned __int64 v11; // r8
  unsigned int v12; // ebp
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  bool v17; // cf
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned int v21; // [rsp+20h] [rbp-18h]

  v8 = 0;
  if ( (int)ZwQuerySystemInformation() < 0 )
    return 0;
  if ( !v21 )
    return 0;
  Heap = RtlAllocateHeap(qword_18015D7E8, 0, 8 * a4);
  *a1 = Heap;
  v11 = Heap;
  if ( !Heap )
    return 0;
  v12 = v21 * ((a3 + v21 - 1) / v21);
  v13 = v12 * a4;
  if ( !is_mul_ok(v12, a4) )
    goto LABEL_6;
  v15 = v12 * a4 + v21;
  v16 = -1LL;
  v17 = v15 < v13;
  if ( v15 >= v13 )
    v16 = v12 * a4 + v21;
  v14 = qword_18015D7E8;
  if ( v17 )
    goto LABEL_7;
  v18 = RtlAllocateHeap(qword_18015D7E8, 8u, v16);
  *a2 = v18;
  if ( !v18 )
  {
    v11 = *a1;
LABEL_6:
    v14 = qword_18015D7E8;
LABEL_7:
    RtlFreeHeap(v14, 0, v11);
    *a1 = 0LL;
    return 0;
  }
  if ( a4 )
  {
    v19 = 0LL;
    do
    {
      v20 = v12 * v8++;
      *(_QWORD *)(*a1 + 8 * v19) = v18 + v21 - v18 % v21 + v20;
      v19 = v8;
    }
    while ( v8 < a4 );
  }
  return 1;
}
