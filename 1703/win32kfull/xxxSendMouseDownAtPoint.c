/*
 * XREFs of xxxSendMouseDownAtPoint @ 0x1C01B1910
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01AE4BC (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     SetRITTimer @ 0x1C00B22B0 (SetRITTimer.c)
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z @ 0x1C01ABB48 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z.c)
 */

__int64 __fastcall xxxSendMouseDownAtPoint(__int64 a1, __int64 a2, unsigned __int64 a3, struct tagPOINT a4)
{
  __int64 result; // rax

  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, a2, a3, gdwInAtomicOperation);
  QueuePTPMouseEvent(0LL, a4, 2, a2);
  EnterCrit(0LL, 1LL);
  result = SetRITTimer(gidTapTimer, gTPThresholds[20], (int)xxxResolvePendingUp, 1);
  gidTapTimer = result;
  guMouseUpPending = 4;
  gqwTimeLastTap = a3;
  return result;
}
