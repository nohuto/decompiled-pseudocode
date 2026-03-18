/*
 * XREFs of EtwpFinalizePendingApc @ 0x14027F99C
 * Callers:
 *     EtwpCancelPendingStackwalkApcs @ 0x140129264 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpCancelStackWalkApc @ 0x14027F980 (EtwpCancelStackWalkApc.c)
 *     EtwpStackWalkApc @ 0x14027FE50 (EtwpStackWalkApc.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall EtwpFinalizePendingApc(unsigned int *a1, __int64 a2)
{
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)(a2 + 8) + 120LL), (*((_WORD *)a1 + 417) & 7) + 24);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)a1 + 59, (PSLIST_ENTRY)a2);
  _InterlockedDecrement((volatile signed __int32 *)a1 + 528);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 282) + 416LL) + 8LL * *a1),
    1u);
}
