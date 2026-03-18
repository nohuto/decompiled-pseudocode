/*
 * XREFs of MiReturnNonPagedPoolCharges @ 0x1400C01C4
 * Callers:
 *     MiFindNonPagedPoolPages @ 0x140089100 (MiFindNonPagedPoolPages.c)
 *     MiReturnPhysicalPoolPages @ 0x1400C0230 (MiReturnPhysicalPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1400F3C70 (MiReturnNonPagedPoolVa.c)
 *     MiExpandNonPagedPool @ 0x1400F5408 (MiExpandNonPagedPool.c)
 *     MmFreeIndependentPages @ 0x1405D59B0 (MmFreeIndependentPages.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnNonPagedPoolCharges(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v4; // rax

  if ( qword_14038B9E8 )
  {
    MiReturnResidentAvailable(*a1);
    MiReturnCommit((__int64)&MiSystemPartition, a1[3] - a1[1]);
    v4 = -(__int64)a1[3];
    if ( a2 )
      _InterlockedExchangeAdd64(&qword_1403893D0, v4);
    else
      _InterlockedExchangeAdd64(&qword_1403893C8, v4);
  }
}
