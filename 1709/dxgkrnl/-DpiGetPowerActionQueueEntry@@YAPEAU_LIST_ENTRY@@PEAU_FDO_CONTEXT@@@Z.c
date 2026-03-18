/*
 * XREFs of ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x1C00110F4
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0121B80 (DpiPowerArbiterThread.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall DpiGetPowerActionQueueEntry(KSPIN_LOCK *a1)
{
  char *v2; // rbx
  __int64 *v3; // rdi
  __int64 v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 488, &LockHandle);
  v2 = (char *)(a1 + 474);
  v3 = 0LL;
  if ( *(char **)v2 != v2 )
  {
    v3 = *(__int64 **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *v3, *(__int64 **)(*v3 + 8) != v3) )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    *v3 = 0LL;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (struct _LIST_ENTRY *)v3;
}
