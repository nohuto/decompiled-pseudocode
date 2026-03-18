/*
 * XREFs of KeFlushEntireTb @ 0x140143A40
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140839610 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     KiFlushViaHypervisor @ 0x140059270 (KiFlushViaHypervisor.c)
 *     KiFlushAddressSpaceTb @ 0x1401410A4 (KiFlushAddressSpaceTb.c)
 *     KxFlushEntireTb @ 0x140143A74 (KxFlushEntireTb.c)
 *     ExFlushTb @ 0x140287438 (ExFlushTb.c)
 */

__int64 KeFlushEntireTb()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl

  if ( KiFlushViaHypervisor() )
  {
    LOBYTE(v1) = 1;
    result = KiFlushAddressSpaceTb(0LL, v0, v1, 1);
  }
  else
  {
    result = KxFlushEntireTb(2LL);
  }
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(0LL, 0LL, 3LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
