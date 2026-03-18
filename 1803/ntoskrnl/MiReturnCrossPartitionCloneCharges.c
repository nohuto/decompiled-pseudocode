/*
 * XREFs of MiReturnCrossPartitionCloneCharges @ 0x14026B568
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x1400AD8A4 (MiDecrementCloneBlockReference.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiReferenceCloneProto @ 0x140141EDC (MiReferenceCloneProto.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiReturnCrossPartitionCharges @ 0x14026FC54 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionCloneCharges(__int64 a1)
{
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(1uLL);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), 1uLL);
  return MiReturnCrossPartitionCharges(a1, 6LL, 0LL, 1LL);
}
