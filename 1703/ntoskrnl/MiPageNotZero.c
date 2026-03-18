/*
 * XREFs of MiPageNotZero @ 0x14021F048
 * Callers:
 *     MiSlistGetFreePage @ 0x14001DFF8 (MiSlistGetFreePage.c)
 *     MiCreateSharedZeroPages @ 0x1400B79A0 (MiCreateSharedZeroPages.c)
 *     MiRemoveAnyPage @ 0x1400B91F0 (MiRemoveAnyPage.c)
 *     MiGetFreeOrZeroPage @ 0x1400BBDA0 (MiGetFreeOrZeroPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPageNotZero(int *BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  int v4; // edx
  unsigned int v5; // r14d
  int v6; // r15d
  int *v7; // r8
  ULONG v8; // ebp
  __int64 v9; // rbx

  _InterlockedAdd(&dword_14036CA20, 1u);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = BugCheckParameter1;
  if ( BugCheckParameter1 >= BugCheckParameter1 + 1024 )
    goto LABEL_10;
  while ( 1 )
  {
    if ( *v7 )
    {
      if ( ++v4 != 1 )
        goto LABEL_10;
      v5 = (unsigned __int16)v7 & 0xFFF;
      v6 = *v7;
      if ( ((*v7 - 1) & *v7) != 0 )
        break;
    }
    if ( ++v7 >= BugCheckParameter1 + 1024 )
      goto LABEL_8;
  }
  v4 = 2;
LABEL_8:
  if ( v4 == 1 )
  {
    v8 = 299;
    _InterlockedAdd(&dword_14036CA1C, 1u);
  }
  else
  {
LABEL_10:
    v8 = 295;
  }
  if ( (MmPageValidationAction & 1) != 0 )
    KeBugCheckEx(v8, (ULONG_PTR)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v9 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(48 * BugCheckParameter2 - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL));
  KeSetEvent(*(PRKEVENT *)(v9 + 352), 0, 0);
  if ( (ULONG_PTR *)v9 != &MiSystemPartition )
    KeSetEvent(qword_140380360, 0, 0);
  if ( (MiFlags & 0x30) == 0x20 && !_InterlockedCompareExchange(&dword_14036C98C, 1, 0) )
  {
    stru_14036C9A0.List.Flink = 0LL;
    dword_14036C990 = v6;
    qword_14036C998 = v5 + (BugCheckParameter2 << 12);
    stru_14036C9A0.WorkerRoutine = (void (__fastcall *)(void *))MiBadMemoryLogger;
    stru_14036C9A0.Parameter = &dword_14036C988;
    dword_14036C988 = v8;
    ExQueueWorkItem(&stru_14036C9A0, DelayedWorkQueue);
  }
  return KeZeroPages(BugCheckParameter1, 0x1000uLL);
}
