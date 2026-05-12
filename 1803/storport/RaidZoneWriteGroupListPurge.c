/*
 * XREFs of RaidZoneWriteGroupListPurge @ 0x1C0015DC8
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000B0C0 (RaidUnitCompleteRequest.c)
 *     RaidUnitCancelPendingRequests @ 0x1C0015D84 (RaidUnitCancelPendingRequests.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidZoneWriteGroupListPurge(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rax
  __int64 v4; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (__int64 *)(a1 + 128);
  if ( (__int64 *)*v1 != v1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 144), &LockHandle);
    v3 = (__int64 *)*v1;
    if ( *(__int64 **)(*v1 + 8) != v1 || (v4 = *v3, *(__int64 **)(*v3 + 8) != v3) )
      __fastfail(3u);
    while ( 1 )
    {
      *v1 = v4;
      *(_QWORD *)(v4 + 8) = v1;
      if ( v3 == v1 )
        break;
      --*(_DWORD *)(a1 + 152);
      ExFreePoolWithTag(v3, 0x525A6152u);
      v3 = (__int64 *)*v1;
      if ( *(__int64 **)(*v1 + 8) == v1 )
      {
        v4 = *v3;
        if ( *(__int64 **)(*v3 + 8) == v3 )
          continue;
      }
      __fastfail(3u);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
