/*
 * XREFs of MiGetCrossPartitionCloneCharges @ 0x1402301C0
 * Callers:
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiReferenceCloneProto @ 0x1400EA030 (MiReferenceCloneProto.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiGetCrossPartitionCharges @ 0x1402376A8 (MiGetCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetCrossPartitionCloneCharges(__int64 a1)
{
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)a1, 1uLL) )
    return 0LL;
  if ( (int)MiGetCrossPartitionCharges(a1, 4LL, 0LL, 1LL) < 0 )
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6016), 1uLL);
    return 0LL;
  }
  return 1LL;
}
