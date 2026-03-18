/*
 * XREFs of MiGetCrossPartitionCombineCharges @ 0x140231884
 * Callers:
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x140231350 (MiConvertStandbyToProto.c)
 *     MiIncrementCombinedPte @ 0x140231960 (MiIncrementCombinedPte.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiGetCrossPartitionCharges @ 0x1402376A8 (MiGetCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetCrossPartitionCombineCharges(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  if ( a2 )
  {
    if ( !(unsigned int)MiChargeCommit(a1, 1uLL, 0LL, a4) )
      return 0LL;
    if ( !(unsigned int)MiChargeResident((ULONG_PTR *)a1, 1uLL) )
    {
LABEL_5:
      MiReturnCommit(a1, 1uLL);
      return 0LL;
    }
  }
  if ( (int)MiGetCrossPartitionCharges(a1, 2LL, 1LL, 1LL) < 0 )
  {
    if ( !a2 )
      return 0LL;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6016), 1uLL);
    goto LABEL_5;
  }
  return 1LL;
}
