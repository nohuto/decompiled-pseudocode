/*
 * XREFs of ExpDeleteCallback @ 0x140579FA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExpDeleteCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 **v3; // rax
  __int64 *v4; // rbx
  __int64 *v5; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  v3 = *(__int64 ***)(a1 + 48);
  v4 = (__int64 *)(a1 + 40);
  v5 = (__int64 *)*v4;
  if ( *(__int64 **)(*v4 + 8) != v4 || *v3 != v4 )
    __fastfail(3u);
  *v3 = v5;
  v5[1] = (__int64)v3;
  return ExpUnlockCallbackListExclusive((__int64)CurrentThread);
}
