/*
 * XREFs of MiUnlockDynamicMemoryShared @ 0x1401063F0
 * Callers:
 *     PfpPfnPrioRequest @ 0x1405B0D80 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x1405E72E8 (MiGetPhysicalMemoryRanges.c)
 *     MmRelocatePfnList @ 0x14075693C (MmRelocatePfnList.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 */

char __fastcall MiUnlockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rdi
  char result; // al

  v2 = (signed __int64 *)(a1 + 184);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 184), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  result = KeAbPostRelease((ULONG_PTR)v2);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
