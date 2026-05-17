/*
 * XREFs of sub_1800593D8 @ 0x1800593D8
 * Callers:
 *     sub_180057618 @ 0x180057618 (sub_180057618.c)
 *     sub_180108210 @ 0x180108210 (sub_180108210.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     ZwQuerySystemInformationEx @ 0x18009D5D0 (ZwQuerySystemInformationEx.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800593D8(__int64 a1)
{
  unsigned __int64 Heap; // rbx
  int v3; // edi
  unsigned __int64 i; // rdx
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 1;
  v6 = 80 * dword_18015D044;
  Heap = RtlAllocateHeap(
           (__int64)NtCurrentPeb()->ProcessHeap,
           (dword_18015D050 + 786432) | 8u,
           (unsigned int)(80 * dword_18015D044));
  if ( Heap )
  {
    v3 = ZwQuerySystemInformationEx(107LL, &v7, 4LL, Heap, v6, &v6);
    if ( v3 >= 0 )
    {
      memset(*(void **)(a1 + 48), 0, 16LL * (unsigned int)dword_18015D044);
      for ( i = Heap; i < Heap + v6; i += *(unsigned int *)(i + 4) )
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * *(unsigned int *)(i + 8)) = *(_OWORD *)(i + 32);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, Heap);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
