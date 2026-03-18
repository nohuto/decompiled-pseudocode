/*
 * XREFs of InitQMiPTrace @ 0x1C0117600
 * Callers:
 *     ?InitPostMortemLogging@@YAXXZ @ 0x1C0117570 (-InitPostMortemLogging@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 InitQMiPTrace()
{
  __int64 result; // rax
  PDRIVER_CONTROL DeviceRoutine; // rcx

  result = (unsigned int)gdwPostMortemLogging;
  if ( (gdwPostMortemLogging & 1) != 0 )
  {
    result = gSessionId;
    if ( gSessionId != gServiceSessionId )
    {
      result = Win32AllocPoolZInit(86024LL, 1903260501LL);
      WPP_MAIN_CB.Queue.Wcb.DeviceContext = (PVOID)result;
      if ( result )
      {
        WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)Win32AllocPoolZInit(86024LL, 1903260501LL);
        DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
        if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
        {
          result = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
          *((_DWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 1) = 512;
          *((_DWORD *)DeviceRoutine + 1) = 512;
          return result;
        }
        result = Win32FreePool(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
        WPP_MAIN_CB.Queue.Wcb.DeviceContext = 0LL;
      }
      gdwPostMortemLogging &= ~1u;
    }
  }
  return result;
}
