/*
 * XREFs of ExpCleanupAutoExpandPushLock @ 0x14014BFE4
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x14014BFC0 (ExFreeAutoExpandPushLock.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExpSaAllocatorFree @ 0x1401562B8 (ExpSaAllocatorFree.c)
 */

__int64 __fastcall ExpCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // eax
  unsigned int v3; // ecx
  __int64 v4; // rdx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rcx

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
  {
    v2 = (((unsigned int)result & 0xFFFFFFF8) >> 13) & 0x3FFFF;
    _BitScanReverse(&v3, v2);
    v4 = v2 ^ (1 << v3);
    CurrentThread = KeGetCurrentThread();
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageGroupDescriptorArray + 8LL * (v3 - 2)) + 8 * v4 + 8) + 16LL);
    --CurrentThread->SpecialApcDisable;
    ExpSaAllocatorFree(v6);
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
