/*
 * XREFs of VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x1C0028350
 * Callers:
 *     VidSchiResumeFlipQueues @ 0x1C00B3930 (VidSchiResumeFlipQueues.c)
 *     VidSchiSuspendFlipQueues @ 0x1C00B3F4C (VidSchiSuspendFlipQueues.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiMarkFlipQueuesRunningStateOnPresentInfo(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  _QWORD *v10; // rax
  int v11; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
  if ( a3 )
  {
    v9 = *(_DWORD *)(a2 + 56808);
    if ( !v9 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
      v10[7] = a3;
      v10[3] = 281LL;
      v10[4] = 4096LL;
      v10[5] = a1;
      v10[6] = a2;
      WdLogEvent5_WdCriticalError(v10);
      __debugbreak();
    }
    v11 = v9 - 1;
    *(_DWORD *)(a2 + 56808) = v11;
    if ( !v11 )
      *(_BYTE *)(a2 + 56804) = 1;
  }
  else
  {
    ++*(_DWORD *)(a2 + 56808);
    *(_BYTE *)(a2 + 56804) = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
