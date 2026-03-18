/*
 * XREFs of SetAppStarting @ 0x1C0023F80
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0024008 (xxxInitProcessInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetAppStarting(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) |= 0x40u;
  result = gppiStarting;
  *(_QWORD *)(a1 + 344) = gppiStarting;
  gppiStarting = a1;
  if ( gptmrMaster )
  {
    result = IsSetRITTimerSupported();
    if ( (int)result < 0 )
    {
      *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock = 0LL;
    }
    else
    {
      result = SetRITTimer(
                 *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock,
                 (unsigned int)(gdwHungAppTimeout + 30000),
                 CheckAppStarting,
                 1LL);
      *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock = result;
    }
  }
  return result;
}
