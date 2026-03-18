/*
 * XREFs of MiReturnPoolCharges @ 0x140134F8C
 * Callers:
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MmFreeIndependentPages @ 0x1400AD1B0 (MmFreeIndependentPages.c)
 *     MiExpandNonPagedPool @ 0x1400BE8FC (MiExpandNonPagedPool.c)
 *     MiGetPoolPages @ 0x1400F0860 (MiGetPoolPages.c)
 *     MiClearNonPagedPtes @ 0x1401354A0 (MiClearNonPagedPtes.c)
 *     MiDecommitLargePoolVa @ 0x1401361A0 (MiDecommitLargePoolVa.c)
 *     MiReturnPhysicalPoolPages @ 0x14017039C (MiReturnPhysicalPoolPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnPoolCharges(_QWORD *a1, __int64 a2)
{
  int v2; // edi
  unsigned __int64 v4; // rax

  v2 = a2;
  if ( qword_1403CFCA8 )
  {
    MiReturnResidentAvailable(*a1, a2);
    MiReturnCommit((__int64)&MiSystemPartition, a1[3] - a1[1]);
    v4 = -a1[3];
    if ( v2 )
      _InterlockedExchangeAdd64(&qword_1403CC648, v4);
    else
      _InterlockedExchangeAdd64(&qword_1403CC640, v4);
  }
}
