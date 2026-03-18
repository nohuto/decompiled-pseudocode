/*
 * XREFs of MiReturnSystemCharges @ 0x1401377CC
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiCleanupPageTablePages @ 0x1400493E0 (MiCleanupPageTablePages.c)
 *     MiGetPageTablePages @ 0x1400716C0 (MiGetPageTablePages.c)
 *     MiDeleteSystemPageTableTail @ 0x140137870 (MiDeleteSystemPageTableTail.c)
 *     MiDeleteSessionPdes @ 0x140155518 (MiDeleteSessionPdes.c)
 *     MiReturnSplitPageCharges @ 0x140186104 (MiReturnSplitPageCharges.c)
 *     MiGetLargePagesForSystemMapping @ 0x14074D840 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnSystemCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  if ( a3 != 2 )
  {
    if ( a3 == 1 || a3 == 11 )
    {
      v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 40), -(__int64)a2);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 48), -(__int64)a2);
      if ( (ULONG_PTR *)a1 == &MiSystemPartition )
        goto LABEL_7;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), a2);
      return;
    }
    v4 = -(__int64)a2;
    if ( a3 == 4 )
    {
      _InterlockedExchangeAdd64(&qword_1403CC680, v4);
      return;
    }
    _InterlockedExchangeAdd64(&qword_1403CC660, v4);
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
LABEL_7:
    MiReturnResidentAvailable(a2);
    return;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), a2);
}
