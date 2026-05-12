/*
 * XREFs of RaidZoneWriteGroupListPendingIoCount @ 0x1C002D890
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C000A670 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitCompleteRequest @ 0x1C000B0C0 (RaidUnitCompleteRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidZoneWriteGroupListPendingIoCount(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  volatile signed __int32 **v3; // rdi
  volatile signed __int32 *v4; // rcx
  signed __int32 v5; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( a2 )
  {
    return (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 56), 0, 0);
  }
  else
  {
    v3 = (volatile signed __int32 **)(a1 + 128);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 144), &LockHandle);
    v4 = *v3;
    while ( v4 != (volatile signed __int32 *)v3 )
    {
      v5 = _InterlockedCompareExchange(v4 + 14, 0, 0);
      v4 = *(volatile signed __int32 **)v4;
      v2 += v5;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return v2;
}
