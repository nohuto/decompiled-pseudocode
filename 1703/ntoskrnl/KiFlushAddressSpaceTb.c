/*
 * XREFs of KiFlushAddressSpaceTb @ 0x1402010D0
 * Callers:
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x1401590B0 (KeFlushEntireTb.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x14000D8C4 (KxSetTimeStampBusy.c)
 *     HvlFlushAddressSpaceTb @ 0x1401EB808 (HvlFlushAddressSpaceTb.c)
 */

__int64 __fastcall KiFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax

  if ( a1 || !a4 )
    return HvlFlushAddressSpaceTb();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
  {
    HvlFlushAddressSpaceTb();
    _InterlockedIncrement(&KiTbFlushTimeStamp);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
