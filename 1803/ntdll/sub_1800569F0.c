/*
 * XREFs of sub_1800569F0 @ 0x1800569F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     TpReleaseTimer @ 0x180058900 (TpReleaseTimer.c)
 *     TpAllocTimer @ 0x180058CD0 (TpAllocTimer.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 sub_1800569F0()
{
  void *Heap; // rax
  unsigned __int64 v1; // rbx

  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 96LL);
  v1 = (unsigned __int64)Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0x60uLL);
    *(_DWORD *)v1 = 6293777;
    if ( (int)TpAllocTimer(v1 + 80, sub_1800D8F60, 0LL, 0LL) >= 0 )
    {
      *(_QWORD *)(v1 + 88) = 0LL;
      *(_QWORD *)(v1 + 24) = v1 + 16;
      *(_QWORD *)(v1 + 16) = v1 + 16;
      *(_QWORD *)(v1 + 8) = 0LL;
      *(_QWORD *)(v1 + 40) = v1 + 32;
      *(_QWORD *)(v1 + 32) = v1 + 32;
      *(_QWORD *)(v1 + 48) = 0LL;
      *(_DWORD *)(v1 + 60) = 500;
      *(_DWORD *)(v1 + 64) = 1000;
      *(_DWORD *)(v1 + 68) = 3600000;
      *(_DWORD *)(v1 + 72) = 10;
      *(_DWORD *)(v1 + 56) = 1;
      if ( (int)sub_180056AC0() >= 0 )
      {
        qword_18015D058 = v1;
        return 1LL;
      }
      TpReleaseTimer(*(_QWORD *)(v1 + 80));
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  }
  return 0LL;
}
