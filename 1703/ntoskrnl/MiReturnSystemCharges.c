/*
 * XREFs of MiReturnSystemCharges @ 0x140082C30
 * Callers:
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiCleanupPageTablePages @ 0x14010AD58 (MiCleanupPageTablePages.c)
 *     MiDeleteSessionPdes @ 0x14013BC30 (MiDeleteSessionPdes.c)
 *     MiReturnSplitPageCharges @ 0x1401677FC (MiReturnSplitPageCharges.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *__fastcall MiReturnSystemCharges(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  ULONG_PTR *result; // rax

  v3 = a2;
  if ( (_DWORD)a3 != 2 )
  {
    if ( (_DWORD)a3 == 1 || (_DWORD)a3 == 11 )
    {
      a2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), -(__int64)v3);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 48), -(__int64)v3);
      result = &MiSystemPartition;
      if ( (ULONG_PTR *)a1 == &MiSystemPartition )
        return (ULONG_PTR *)MiReturnResidentAvailable(v3, a2, a3);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5824), v3);
      return result;
    }
    _InterlockedExchangeAdd64(&qword_14036D128, -(__int64)a2);
  }
  result = &MiSystemPartition;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    return (ULONG_PTR *)MiReturnResidentAvailable(v3, a2, a3);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5824), a2);
  return result;
}
