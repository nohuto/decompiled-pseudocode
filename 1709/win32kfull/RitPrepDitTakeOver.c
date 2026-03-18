/*
 * XREFs of RitPrepDitTakeOver @ 0x1C00FD5A0
 * Callers:
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 * Callees:
 *     ResetPointerDevices @ 0x1C00FD5F4 (ResetPointerDevices.c)
 */

__int64 RitPrepDitTakeOver()
{
  if ( *((_DWORD *)gpMitInfo + 13) )
  {
    SetThreadPriority();
    if ( gptiManipulationThread )
      SetThreadBasePriority(*gptiManipulationThread, 16LL);
  }
  ResetPointerDevices();
  gbPendRecreateTouchInjectionDevices = 1;
  CleanupSensorExplicitly(2LL);
  EtwTraceRitDisEngaged();
  ZwSetEvent(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink, 0LL);
  return 1LL;
}
