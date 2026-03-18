/*
 * XREFs of PnprWakeProcessors @ 0x14041876C
 * Callers:
 *     PnprEndMirroring @ 0x1404171C0 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x140417290 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KeResumeClockTimerSafe @ 0x1401FD334 (KeResumeClockTimerSafe.c)
 *     KeRestoreMtrrBroadcast @ 0x140412370 (KeRestoreMtrrBroadcast.c)
 *     PnprGetMillisecondCounter @ 0x14041723C (PnprGetMillisecondCounter.c)
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
    (*(void (__fastcall **)(_QWORD, _QWORD))(PnprContext + 10736))(*(_QWORD *)(PnprContext + 10640), 0LL);
    MillisecondCounter = PnprGetMillisecondCounter(0);
    v1 = PnprContext;
    *(_DWORD *)(PnprContext + 10780) = MillisecondCounter;
    *(_DWORD *)(v1 + 200) = 6;
  }
  KeRestoreMtrrBroadcast();
  ((void (__fastcall *)(_QWORD, _QWORD))off_14033B3C0[0])(0LL, 0LL);
  KeResumeClockTimerSafe();
  ((void (__fastcall *)(__int64, _QWORD))off_14033B398[0])(2LL, *(_QWORD *)(PnprContext + 10632));
  v2 = PnprGetMillisecondCounter(0);
  v3 = PnprContext;
  *(_QWORD *)(PnprContext + 10752) = 10000 * (v2 - *(_QWORD *)(PnprContext + 10752));
  *(_DWORD *)(v3 + 200) = 7;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 188));
  result = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    return off_14033B3F0[0]();
  return result;
}
