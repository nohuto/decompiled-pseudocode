/*
 * XREFs of sub_1800F33A0 @ 0x1800F33A0
 * Callers:
 *     RtlHeapTrkInitialize @ 0x1800F3000 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 */

char __fastcall sub_1800F33A0(void **a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v8; // ebx
  PVOID Heap; // rax
  void *v11; // r8
  unsigned int v12; // ebp
  unsigned __int64 v13; // r9
  PVOID v14; // rcx
  unsigned __int64 v15; // rcx
  SIZE_T v16; // rax
  bool v17; // cf
  unsigned __int64 v18; // rax
  char *v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned int v22[6]; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0;
  if ( ZwQuerySystemInformation(SystemRecommendedSharedDataAlignment, v22, 4u, 0LL) < 0 )
    return 0;
  if ( !v22[0] )
    return 0;
  Heap = RtlAllocateHeap(qword_18015D7E8, 0, 8 * a4);
  *a1 = Heap;
  v11 = Heap;
  if ( !Heap )
    return 0;
  v12 = v22[0] * ((a3 + v22[0] - 1) / v22[0]);
  v13 = v12 * a4;
  if ( !is_mul_ok(v12, a4) )
    goto LABEL_6;
  v15 = v12 * a4 + v22[0];
  v16 = -1LL;
  v17 = v15 < v13;
  if ( v15 >= v13 )
    v16 = v12 * a4 + v22[0];
  v14 = qword_18015D7E8;
  if ( v17 )
    goto LABEL_7;
  v18 = (unsigned __int64)RtlAllocateHeap(qword_18015D7E8, 8u, v16);
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
  v19 = (char *)(v18 + v22[0] - v18 % v22[0]);
  if ( a4 )
  {
    v20 = 0LL;
    do
    {
      v21 = v12 * v8++;
      *((_QWORD *)*a1 + v20) = &v19[v21];
      v20 = v8;
    }
    while ( v8 < a4 );
  }
  return 1;
}
