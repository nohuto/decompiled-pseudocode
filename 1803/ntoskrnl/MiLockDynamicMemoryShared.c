/*
 * XREFs of MiLockDynamicMemoryShared @ 0x140106460
 * Callers:
 *     PfpPfnPrioRequest @ 0x1405B0D80 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x1405E72E8 (MiGetPhysicalMemoryRanges.c)
 *     MmRelocatePfnList @ 0x14075693C (MmRelocatePfnList.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 184, 0LL);
}
