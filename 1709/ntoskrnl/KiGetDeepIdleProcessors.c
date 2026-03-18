/*
 * XREFs of KiGetDeepIdleProcessors @ 0x1400DE17C
 * Callers:
 *     KeFlushQueuedDpcs @ 0x1400DE0B0 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x140129650 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     KeComplementAffinityEx @ 0x14008CC00 (KeComplementAffinityEx.c)
 *     KeAndAffinityEx @ 0x14008CC70 (KeAndAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1400DE1E4 (PoCopyDeepIdleMask.c)
 */

__int64 __fastcall KiGetDeepIdleProcessors(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v6, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  PoCopyDeepIdleMask();
  __writecr8(CurrentIrql);
  KeComplementAffinityEx((__int64)a2, a1);
  return KeAndAffinityEx(a2, (unsigned __int16 *)KeActiveProcessors, a2);
}
