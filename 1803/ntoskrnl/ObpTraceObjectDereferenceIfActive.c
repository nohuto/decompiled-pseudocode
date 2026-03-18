/*
 * XREFs of ObpTraceObjectDereferenceIfActive @ 0x14005BAA0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     ExTimerRundown @ 0x140040D7C (ExTimerRundown.c)
 *     ObFastReplaceObject @ 0x14004B580 (ObFastReplaceObject.c)
 *     ObDereferenceObjectEx @ 0x14005A5F0 (ObDereferenceObjectEx.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     CcDeleteSharedCacheMap @ 0x1400DAF00 (CcDeleteSharedCacheMap.c)
 *     ObFastReferenceObject @ 0x1401051D0 (ObFastReferenceObject.c)
 *     IopDropIrp @ 0x14013FD64 (IopDropIrp.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectDereferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
