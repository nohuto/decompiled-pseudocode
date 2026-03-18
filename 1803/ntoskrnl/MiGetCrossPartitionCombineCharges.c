/*
 * XREFs of MiGetCrossPartitionCombineCharges @ 0x14026BCF0
 * Callers:
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiIncrementCombinedPte @ 0x140142678 (MiIncrementCombinedPte.c)
 *     MiConvertStandbyToProto @ 0x1401433FC (MiConvertStandbyToProto.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiGetCrossPartitionCharges @ 0x14026F274 (MiGetCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetCrossPartitionCombineCharges(__int64 a1, int a2)
{
  __int64 v4; // r9

  if ( a2 )
  {
    if ( !(unsigned int)MiChargeCommit(a1, 1uLL, 0) )
      return 0LL;
    if ( !(unsigned int)MiChargeResident((ULONG_PTR *)a1, 1uLL, 0LL, v4) )
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
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), 1uLL);
    goto LABEL_5;
  }
  return 1LL;
}
