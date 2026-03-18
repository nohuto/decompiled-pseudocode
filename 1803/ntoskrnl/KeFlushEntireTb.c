/*
 * XREFs of KeFlushEntireTb @ 0x14017D5B0
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x1408BB1A4 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     KiPreprocessFlushTb @ 0x140034B20 (KiPreprocessFlushTb.c)
 *     KxFlushEntireTb @ 0x140034BE0 (KxFlushEntireTb.c)
 *     KiFlushAddressSpaceTb @ 0x140159C68 (KiFlushAddressSpaceTb.c)
 *     ExFlushTb @ 0x1402BB738 (ExFlushTb.c)
 */

__int64 KeFlushEntireTb()
{
  __int64 v0; // r8
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  char v3; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int8 v4; // [rsp+58h] [rbp+20h] BYREF

  KiPreprocessFlushTb(1, 3u, 2, &v3, &v4);
  if ( v3 )
  {
    LOBYTE(v0) = 1;
    result = KiFlushAddressSpaceTb(0LL, 0LL, v0, 1);
  }
  else
  {
    result = KxFlushEntireTb(2);
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
