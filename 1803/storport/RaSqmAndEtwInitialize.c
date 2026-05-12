/*
 * XREFs of RaSqmAndEtwInitialize @ 0x1C006591C
 * Callers:
 *     RaInitializeDriver @ 0x1C0065750 (RaInitializeDriver.c)
 * Callees:
 *     McGenEventRegister @ 0x1C002CC3C (McGenEventRegister.c)
 *     StorSqmInitialize @ 0x1C00496A8 (StorSqmInitialize.c)
 *     StorpRegisterTraceLogging @ 0x1C00675A4 (StorpRegisterTraceLogging.c)
 */

__int64 RaSqmAndEtwInitialize()
{
  __int64 result; // rax
  ETWENABLECALLBACK *v1; // rdx
  const GUID *v2; // rcx
  void *v3; // r8
  ULONGLONG *v4; // r9

  if ( MEMORY[0xFFFFF780000003C6] )
    UseQPCTime = 1;
  result = (unsigned int)_InterlockedIncrement(&g_RaidSQMAndETWRefCount);
  if ( (_DWORD)result == 1 )
  {
    if ( (int)StorSqmInitialize() >= 0 )
    {
      g_RaidSQMInitialized = 1;
      KeInitializeTimer((PKTIMER)&WPP_MAIN_CB.DeviceQueue.32);
      KeInitializeDpc((PRKDPC)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, (PKDEFERRED_ROUTINE)RaSqmTimerDpc, 0LL);
      KeSetCoalescableTimer(
        (PKTIMER)&WPP_MAIN_CB.DeviceQueue.32,
        (LARGE_INTEGER)-3000000000LL,
        0,
        0xEA60u,
        (PKDPC)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    }
    McGenEventRegister(v2, v1, v3, v4);
    return StorpRegisterTraceLogging();
  }
  return result;
}
