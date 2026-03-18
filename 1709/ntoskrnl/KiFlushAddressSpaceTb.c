/*
 * XREFs of KiFlushAddressSpaceTb @ 0x1401410A4
 * Callers:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x140143A40 (KeFlushEntireTb.c)
 * Callees:
 *     HvlFlushAddressSpaceTb @ 0x14014110C (HvlFlushAddressSpaceTb.c)
 *     KxSetTimeStampBusy @ 0x140144260 (KxSetTimeStampBusy.c)
 */

__int64 __fastcall KiFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rdx
  __int64 v8; // r8

  v4 = a3;
  if ( a1 || !a4 )
    return HvlFlushAddressSpaceTb(a1, a2, a3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
  {
    LOBYTE(v8) = v4;
    HvlFlushAddressSpaceTb(0LL, v7, v8);
    _InterlockedIncrement(&KiTbFlushTimeStamp);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
