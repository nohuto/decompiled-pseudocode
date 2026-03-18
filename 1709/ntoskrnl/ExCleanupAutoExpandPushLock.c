/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x1401144D0
 * Callers:
 *     MiDeletePhysicalProcessPages @ 0x1406E5634 (MiDeletePhysicalProcessPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExpSaAllocatorFree @ 0x1401562B8 (ExpSaAllocatorFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rcx

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
  {
    v2 = (((unsigned int)result & 0xFFFFFFF8) >> 13) & 0x3FFFF;
    _BitScanReverse(&v3, v2);
    CurrentThread = KeGetCurrentThread();
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageGroupDescriptorArray + 8LL * (v3 - 2)) + 8LL * ((1 << v3) ^ v2) + 8)
                   + 16LL);
    --CurrentThread->SpecialApcDisable;
    ExpSaAllocatorFree(v5);
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
