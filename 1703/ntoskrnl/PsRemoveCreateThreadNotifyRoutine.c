/*
 * XREFs of PsRemoveCreateThreadNotifyRoutine @ 0x1406E3D90
 * Callers:
 *     <none>
 * Callees:
 *     ExGetCallBackBlockContext @ 0x14008BB84 (ExGetCallBackBlockContext.c)
 *     ExDereferenceCallBackBlock @ 0x14008BC30 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14008BC80 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x14008BD80 (ExGetCallBackBlockRoutine.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x140155B4C (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall PsRemoveCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3);
    v5 = v4;
    if ( v4 )
      break;
LABEL_6:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x40 )
    {
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      return -1073741702;
    }
  }
  if ( (PCREATE_THREAD_NOTIFY_ROUTINE)ExGetCallBackBlockRoutine((__int64)v4) != NotifyRoutine
    || !ExCompareExchangeCallBack((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3, 0LL, (__int64)v5) )
  {
    ExDereferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3, v5);
    goto LABEL_6;
  }
  if ( ExGetCallBackBlockContext((__int64)v5) )
    _InterlockedAdd(&PspCreateThreadNotifyRoutineNonSystemCount, 0xFFFFFFFF);
  else
    _InterlockedAdd(&PspCreateThreadNotifyRoutineCount, 0xFFFFFFFF);
  ExDereferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3, v5);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  ExWaitForRundownProtectionRelease(v5);
  ExFreePoolWithTag(v5, 0);
  return 0;
}
