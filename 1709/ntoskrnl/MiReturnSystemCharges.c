/*
 * XREFs of MiReturnSystemCharges @ 0x1400C3258
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     MiCleanupPageTablePages @ 0x1400C3F04 (MiCleanupPageTablePages.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiReturnSplitPageCharges @ 0x14013907C (MiReturnSplitPageCharges.c)
 *     MiDeleteSessionPdes @ 0x14021989C (MiDeleteSessionPdes.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnSystemCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rdx

  if ( a3 != 2 )
  {
    if ( a3 == 1 || a3 == 11 )
    {
      v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 40), -(__int64)a2);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 48), -(__int64)a2);
      if ( (ULONG_PTR *)a1 == &MiSystemPartition )
        goto LABEL_6;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6016), a2);
      return;
    }
    _InterlockedExchangeAdd64(&qword_1403893E8, -(__int64)a2);
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
LABEL_6:
    MiReturnResidentAvailable(a2);
    return;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6016), a2);
}
