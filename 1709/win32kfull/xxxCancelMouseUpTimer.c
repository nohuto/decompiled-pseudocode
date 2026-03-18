/*
 * XREFs of xxxCancelMouseUpTimer @ 0x1C01B4760
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxResolvePendingUp@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B3980 (-xxxResolvePendingUp@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxDoTouchpadProcessing @ 0x1C01B47C0 (xxxDoTouchpadProcessing.c)
 * Callees:
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     xxxSendMouseUpIfPending @ 0x1C01B4C2C (xxxSendMouseUpIfPending.c)
 */

__int64 __fastcall xxxCancelMouseUpTimer(int a1)
{
  __int64 result; // rax

  if ( guMouseUpPending )
  {
    if ( gidTapTimer )
    {
      result = FindTimer(0LL, gidTapTimer, 4u, 1, 0LL);
      gidTapTimer = 0LL;
    }
    if ( a1 )
      return xxxSendMouseUpIfPending(&guMouseUpPending, gqwTimeLastTap);
  }
  return result;
}
