/*
 * XREFs of MiPageNotZero @ 0x140265130
 * Callers:
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1401AE9B0 (KeZeroPages.c)
 */

__int64 __fastcall MiPageNotZero(__m128i *BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  int v4; // r8d
  unsigned int v5; // r14d
  int v6; // r15d
  __m128i *v7; // r9
  ULONG v8; // ebp
  __int64 v9; // rbx

  _InterlockedAdd(&dword_1403CBEB4, 1u);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = BugCheckParameter1;
  if ( BugCheckParameter1 < &BugCheckParameter1[256] )
  {
    while ( 1 )
    {
      if ( v7->m128i_i32[0] )
      {
        if ( ++v4 != 1 )
          goto LABEL_10;
        v5 = (unsigned __int16)v7 & 0xFFF;
        v6 = v7->m128i_i32[0];
        if ( ((v7->m128i_i32[0] - 1) & v7->m128i_i32[0]) != 0 )
          break;
      }
      v7 = (__m128i *)((char *)v7 + 4);
      if ( v7 >= &BugCheckParameter1[256] )
        goto LABEL_8;
    }
    v4 = 2;
LABEL_8:
    if ( v4 == 1 )
      _InterlockedAdd(&dword_1403CBEB0, 1u);
  }
LABEL_10:
  v8 = 299;
  if ( v4 != 1 )
    v8 = 295;
  if ( (MmPageValidationAction & 1) != 0 )
    KeBugCheckEx(v8, (ULONG_PTR)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v9 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(48 * BugCheckParameter2 - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL));
  KeSetEvent(*(PRKEVENT *)(v9 + 312), 0, 0);
  if ( (ULONG_PTR *)v9 != &MiSystemPartition )
    KeSetEvent(qword_1403CE078, 0, 0);
  if ( (MiFlags & 0x30) == 0x20 && !_InterlockedCompareExchange(&dword_1403CBE1C, 1, 0) )
  {
    stru_1403CBE30.List.Flink = 0LL;
    dword_1403CBE20 = v6;
    qword_1403CBE28 = v5 + (BugCheckParameter2 << 12);
    stru_1403CBE30.WorkerRoutine = (void (__fastcall *)(void *))MiBadMemoryLogger;
    stru_1403CBE30.Parameter = &dword_1403CBE18;
    dword_1403CBE18 = v8;
    ExQueueWorkItem(&stru_1403CBE30, DelayedWorkQueue);
  }
  return KeZeroPages(BugCheckParameter1, 0x1000uLL);
}
