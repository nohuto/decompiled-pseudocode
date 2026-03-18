/*
 * XREFs of MiReturnCrossPartitionCombineCharges @ 0x14026BE44
 * Callers:
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiDecrementCombinedPte @ 0x1400AD0F8 (MiDecrementCombinedPte.c)
 *     MiIncrementCombinedPte @ 0x140142678 (MiIncrementCombinedPte.c)
 *     MiConvertStandbyToProto @ 0x1401433FC (MiConvertStandbyToProto.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiReturnCrossPartitionCharges @ 0x14026FC54 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionCombineCharges(__int64 a1, int a2)
{
  if ( a2 )
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), 1uLL);
    MiReturnCommit(a1, 1uLL);
  }
  return MiReturnCrossPartitionCharges(a1, 2LL, 1LL, 1LL);
}
