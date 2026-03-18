/*
 * XREFs of xxxSendMouseUpIfPending @ 0x1C01B4C2C
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01B1800 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     xxxCancelMouseUpTimer @ 0x1C01B4760 (xxxCancelMouseUpTimer.c)
 * Callees:
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z @ 0x1C01AEF48 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z.c)
 */

__int64 __fastcall xxxSendMouseUpIfPending(int *a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0;
    if ( gdwInAtomicOperation )
    {
      a1 = (int *)gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(a1, a2);
    QueuePTPMouseEvent(0LL, *(struct tagPOINT *)gptCursorAsync, v2, a2);
    return EnterCrit(0LL, 1LL);
  }
  return result;
}
