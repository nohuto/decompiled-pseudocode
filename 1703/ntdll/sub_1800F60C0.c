/*
 * XREFs of sub_1800F60C0 @ 0x1800F60C0
 * Callers:
 *     RtlHeapTrkInitialize @ 0x1800F5D20 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 */

char __fastcall sub_1800F60C0(__int64 *a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v8; // ebx
  __int64 Heap; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebp
  unsigned __int64 v14; // r10
  int v15; // ecx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // [rsp+20h] [rbp-18h]

  v8 = 0;
  if ( (int)ZwQuerySystemInformation() < 0 )
    return 0;
  if ( !v20 )
    return 0;
  Heap = RtlAllocateHeap(qword_18015C450, 0, 8 * a4);
  *a1 = Heap;
  v11 = Heap;
  if ( !Heap )
    return 0;
  v12 = -1LL;
  v13 = v20 * ((a3 + v20 - 1) / v20);
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
  if ( v20 + v14 >= v14 )
    v12 = v20 + v14;
  v16 = qword_18015C450;
  if ( v20 + v14 < v14 )
    goto LABEL_10;
  v17 = RtlAllocateHeap(qword_18015C450, 8u, v12);
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
  if ( a4 )
  {
    v18 = 0LL;
    do
    {
      v19 = v13 * v8++;
      *(_QWORD *)(*a1 + 8 * v18) = v17 + v20 - v17 % v20 + v19;
      v18 = v8;
    }
    while ( v8 < a4 );
  }
  return 1;
}
