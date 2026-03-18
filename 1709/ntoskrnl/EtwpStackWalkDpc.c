/*
 * XREFs of EtwpStackWalkDpc @ 0x14027FED0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpQueueStackWalkApc @ 0x14027FA30 (EtwpQueueStackWalkApc.c)
 */

void __fastcall EtwpStackWalkDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        unsigned int *SystemArgument1,
        PVOID SystemArgument2)
{
  EtwpQueueStackWalkApc(*((_QWORD *)SystemArgument1 + 108), 2u, SystemArgument1, SystemArgument1 + 214);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)SystemArgument1 + 282) + 416LL) + 8LL * *SystemArgument1),
    1u);
  _interlockedbittestandreset((volatile signed __int32 *)SystemArgument1 + 212, 1u);
}
