/*
 * XREFs of RaidRemovePortDriver @ 0x1C00316D0
 * Callers:
 *     RaDeleteDriver @ 0x1C006474C (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidRemovePortDriver(__int64 a1, __int64 a2)
{
  __int64 **v4; // rax
  __int64 *v5; // rbx
  __int64 *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 24), &LockHandle);
  v4 = *(__int64 ***)(a2 + 32);
  v5 = (__int64 *)(a2 + 24);
  v6 = (__int64 *)*v5;
  if ( *(__int64 **)(*v5 + 8) != v5 || *v4 != v5 )
    __fastfail(3u);
  *v4 = v6;
  v6[1] = (__int64)v4;
  --*(_DWORD *)(a1 + 32);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
