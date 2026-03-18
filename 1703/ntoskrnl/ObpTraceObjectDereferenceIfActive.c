/*
 * XREFs of ObpTraceObjectDereferenceIfActive @ 0x140049B60
 * Callers:
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     IopDropIrp @ 0x140011708 (IopDropIrp.c)
 *     ObDereferenceObjectEx @ 0x140024B3C (ObDereferenceObjectEx.c)
 *     NtCancelTimer @ 0x14004AB00 (NtCancelTimer.c)
 *     ExTimerRundown @ 0x14004E2AC (ExTimerRundown.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     ObFastReplaceObject @ 0x14011AE74 (ObFastReplaceObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ObpTraceObjectDereferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
