/*
 * XREFs of VidSchiRunningDeviceAllowsLongRunningPackets @ 0x1C00277C4
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C006B7E0 (VidSchiCheckNodeTimeout.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiRunningDeviceAllowsLongRunningPackets(__int64 a1)
{
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 2776) )
    return 0;
  v3 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 24) + 1880LL), &LockHandle);
  v4 = *(unsigned int *)(a1 + 1552);
  if ( (_DWORD)v4 != *(_DWORD *)(a1 + 1544) )
  {
    v5 = *(_QWORD *)(a1 + 8 * v4 + 1560);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 104);
      if ( *(_BYTE *)(v6 + 164)
        || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 160), 0, 0)
        || (*(_DWORD *)(v6 + 48) & 4) == 0 && (*(_DWORD *)(v5 + 112) & 0x20) == 0 )
      {
        v3 = 0;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
