/*
 * XREFs of SyncEvalObject @ 0x1C0002920
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0005854 (AMLIEvalPackageElement.c)
 * Callees:
 *     AsyncEvalObject @ 0x1C0003100 (AsyncEvalObject.c)
 *     RestartContext @ 0x1C0012000 (RestartContext.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     LogSchedEvent @ 0x1C0025E94 (LogSchedEvent.c)
 *     NestAsyncEvalObject @ 0x1C005F0C0 (NestAsyncEvalObject.c)
 */

__int64 __fastcall SyncEvalObject(__int64 a1, int a2, int a3, int a4)
{
  char v8; // si
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 *v13; // rcx
  struct _KTHREAD *v14; // r9
  __int64 v15; // r10
  __int64 CurrentIrql; // r8
  unsigned __int32 v17; // ebx
  unsigned int v18; // ebx
  __int64 v19; // rdx
  unsigned int restarted; // eax
  unsigned int v21; // ebx
  __int64 result; // rax
  NTSTATUS v23; // ebx
  __int64 ObjectPath; // rax
  void *v25; // rdx
  void *v26; // rdi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-88h]
  __int64 *v28; // [rsp+40h] [rbp-68h] BYREF
  __int64 v29; // [rsp+48h] [rbp-60h] BYREF
  int v30; // [rsp+50h] [rbp-58h]
  unsigned int v31; // [rsp+58h] [rbp-50h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-48h]
  struct _KEVENT Event; // [rsp+68h] [rbp-40h] BYREF
  int v34; // [rsp+B0h] [rbp+8h] BYREF

  v29 = a1 + 120;
  v30 = 8;
  v28 = &v29;
  v8 = 0;
  v9 = EmClientRuleEvaluate(&GUID_EM_RULE_AMLI_ALLOW_INVALID_RECLAIM_MEMORY_MAP_ON_EVAL, &v28, 1LL, &v34);
  if ( v9 >= 0 && v34 == 2 || v9 == -1073741818 && v34 )
  {
    v8 = 1;
    _InterlockedIncrement(&gAllowInvalidReclaimMemoryMap);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  byte_1C00775A0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v12 = RunningContextListHead - 392;
  v13 = (__int64 *)RunningContextListHead;
  if ( &RunningContextListHead != (__int64 *)RunningContextListHead )
  {
    while ( *(struct _KTHREAD **)(v12 + 408) != CurrentThread )
    {
      v12 = *v13 - 392;
      v13 = (__int64 *)*v13;
      if ( &RunningContextListHead == v13 )
        goto LABEL_5;
    }
    v11 = v12;
  }
LABEL_5:
  KeReleaseSpinLock(&SpinLock, byte_1C00775A0);
  if ( !v11 )
  {
    v14 = KeGetCurrentThread();
    v15 = (unsigned int)gReadyQueue;
    CurrentIrql = KeGetCurrentIrql();
    if ( (gDebugger & 0x8000) != 0 && qword_1C00776D0 )
    {
      v17 = _InterlockedExchangeAdd((_DWORD *)&qword_1C00776C8 + 1, 1u);
      if ( (_DWORD)qword_1C00776C8 == 204 )
        v18 = v17 % 0xCC;
      else
        v18 = v17 % (unsigned int)qword_1C00776C8;
      v19 = 72LL * v18;
      *(_QWORD *)((char *)qword_1C00776D0 + v19 + 8) = MEMORY[0xFFFFF78000000008];
      *(_DWORD *)((char *)qword_1C00776D0 + v19) = 1398361667;
      *(_QWORD *)((char *)qword_1C00776D0 + v19 + 16) = v14;
      *(_QWORD *)((char *)qword_1C00776D0 + v19 + 24) = 0LL;
      *(_QWORD *)((char *)qword_1C00776D0 + v19 + 32) = 0LL;
      *(_QWORD *)((char *)qword_1C00776D0 + v19 + 40) = v15;
      *(_QWORD *)((char *)qword_1C00776D0 + v19 + 48) = CurrentIrql;
      *(_QWORD *)((char *)qword_1C00776D0 + v19 + 56) = a1;
      *(_QWORD *)((char *)qword_1C00776D0 + v19 + 64) = 0LL;
    }
    restarted = AsyncEvalObject(a1, a2, a3, a4, (__int64)EvalMethodComplete, (__int64)&v31, 0);
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(v11 + 64) & 0x100) != 0 )
  {
    LogError(3222536198LL);
    AcpiDiagTraceAmlError(v11, 3222536198LL);
    PrintDebugMessage(179, 0, 0, 0, 0LL);
    v21 = -1072431098;
  }
  else
  {
    LogSchedEvent(1314085198, v11, KeGetCurrentIrql(), a1, 0LL);
    v21 = NestAsyncEvalObject(a1, a2, a3, a4, (__int64)Timeout, (__int64)&v31);
    if ( v21 == 32772 )
    {
      restarted = RestartContext((PSLIST_ENTRY)v11);
LABEL_12:
      v21 = restarted;
    }
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    if ( v21 == 32772 )
    {
      LogError(3222536198LL);
      AcpiDiagTraceAmlError(v11, 3222536198LL);
      ObjectPath = GetObjectPath(a1);
      v25 = &unk_1C0066CD0;
      if ( ObjectPath )
        LODWORD(v25) = ObjectPath;
      v26 = (void *)ObjectPath;
      PrintDebugMessage(181, (_DWORD)v25, 0, 0, 0LL);
      v21 = -1072431098;
      if ( v26 )
        ExFreePoolWithTag(v26, 0);
    }
  }
  else if ( v21 == 32772 )
  {
    while ( 1 )
    {
      v23 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( v23 )
        break;
      v21 = v31;
      if ( v31 == 32771 )
        v21 = RestartContext(ListEntry);
      if ( v21 != 32772 )
        goto LABEL_15;
    }
    LogError(3222536198LL);
    AcpiDiagTraceAmlError(v11, 3222536198LL);
    PrintDebugMessage(180, v23, 0, 0, 0LL);
    v21 = -1072431098;
  }
LABEL_15:
  result = v21;
  if ( v8 )
    _InterlockedDecrement(&gAllowInvalidReclaimMemoryMap);
  return result;
}
