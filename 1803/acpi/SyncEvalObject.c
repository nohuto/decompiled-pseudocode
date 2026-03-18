/*
 * XREFs of SyncEvalObject @ 0x1C00023B0
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0043464 (AMLIEvalPackageElement.c)
 * Callees:
 *     RestartContext @ 0x1C000252C (RestartContext.c)
 *     LogSchedEvent @ 0x1C000295C (LogSchedEvent.c)
 *     LogEvent @ 0x1C00029B8 (LogEvent.c)
 *     AsyncEvalObject @ 0x1C0002BD8 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C00036E8 (GetObjectPath.c)
 *     GetThreadCurrentContext @ 0x1C0003CE4 (GetThreadCurrentContext.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     NestAsyncEvalObject @ 0x1C004EC28 (NestAsyncEvalObject.c)
 */

__int64 __fastcall SyncEvalObject(__int64 a1, int a2, int a3, int a4)
{
  char v8; // r14
  int v9; // eax
  __int64 ThreadCurrentContext; // rdi
  KIRQL v11; // r10
  unsigned __int8 CurrentIrql; // al
  char v13; // r8
  unsigned int restarted; // eax
  unsigned int v15; // ebx
  unsigned __int8 v17; // cl
  NTSTATUS v18; // ebx
  __int64 ObjectPath; // rax
  void *v20; // rdx
  void *v21; // rdi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-60h]
  __int64 *v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+48h] [rbp-38h] BYREF
  int v25; // [rsp+50h] [rbp-30h]
  unsigned int v26; // [rsp+58h] [rbp-28h] BYREF
  __int64 v27; // [rsp+60h] [rbp-20h]
  struct _KEVENT Event; // [rsp+68h] [rbp-18h] BYREF
  int v29; // [rsp+B0h] [rbp+30h] BYREF

  v25 = 8;
  v24 = a1 + 120;
  v23 = &v24;
  v8 = 0;
  v9 = EmClientRuleEvaluate(&GUID_EM_RULE_AMLI_ALLOW_INVALID_RECLAIM_MEMORY_MAP_ON_EVAL, &v23, 1LL, &v29);
  if ( v9 >= 0 && v29 == 2 || v9 == -1073741818 && v29 )
  {
    v8 = 1;
    _InterlockedAdd(&gAllowInvalidReclaimMemoryMap, 1u);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  ThreadCurrentContext = GetThreadCurrentContext();
  KeReleaseSpinLock(&SpinLock, v11);
  if ( !ThreadCurrentContext )
  {
    CurrentIrql = KeGetCurrentIrql();
    LogEvent(1398361667, (unsigned int)KeGetCurrentThread(), 0, 0, (unsigned int)gReadyQueue, CurrentIrql, a1, 0LL);
    restarted = AsyncEvalObject(a1, a2, a3, a4, (__int64)EvalMethodComplete, (__int64)&v26, v13);
LABEL_6:
    v15 = restarted;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(ThreadCurrentContext + 64) & 0x100) != 0 )
  {
    LogError(3222536198LL);
    AcpiDiagTraceAmlError(ThreadCurrentContext, 3222536198LL);
    PrintDebugMessage(179, 0, 0, 0, 0LL);
    v15 = -1072431098;
  }
  else
  {
    v17 = KeGetCurrentIrql();
    LogSchedEvent(1314085198, ThreadCurrentContext, v17, a1, 0LL);
    v15 = NestAsyncEvalObject(a1, a2, a3, a4, (__int64)Timeout, (__int64)&v26);
    if ( v15 == 32772 )
    {
      restarted = RestartContext(ThreadCurrentContext, 0LL);
      goto LABEL_6;
    }
  }
LABEL_7:
  if ( KeGetCurrentIrql() >= 2u )
  {
    if ( v15 == 32772 )
    {
      LogError(3222536198LL);
      AcpiDiagTraceAmlError(ThreadCurrentContext, 3222536198LL);
      ObjectPath = GetObjectPath(a1);
      v20 = &unk_1C005B1F0;
      v21 = (void *)ObjectPath;
      if ( ObjectPath )
        LODWORD(v20) = ObjectPath;
      PrintDebugMessage(181, (_DWORD)v20, 0, 0, 0LL);
      v15 = -1072431098;
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
    }
  }
  else
  {
    while ( v15 == 32772 )
    {
      v18 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( v18 )
      {
        LogError(3222536198LL);
        AcpiDiagTraceAmlError(ThreadCurrentContext, 3222536198LL);
        PrintDebugMessage(180, v18, 0, 0, 0LL);
        v15 = -1072431098;
      }
      else
      {
        v15 = v26;
        if ( v26 == 32771 )
          v15 = RestartContext(v27, 0LL);
      }
    }
  }
  if ( v8 )
    _InterlockedDecrement(&gAllowInvalidReclaimMemoryMap);
  return v15;
}
