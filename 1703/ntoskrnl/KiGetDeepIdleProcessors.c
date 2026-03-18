/*
 * XREFs of KiGetDeepIdleProcessors @ 0x14006D67C
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x14001B6F0 (KeRemoveQueueDpcEx.c)
 *     KeFlushQueuedDpcs @ 0x14006D5B0 (KeFlushQueuedDpcs.c)
 * Callees:
 *     KeComplementAffinityEx @ 0x140044F90 (KeComplementAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x14006D6E4 (PoCopyDeepIdleMask.c)
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
