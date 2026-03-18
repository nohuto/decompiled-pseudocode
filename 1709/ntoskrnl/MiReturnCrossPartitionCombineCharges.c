/*
 * XREFs of MiReturnCrossPartitionCombineCharges @ 0x140231B2C
 * Callers:
 *     MiDecrementCombinedPte @ 0x1400E5700 (MiDecrementCombinedPte.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x140231350 (MiConvertStandbyToProto.c)
 *     MiIncrementCombinedPte @ 0x140231960 (MiIncrementCombinedPte.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiReturnCrossPartitionCharges @ 0x14023804C (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionCombineCharges(__int64 a1, int a2)
{
  if ( a2 )
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6016), 1uLL);
    MiReturnCommit(a1, 1uLL);
  }
  return MiReturnCrossPartitionCharges(a1, 2LL, 1LL, 1LL);
}
