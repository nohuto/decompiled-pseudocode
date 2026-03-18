/*
 * XREFs of EtwpFinalizePendingApc @ 0x1402ADFDC
 * Callers:
 *     EtwpCancelPendingStackwalkApcs @ 0x140005FA8 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpCancelStackWalkApc @ 0x1402ADFC0 (EtwpCancelStackWalkApc.c)
 *     EtwpStackWalkApc @ 0x1402AE490 (EtwpStackWalkApc.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006430 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall EtwpFinalizePendingApc(unsigned int *a1, __int64 a2)
{
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)(a2 + 8) + 120LL), (*((_WORD *)a1 + 417) & 7) + 24);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)a1 + 58, (PSLIST_ENTRY)a2);
  _InterlockedDecrement((volatile signed __int32 *)a1 + 240);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 424LL) + 8LL * *a1),
    1u);
}
