/*
 * XREFs of KiFlushAddressSpaceTb @ 0x140159C68
 * Callers:
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x14017D5B0 (KeFlushEntireTb.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x1400BAA80 (KxSetTimeStampBusy.c)
 *     HvlFlushAddressSpaceTb @ 0x140159CD8 (HvlFlushAddressSpaceTb.c)
 */

__int64 __fastcall KiFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // bl
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // r8
  __int64 result; // rax

  v4 = a3;
  if ( a1 || a2 || !a4 )
    return HvlFlushAddressSpaceTb(a1, a2, a3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
  {
    LOBYTE(v6) = v4;
    HvlFlushAddressSpaceTb(0LL, 0LL, v6);
    _InterlockedIncrement(&KiTbFlushTimeStamp);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
