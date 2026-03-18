/*
 * XREFs of KiGetDeepIdleProcessors @ 0x140005828
 * Callers:
 *     KeFlushQueuedDpcs @ 0x140004DD0 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x140006070 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     PoCopyDeepIdleMask @ 0x140005890 (PoCopyDeepIdleMask.c)
 *     KeAndAffinityEx @ 0x140035310 (KeAndAffinityEx.c)
 *     KeComplementAffinityEx @ 0x1400354B0 (KeComplementAffinityEx.c)
 */

__int64 __fastcall KiGetDeepIdleProcessors(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v6, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  PoCopyDeepIdleMask();
  __writecr8(CurrentIrql);
  KeComplementAffinityEx(a2, a1);
  return KeAndAffinityEx(a2, KeActiveProcessors, a2);
}
