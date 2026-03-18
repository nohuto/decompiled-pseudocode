/*
 * XREFs of VidSchIsSyncObjectSignaled @ 0x1C0029FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsSyncObjectSignaled(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v4; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( a1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 1880LL), &LockHandle);
    if ( *(_DWORD *)(a1 + 40) == 2 )
    {
      if ( *(_BYTE *)(a1 + 27) )
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL);
      else
        v6 = *(_QWORD *)(a1 + 56);
      if ( *(_BYTE *)(a1 + 27) )
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 32LL);
      else
        v7 = *(_QWORD *)(a1 + 64);
      if ( v6 <= v7 )
        v2 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return v2;
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v4);
    return 0;
  }
}
