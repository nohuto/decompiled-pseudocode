/*
 * XREFs of CmpEnumerateCallback @ 0x140584370
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 */

__int64 __fastcall CmpEnumerateCallback(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  __int64 *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  v4 = &CallbackListHead;
  if ( *a1 )
    v4 = *a1;
  v5 = (unsigned __int64)*a1 & -(__int64)(*a1 != 0LL);
  v6 = *v4;
  v7 = 0LL;
  while ( (__int64 *)v6 != &CallbackListHead )
  {
    if ( *(int *)(v6 + 16) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 16));
      v7 = *(_QWORD *)(v6 + 40);
      *a1 = (__int64 *)v6;
      break;
    }
    v6 = *(_QWORD *)v6;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL, (__int64)&CallbackListHead, v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5 )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(v5 + 16)) == 0x80000000 )
    {
      _InterlockedOr(v9, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
    }
  }
  return v7;
}
