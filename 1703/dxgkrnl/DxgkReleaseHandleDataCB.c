/*
 * XREFs of DxgkReleaseHandleDataCB @ 0x1C00FFC80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

void __fastcall DxgkReleaseHandleDataCB(__int64 a1)
{
  __int64 v2; // rcx
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 *ThreadProperty; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int CurrentProcessSessionId; // esi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r9d
  int v28; // eax
  struct _EX_RUNDOWN_REF *v29; // rsi
  __int64 v30; // rax
  struct _EX_RUNDOWN_REF *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v36; // rax
  struct _EX_RUNDOWN_REF *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  char v40[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v40);
  CurrentProcess = PsGetCurrentProcess(v2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v4);
  v10 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v10 = *ThreadProperty;
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v13 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6, v8, v9);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    v20 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v20 = 0LL;
  }
  v21 = v10 + 168;
  if ( v21 && *(struct _KTHREAD **)(v21 + 8) == KeGetCurrentThread() )
  {
    v22 = WdLogNewEntry5_WdAssertion(v15, v14, v17, v18);
    *(_QWORD *)(v22 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v22);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v21, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v27 = *(_DWORD *)(v21 + 16);
      if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v24, &EventBlockThread, v25, v27);
    }
    ExAcquirePushLockSharedEx(v21, 0LL);
  }
  v28 = *(_DWORD *)(a1 + 8);
  if ( v28 == 1 )
  {
    v29 = *(struct _EX_RUNDOWN_REF **)a1;
    if ( !*(_QWORD *)a1 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
      *(_QWORD *)(v30 + 24) = 317LL;
      WdLogEvent5_WdAssertion(v30);
    }
    v31 = v29 + 11;
  }
  else
  {
    if ( v28 != 2 )
    {
      v39 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v39 + 24) = *(int *)(a1 + 8);
      WdLogEvent5_WdError(v39);
      goto LABEL_34;
    }
    v37 = *(struct _EX_RUNDOWN_REF **)a1;
    if ( !*(_QWORD *)a1 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
      *(_QWORD *)(v38 + 24) = 338LL;
      WdLogEvent5_WdAssertion(v38);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v37[10], v23, v25, v26);
    v31 = v37 + 9;
  }
  ExReleaseRundownProtection(v31);
  if ( v20 )
  {
    if ( --*(_DWORD *)(v20 + 136) < 0 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v34);
      v36[3] = 275LL;
      v36[4] = 25LL;
      v36[5] = *(int *)(v20 + 136);
      v36[6] = 0LL;
      v36[7] = 0LL;
      WdLogEvent5_WdCriticalError(v36);
    }
  }
LABEL_34:
  ExReleasePushLockSharedEx(v21, 0LL);
  KeLeaveCriticalRegion();
  if ( v40[0] )
    KeUnstackDetachProcess(&ApcState);
}
