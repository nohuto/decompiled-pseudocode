/*
 * XREFs of CmpEnumerateCallback @ 0x14045E600
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 */

__int64 __fastcall CmpEnumerateCallback(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // rdi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  v3 = *a1;
  if ( *a1 )
  {
    v4 = *a1;
  }
  else
  {
    v3 = &CallbackListHead;
    v4 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v3 = (__int64 *)*v3;
    if ( v3 == &CallbackListHead )
      break;
    if ( *((int *)v3 + 4) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v3 + 4);
      v5 = v3[5];
      *a1 = v3;
      break;
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)v4 + 4) == 0x80000000 )
    {
      _InterlockedOr(v7, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
    }
  }
  return v5;
}
