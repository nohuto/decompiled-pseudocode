/*
 * XREFs of RaidZoneWriteGroupListPurge @ 0x1C0031ED4
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 *     RaidUnitCancelPendingRequests @ 0x1C003E134 (RaidUnitCancelPendingRequests.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidZoneWriteGroupListPurge(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rdi
  __int64 v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (__int64 *)(a1 + 128);
  if ( (__int64 *)*v1 != v1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 144), &LockHandle);
    if ( v1 )
    {
      do
      {
        v3 = (__int64 *)*v1;
        if ( *(__int64 **)(*v1 + 8) != v1 || (v4 = *v3, *(__int64 **)(*v3 + 8) != v3) )
          __fastfail(3u);
        *v1 = v4;
        *(_QWORD *)(v4 + 8) = v1;
        --*(_DWORD *)(a1 + 152);
        ExFreePoolWithTag(v3, 0x525A6152u);
      }
      while ( v3 != v1 );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
