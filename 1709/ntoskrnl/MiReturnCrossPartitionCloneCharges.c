/*
 * XREFs of MiReturnCrossPartitionCloneCharges @ 0x140230230
 * Callers:
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MiDecrementCloneBlockReference @ 0x1400E4E0C (MiDecrementCloneBlockReference.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiReferenceCloneProto @ 0x1400EA030 (MiReferenceCloneProto.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiReturnCrossPartitionCharges @ 0x14023804C (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionCloneCharges(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // r10

  v1 = a1;
  v2 = 1LL;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(1uLL);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6016), 1uLL);
  return MiReturnCrossPartitionCharges(v1, 4LL, 0LL, v2);
}
