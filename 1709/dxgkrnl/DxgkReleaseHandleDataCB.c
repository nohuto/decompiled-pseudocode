/*
 * XREFs of DxgkReleaseHandleDataCB @ 0x1C00BF9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0008C00 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 */

void __fastcall DxgkReleaseHandleDataCB(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 *ThreadProperty; // rax
  __int64 *v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  int v22; // eax
  struct _EX_RUNDOWN_REF *v23; // rsi
  __int64 v24; // rax
  struct _EX_RUNDOWN_REF *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v30; // rax
  struct _EX_RUNDOWN_REF *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  char v34[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v34);
  CurrentProcess = PsGetCurrentProcess(v3, v2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v10 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v10;
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v12 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && !IsThreadCrossSessionAttached()
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    v16 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v16 = 0LL;
  }
  v17 = v8 + 200;
  if ( v17 && *(struct _KTHREAD **)(v17 + 8) == KeGetCurrentThread() )
  {
    v18 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v18 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v18);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v17, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v21 = *(_DWORD *)(v17 + 16);
      if ( v21 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v19, &EventBlockThread, v20, v21);
    }
    ExAcquirePushLockSharedEx(v17, 0LL);
  }
  v22 = *(_DWORD *)(a1 + 8);
  if ( v22 == 1 )
  {
    v23 = *(struct _EX_RUNDOWN_REF **)a1;
    if ( !*(_QWORD *)a1 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v24 + 24) = 317LL;
      WdLogEvent5_WdAssertion(v24);
    }
    v25 = v23 + 11;
  }
  else
  {
    if ( v22 != 2 )
    {
      v33 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v33 + 24) = *(int *)(a1 + 8);
      WdLogEvent5_WdError(v33);
      goto LABEL_35;
    }
    v31 = *(struct _EX_RUNDOWN_REF **)a1;
    if ( !*(_QWORD *)a1 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v32 + 24) = 338LL;
      WdLogEvent5_WdAssertion(v32);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v31[10]);
    v25 = v31 + 9;
  }
  ExReleaseRundownProtection(v25);
  if ( v16 )
  {
    if ( --*(_DWORD *)(v16 + 136) < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26, v28);
      v30[3] = 275LL;
      v30[4] = 25LL;
      v30[5] = *(int *)(v16 + 136);
      v30[6] = 0LL;
      v30[7] = 0LL;
      WdLogEvent5_WdCriticalError(v30);
    }
  }
LABEL_35:
  ExReleasePushLockSharedEx(v17, 0LL);
  KeLeaveCriticalRegion();
  if ( v34[0] )
    KeUnstackDetachProcess(&ApcState);
}
