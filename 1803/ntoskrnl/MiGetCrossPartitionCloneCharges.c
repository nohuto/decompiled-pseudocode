/*
 * XREFs of MiGetCrossPartitionCloneCharges @ 0x14026AE50
 * Callers:
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiReferenceCloneProto @ 0x140141EDC (MiReferenceCloneProto.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiGetCrossPartitionCharges @ 0x14026F274 (MiGetCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetCrossPartitionCloneCharges(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)a1, 1uLL, 0LL, a4) )
    return 0LL;
  if ( (int)MiGetCrossPartitionCharges(a1, 6LL, 0LL, 1LL) < 0 )
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), 1uLL);
    return 0LL;
  }
  return 1LL;
}
