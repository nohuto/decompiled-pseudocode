/*
 * XREFs of InsertReadyQueue @ 0x1C0002838
 * Callers:
 *     RestartContext @ 0x1C000252C (RestartContext.c)
 *     RestartCtxtPassive @ 0x1C004BD60 (RestartCtxtPassive.c)
 *     DequeueAndReadyContext @ 0x1C004EB74 (DequeueAndReadyContext.c)
 * Callees:
 *     RunContext @ 0x1C00025DC (RunContext.c)
 *     LogSchedEvent @ 0x1C000295C (LogSchedEvent.c)
 *     OSQueueWorkItem @ 0x1C004309C (OSQueueWorkItem.c)
 *     AMLIDebugger @ 0x1C0048460 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     AsyncCallBack @ 0x1C004EA84 (AsyncCallBack.c)
 */

__int64 __fastcall InsertReadyQueue(__int64 a1, char a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  __int64 v6; // r9
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // eax
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r9

  v2 = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 32);
  else
    v6 = *(_QWORD *)(a1 + 72);
  LogSchedEvent(1229869905, a1, a1, v6, *(_QWORD *)(a1 + 120));
  v7 = *(_DWORD *)(a1 + 64);
  if ( (v7 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 64) = v7 & 0xFFFFFFFE;
    if ( !KeCancelTimer((PKTIMER)(a1 + 192)) )
      *(_DWORD *)(a1 + 64) |= 2u;
  }
  v8 = *(_DWORD *)(a1 + 64) | 8;
  *(_DWORD *)(a1 + 64) = v8;
  if ( (v8 & 2) == 0 && ((v8 & 0x10) == 0 || (v8 & 0x80) != 0) )
  {
    if ( a2 )
    {
      KeReleaseSpinLock(&SpinLock, NewIrql);
      AsyncCallBack(a1, 32771LL);
      NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
      return v2;
    }
    if ( (gdwfAMLI & 4) != 0 )
    {
      if ( (gReadyQueue & 8) == 0 )
        return (unsigned int)RunContext((_QWORD *)a1);
      v19 = *(_QWORD *)(a1 + 104);
      if ( v19 )
        v20 = *(_QWORD *)(v19 + 32);
      else
        v20 = *(_QWORD *)(a1 + 72);
      LogSchedEvent(1363367000, a1, a1, v20, *(_QWORD *)(a1 + 120));
      v16 = *(_DWORD *)(a1 + 64);
      if ( (v16 & 0x40) == 0 )
      {
        v17 = (_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 64) = v16 | 0x40;
        v18 = (_QWORD *)qword_1C0067940;
        if ( *(__int64 **)qword_1C0067940 != &qword_1C0067938 )
          __fastfail(3u);
        goto LABEL_45;
      }
    }
    else
    {
      if ( (v8 & 0x80) != 0 && *(struct _KTHREAD **)(a1 + 408) == KeGetCurrentThread() )
      {
        v12 = *(_QWORD *)(a1 + 104);
        if ( v12 )
          v13 = *(_QWORD *)(v12 + 32);
        else
          v13 = *(_QWORD *)(a1 + 72);
        LogSchedEvent(1313166164, a1, a1, v13, *(_QWORD *)(a1 + 120));
        return (unsigned int)RunContext((_QWORD *)a1);
      }
      if ( (__int64 *)RunningContextListHead == &RunningContextListHead && (gReadyQueue & 8) == 0 )
      {
        v9 = *(_QWORD *)(a1 + 104);
        if ( v9 )
          v10 = *(_QWORD *)(v9 + 32);
        else
          v10 = *(_QWORD *)(a1 + 72);
        LogSchedEvent(1163280716, a1, a1, v10, *(_QWORD *)(a1 + 120));
        v2 = RunContext((_QWORD *)a1);
        if ( (__int64 *)qword_1C0067938 != &qword_1C0067938 && (gReadyQueue & 2) == 0 )
        {
          LogSchedEvent(1263092555, 0, v2, 0, 0LL);
          gReadyQueue |= 2u;
          OSQueueWorkItem(&qword_1C0067958);
        }
        return v2;
      }
      v14 = *(_QWORD *)(a1 + 104);
      if ( v14 )
        v15 = *(_QWORD *)(v14 + 32);
      else
        v15 = *(_QWORD *)(a1 + 72);
      LogSchedEvent(1363367000, a1, a1, v15, *(_QWORD *)(a1 + 120));
      v16 = *(_DWORD *)(a1 + 64);
      if ( (v16 & 0x40) == 0 )
      {
        v17 = (_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 64) = v16 | 0x40;
        v18 = (_QWORD *)qword_1C0067940;
        if ( *(__int64 **)qword_1C0067940 != &qword_1C0067938 )
          __fastfail(3u);
LABEL_45:
        *v17 = &qword_1C0067938;
        v17[1] = v18;
        *v18 = v17;
        qword_1C0067940 = (__int64)v17;
        v16 = *(_DWORD *)(a1 + 64);
      }
    }
    v2 = 32772;
    *(_DWORD *)(a1 + 64) = v16 | 0x20;
  }
  return v2;
}
