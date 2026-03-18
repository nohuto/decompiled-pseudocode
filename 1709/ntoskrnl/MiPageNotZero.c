/*
 * XREFs of MiPageNotZero @ 0x14022A530
 * Callers:
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiCreateSharedZeroPages @ 0x14004BDB0 (MiCreateSharedZeroPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSlistGetFreePage @ 0x1400C807C (MiSlistGetFreePage.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140184D60 (KeZeroPages.c)
 */

__int64 __fastcall MiPageNotZero(int *BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  int v4; // r8d
  unsigned int v5; // r14d
  int v6; // r15d
  int *v7; // r9
  ULONG v8; // ebp
  __int64 v9; // rbx

  _InterlockedAdd(&dword_140388C18, 1u);
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
    _InterlockedAdd(&dword_140388C14, 1u);
  }
  else
  {
LABEL_10:
    v8 = 295;
  }
  if ( (MmPageValidationAction & 1) != 0 )
    KeBugCheckEx(v8, (ULONG_PTR)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v9 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(48 * BugCheckParameter2 - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL));
  KeSetEvent(*(PRKEVENT *)(v9 + 312), 0, 0);
  if ( (ULONG_PTR *)v9 != &MiSystemPartition )
    KeSetEvent(qword_14038A1F8, 0, 0);
  if ( (MiFlags & 0x30) == 0x20 && !_InterlockedCompareExchange(&dword_140388B84, 1, 0) )
  {
    stru_140388B98.List.Flink = 0LL;
    dword_140388B88 = v6;
    qword_140388B90 = v5 + (BugCheckParameter2 << 12);
    stru_140388B98.WorkerRoutine = (void (__fastcall *)(void *))MiBadMemoryLogger;
    stru_140388B98.Parameter = &dword_140388B80;
    dword_140388B80 = v8;
    ExQueueWorkItem(&stru_140388B98, DelayedWorkQueue);
  }
  return KeZeroPages(BugCheckParameter1, 0x1000uLL);
}
