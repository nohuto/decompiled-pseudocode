/*
 * XREFs of RaSqmAndEtwCleanup @ 0x1C0067D64
 * Callers:
 *     RaDeleteDriver @ 0x1C0067C8C (RaDeleteDriver.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C0031280 (McGenEventUnregister.c)
 *     StorSqmCleanup @ 0x1C0048AC0 (StorSqmCleanup.c)
 *     StorpUnRegisterTraceLogging @ 0x1C00693F4 (StorpUnRegisterTraceLogging.c)
 */

__int64 __fastcall RaSqmAndEtwCleanup(ULONGLONG *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&g_RaidSQMAndETWRefCount, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    if ( g_RaidSQMInitialized == 1 )
    {
      KeCancelTimer((PKTIMER)&WPP_MAIN_CB.DeviceQueue.32);
      StorSqmCleanup();
      g_RaidSQMInitialized = 0;
    }
    McGenEventUnregister(a1);
    return StorpUnRegisterTraceLogging();
  }
  return result;
}
