/*
 * XREFs of MiClearFileOnlyPfn @ 0x1402183C4
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     memset @ 0x140192D80 (memset.c)
 */

void __fastcall MiClearFileOnlyPfn(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  _OWORD v5[3]; // [rsp+20h] [rbp-30h] BYREF

  memset(v5, 0, sizeof(v5));
  *((_QWORD *)&v5[1] + 1) |= 0x8000000000000000uLL;
  BYTE2(v5[2]) = BYTE2(v5[2]) & 0x3F | 0x40;
  BYTE2(v5[2]) = BYTE2(v5[2]) & 0xF8 | 5;
  v2 = *((_QWORD *)&v5[2] + 1);
  if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3 )
    v2 = *((_QWORD *)&v5[2] + 1) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
  v3 = v5[1];
  *(_OWORD *)a1 = v5[0];
  *((_QWORD *)&v5[2] + 1) = v2 | 0x30000000000000LL;
  v4 = v5[2];
  *(_OWORD *)(a1 + 16) = v3;
  *(_OWORD *)(a1 + 32) = v4;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_14036BF28);
  *(_QWORD *)a1 = qword_14036BF20;
  qword_14036BF20 = a1;
  if ( !byte_14036BF50 )
  {
    stru_14036BF30.List.Flink = 0LL;
    stru_14036BF30.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_14036BF30.Parameter = (void *)1;
    ExQueueWorkItem(&stru_14036BF30, DelayedWorkQueue);
    byte_14036BF50 = 1;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BF28);
}
