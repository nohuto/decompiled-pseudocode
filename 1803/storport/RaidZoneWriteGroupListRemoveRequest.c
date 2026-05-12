/*
 * XREFs of RaidZoneWriteGroupListRemoveRequest @ 0x1C002D908
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C000A670 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitCompleteRequest @ 0x1C000B0C0 (RaidUnitCompleteRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidZoneWriteGroupListRemoveRequest(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 144), &LockHandle);
  v4 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v5 = (_QWORD *)a2[1], (_QWORD *)*v5 != a2) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  --*(_DWORD *)(a1 + 152);
  ExFreePoolWithTag(a2, 0x525A6152u);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
