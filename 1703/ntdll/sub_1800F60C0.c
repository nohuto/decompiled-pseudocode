/*
 * XREFs of sub_1800F60C0 @ 0x1800F60C0
 * Callers:
 *     RtlHeapTrkInitialize @ 0x1800F5D20 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 */

char __fastcall sub_1800F60C0(void **a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v8; // ebx
  PVOID Heap; // rax
  void *v11; // r8
  SIZE_T v12; // r9
  unsigned int v13; // ebp
  unsigned __int64 v14; // r10
  int v15; // ecx
  PVOID v16; // rcx
  unsigned __int64 v17; // rax
  char *v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned int v21[6]; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0;
  if ( ZwQuerySystemInformation(SystemRecommendedSharedDataAlignment, v21, 4u, 0LL) < 0 )
    return 0;
  if ( !v21[0] )
    return 0;
  Heap = RtlAllocateHeap(qword_18015C450, 0, 8 * a4);
  *a1 = Heap;
  v11 = Heap;
  if ( !Heap )
    return 0;
  v12 = -1LL;
  v13 = v21[0] * ((a3 + v21[0] - 1) / v21[0]);
  v14 = v13 * a4;
  if ( is_mul_ok(v13, a4) )
  {
    v15 = 0;
  }
  else
  {
    v14 = -1LL;
    v15 = -1073741675;
  }
  if ( (v15 & 0xC0000000) == 0xC0000000 )
    goto LABEL_9;
  if ( v21[0] + v14 >= v14 )
    v12 = v21[0] + v14;
  v16 = qword_18015C450;
  if ( v21[0] + v14 < v14 )
    goto LABEL_10;
  v17 = (unsigned __int64)RtlAllocateHeap(qword_18015C450, 8u, v12);
  *a2 = v17;
  if ( !v17 )
  {
    v11 = *a1;
LABEL_9:
    v16 = qword_18015C450;
LABEL_10:
    RtlFreeHeap(v16, 0, v11);
    *a1 = 0LL;
    return 0;
  }
  v18 = (char *)(v17 + v21[0] - v17 % v21[0]);
  if ( a4 )
  {
    v19 = 0LL;
    do
    {
      v20 = v13 * v8++;
      *((_QWORD *)*a1 + v19) = &v18[v20];
      v19 = v8;
    }
    while ( v8 < a4 );
  }
  return 1;
}
