/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x1406FA000
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReferenceCallBackBlock @ 0x1400A5550 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1400A5610 (ExDereferenceCallBackBlock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x14014990C (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PoUnregisterCoalescingCallback(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  signed __int64 *v6; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  do
  {
    v4 = ExReferenceCallBackBlock(&PopCoalescingCallbackRoutine[v3]);
    v5 = v4;
    if ( v4 )
    {
      v6 = &PopCoalescingCallbackRoutine[v3];
      if ( v4 == a1 )
      {
        if ( ExCompareExchangeCallBack(v6, 0LL, (__int64)v4) )
        {
          _InterlockedAdd(&PopCoalescingCallbackRoutineCount, 0xFFFFFFFF);
          ExDereferenceCallBackBlock(&PopCoalescingCallbackRoutine[v3], v5);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          ExWaitForRundownProtectionRelease(v5);
          ExFreePoolWithTag(v5, 0);
          return;
        }
      }
      else
      {
        ExDereferenceCallBackBlock(v6, v4);
      }
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)v3 < 0x20 );
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
