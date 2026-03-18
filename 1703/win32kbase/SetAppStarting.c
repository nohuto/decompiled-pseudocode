/*
 * XREFs of SetAppStarting @ 0x1C0051110
 * Callers:
 *     xxxInitProcessInfo @ 0x1C005038C (xxxInitProcessInfo.c)
 * Callees:
 *     <none>
 */

struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C __fastcall SetAppStarting(
        __int64 a1)
{
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C result; // rax

  *(_DWORD *)(a1 + 12) |= 0x40u;
  result = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)gppiStarting;
  *(_QWORD *)(a1 + 336) = gppiStarting;
  gppiStarting = a1;
  if ( gptmrMaster )
  {
    result = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)IsSetRITTimerSupported();
    if ( *(_DWORD *)&result < 0 )
    {
      WPP_MAIN_CB.DeviceQueue.1 = 0LL;
    }
    else
    {
      result = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)SetRITTimer(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1, (unsigned int)(gdwHungAppTimeout + 30000), CheckAppStarting, 1LL);
      WPP_MAIN_CB.DeviceQueue.1 = result;
    }
  }
  return result;
}
