/*
 * XREFs of sub_180082ED0 @ 0x180082ED0
 * Callers:
 *     <none>
 * Callees:
 *     TpAllocTimer @ 0x180013F90 (TpAllocTimer.c)
 *     TpReleaseTimer @ 0x180019600 (TpReleaseTimer.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180082FA0 @ 0x180082FA0 (sub_180082FA0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180082ED0(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  char *Heap; // rax
  char *v4; // rbx

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
  v4 = Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0x60uLL);
    *(_DWORD *)v4 = 6293777;
    if ( TpAllocTimer((PTP_TIMER *)v4 + 10, sub_1800DF6E0, 0LL, 0LL) >= 0 )
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
      if ( (int)sub_180082FA0() >= 0 )
      {
        qword_18015C008 = (__int64)v4;
        return 1LL;
      }
      TpReleaseTimer(*((PTP_TIMER *)v4 + 10));
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return 0LL;
}
