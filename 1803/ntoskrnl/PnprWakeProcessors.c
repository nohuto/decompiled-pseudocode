/*
 * XREFs of PnprWakeProcessors @ 0x14048431C
 * Callers:
 *     PnprEndMirroring @ 0x140482D80 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x140482E4C (PnprInitiateReplaceOperation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KeResumeClockTimerSafe @ 0x1402408E4 (KeResumeClockTimerSafe.c)
 *     KeRestoreMtrrBroadcast @ 0x14047C5A8 (KeRestoreMtrrBroadcast.c)
 *     PnprGetMillisecondCounter @ 0x140482DFC (PnprGetMillisecondCounter.c)
 */

__int64 PnprWakeProcessors()
{
  int MillisecondCounter; // eax
  __int64 v1; // rcx
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 result; // rax

  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(PnprContext + 20976))(*(_QWORD *)(PnprContext + 20880), 0LL);
    MillisecondCounter = PnprGetMillisecondCounter(0);
    v1 = PnprContext;
    *(_DWORD *)(PnprContext + 21020) = MillisecondCounter;
    *(_DWORD *)(v1 + 200) = 6;
  }
  KeRestoreMtrrBroadcast();
  ((void (__fastcall *)(_QWORD, _QWORD))off_140398790[0])(0LL, 0LL);
  KeResumeClockTimerSafe();
  ((void (__fastcall *)(__int64, _QWORD))off_140398768[0])(2LL, *(_QWORD *)(PnprContext + 20872));
  v2 = PnprGetMillisecondCounter(0);
  v3 = PnprContext;
  *(_QWORD *)(PnprContext + 20992) = 10000 * (v2 - *(_QWORD *)(PnprContext + 20992));
  *(_DWORD *)(v3 + 200) = 7;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 188));
  result = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    return off_1403987C0[0]();
  return result;
}
