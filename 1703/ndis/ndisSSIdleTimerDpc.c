/*
 * XREFs of ndisSSIdleTimerDpc @ 0x1C006F2F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001D998 (ndisScheduleWorkItemInternal.c)
 */

void __fastcall ndisSSIdleTimerDpc(
        PVOID SystemSpecific1,
        _QWORD *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  __int64 v4; // rbx

  v4 = FunctionContext[560];
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v4);
  if ( !*(_QWORD *)(v4 + 508)
    && !*(_DWORD *)(v4 + 516)
    && !*(_DWORD *)(v4 + 528)
    && !*(_DWORD *)(v4 + 532)
    && !*(_DWORD *)(v4 + 520)
    && !*(_DWORD *)(v4 + 524)
    && !*(_DWORD *)(v4 + 576)
    && ++*(_DWORD *)(v4 + 144) > 3u
    && (*(_DWORD *)(v4 + 504) & 2) == 0
    && ndisReferenceMiniport((__int64)FunctionContext, 0x14u) )
  {
    *(_DWORD *)(v4 + 504) |= 2u;
    KeClearEvent((PRKEVENT)(v4 + 152));
    ndisScheduleWorkItemInternal(v4 + 296);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v4);
}
