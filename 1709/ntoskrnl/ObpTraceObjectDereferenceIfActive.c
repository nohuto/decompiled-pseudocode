/*
 * XREFs of ObpTraceObjectDereferenceIfActive @ 0x140067BA8
 * Callers:
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     ObFastReplaceObject @ 0x14001FFA8 (ObFastReplaceObject.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     ObDereferenceObjectEx @ 0x140067B38 (ObDereferenceObjectEx.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     ExTimerRundown @ 0x1400A9724 (ExTimerRundown.c)
 *     IopDropIrp @ 0x1400DD9D0 (IopDropIrp.c)
 *     NtCancelTimer @ 0x1400E1574 (NtCancelTimer.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectDereferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
