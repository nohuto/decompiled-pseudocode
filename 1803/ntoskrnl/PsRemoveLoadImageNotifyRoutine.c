/*
 * XREFs of PsRemoveLoadImageNotifyRoutine @ 0x14077E200
 * Callers:
 *     EtwpCoverageSamplerStop @ 0x1407B8748 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x14003E9E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14003EA30 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x14003EAF0 (ExGetCallBackBlockRoutine.c)
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExCompareExchangeCallBack @ 0x1401720FC (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall PsRemoveLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
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
    v4 = ExReferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3);
    v5 = v4;
    if ( v4 )
      break;
LABEL_6:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x40 )
    {
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return -1073741702;
    }
  }
  if ( (PLOAD_IMAGE_NOTIFY_ROUTINE)ExGetCallBackBlockRoutine((__int64)v4) != NotifyRoutine
    || !ExCompareExchangeCallBack((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3, 0LL, (__int64)v5) )
  {
    ExDereferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3, v5);
    goto LABEL_6;
  }
  _InterlockedAdd(&PspLoadImageNotifyRoutineCount, 0xFFFFFFFF);
  ExDereferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3, v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  ExWaitForRundownProtectionRelease(v5);
  ExFreePoolWithTag(v5, 0);
  return 0;
}
