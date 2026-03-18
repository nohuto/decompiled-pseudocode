/*
 * XREFs of KeFlushEntireTb @ 0x1401590B0
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140810AF8 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     KiFlushViaHypervisor @ 0x1400D9420 (KiFlushViaHypervisor.c)
 *     KxFlushEntireTb @ 0x1401590F4 (KxFlushEntireTb.c)
 *     KiFlushAddressSpaceTb @ 0x1402010D0 (KiFlushAddressSpaceTb.c)
 *     VmFlushTb @ 0x140251988 (VmFlushTb.c)
 *     ExFlushTb @ 0x14025D8F8 (ExFlushTb.c)
 */

__int64 KeFlushEntireTb()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl

  if ( KiFlushViaHypervisor() )
  {
    LOBYTE(v2) = 1;
    LOBYTE(v1) = 1;
    result = KiFlushAddressSpaceTb(0LL, v0, v1, v2);
  }
  else
  {
    result = KxFlushEntireTb(2LL);
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb(0LL, 0LL);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(0LL, 0LL, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
