/*
 * XREFs of RitPrepDitTakeOver @ 0x1C0109A88
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 * Callees:
 *     vRemoveAndCleanupRimClient @ 0x1C0109B10 (vRemoveAndCleanupRimClient.c)
 *     ResetPointerDevices @ 0x1C0109C28 (ResetPointerDevices.c)
 */

__int64 RitPrepDitTakeOver()
{
  _DWORD *v0; // rax

  v0 = gpMitInfo;
  if ( (gdwMitConfig & 4) == 0 )
    v0 = (_DWORD *)gpDitInfo;
  if ( !v0[13] )
  {
    if ( (gdwMitConfig & 4) != 0 )
      SetThreadPriority();
    else
      SetThreadBasePriority(*(_QWORD *)gptiDit, 16LL);
    if ( gptiManipulationThread )
      SetThreadBasePriority(*gptiManipulationThread, 16LL);
  }
  ResetPointerDevices();
  vRemoveAndCleanupRimClient();
  EtwTraceRitDisEngaged();
  ZwSetEvent(ghDITRITEvent, 0LL);
  return 1LL;
}
