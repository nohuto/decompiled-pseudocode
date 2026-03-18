/*
 * XREFs of ExpDeleteCallback @ 0x1405EEEE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExpUnlockCallbackListExclusive @ 0x14016D8AC (ExpUnlockCallbackListExclusive.c)
 */

__int64 __fastcall ExpDeleteCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  v5 = (__int64 *)(a1 + 40);
  v6 = *v5;
  if ( *(__int64 **)(*v5 + 8) != v5 || (v7 = (__int64 *)v5[1], (__int64 *)*v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  return ExpUnlockCallbackListExclusive((__int64)CurrentThread, v6, v3, v4);
}
