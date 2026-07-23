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

__int64 __fastcall sub_1800569F0(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  char *Heap; // rax
  char *v4; // rbx

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
  v4 = Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0x60uLL);
    *(_DWORD *)v4 = 6293777;
    if ( TpAllocTimer((PTP_TIMER *)v4 + 10, Callback, 0LL, 0LL) >= 0 )
    {
      *((_QWORD *)v4 + 11) = 0LL;
      *((_QWORD *)v4 + 3) = v4 + 16;
      *((_QWORD *)v4 + 2) = v4 + 16;
      *((_QWORD *)v4 + 1) = 0LL;
      *((_QWORD *)v4 + 5) = v4 + 32;
      *((_QWORD *)v4 + 4) = v4 + 32;
      *((_QWORD *)v4 + 6) = 0LL;
      *((_DWORD *)v4 + 15) = 500;
      *((_DWORD *)v4 + 16) = 1000;
      *((_DWORD *)v4 + 17) = 3600000;
      *((_DWORD *)v4 + 18) = 10;
      *((_DWORD *)v4 + 14) = 1;
      if ( (int)sub_180056AC0() >= 0 )
      {
        qword_18015D058 = (__int64)v4;
        return 1LL;
      }
      TpReleaseTimer(*((PTP_TIMER *)v4 + 10));
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return 0LL;
}
