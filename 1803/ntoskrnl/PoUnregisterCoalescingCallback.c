/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x140761490
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     ExDereferenceCallBackBlock @ 0x14003E9E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14003EA30 (ExReferenceCallBackBlock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExCompareExchangeCallBack @ 0x1401720FC (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PoUnregisterCoalescingCallback(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v3; // rdi
  struct _EX_RUNDOWN_REF *v4; // rbp
  char v5; // bl
  __int64 v6; // r8
  _QWORD *v7; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 + 8;
  v4 = ExReferenceCallBackBlock(a1 + 8);
  v5 = ExCompareExchangeCallBack(v3, 0LL, (__int64)v4);
  ExDereferenceCallBackBlock(v3, v4);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v5 )
  {
    ExWaitForRundownProtectionRelease(v4);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopCoalRegistrationListLock);
    v6 = a1[6];
    if ( *(_QWORD **)(v6 + 8) != a1 + 6 || (v7 = (_QWORD *)a1[7], (_QWORD *)*v7 != a1 + 6) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    PopReleaseRwLock((ULONG_PTR)&PopCoalRegistrationListLock);
    ExFreePoolWithTag(v4, 0);
  }
}
