/*
 * XREFs of xxxCancelMouseUpTimer @ 0x1C01B1358
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01AF180 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxResolvePendingUp@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B05A0 (-xxxResolvePendingUp@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxDoTouchpadProcessing @ 0x1C01B13B8 (xxxDoTouchpadProcessing.c)
 * Callees:
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     xxxSendMouseUpIfPending @ 0x1C01B19D8 (xxxSendMouseUpIfPending.c)
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
