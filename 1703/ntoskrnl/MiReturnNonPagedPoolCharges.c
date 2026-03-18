/*
 * XREFs of MiReturnNonPagedPoolCharges @ 0x140126068
 * Callers:
 *     MiFindNonPagedPoolPages @ 0x14010E930 (MiFindNonPagedPoolPages.c)
 *     MiReturnPhysicalPoolPages @ 0x140125E80 (MiReturnPhysicalPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1401260D0 (MiReturnNonPagedPoolVa.c)
 *     MiExpandNonPagedPool @ 0x140126E74 (MiExpandNonPagedPool.c)
 *     MmFreeIndependentPages @ 0x14056B860 (MmFreeIndependentPages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 */

void __fastcall MiReturnNonPagedPoolCharges(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v4; // rax

  if ( qword_140381A68 )
  {
    MiReturnResidentAvailable(*a1);
    MiReturnCommit((__int64)&MiSystemPartition, a1[3] - a1[1]);
    v4 = -(__int64)a1[3];
    if ( a2 )
      _InterlockedExchangeAdd64(&qword_14036D110, v4);
    else
      _InterlockedExchangeAdd64(&qword_14036D108, v4);
  }
}
