/*
 * XREFs of ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C002AA84
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0025FA4 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1C0028D40 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     ?DXGADAPTER_DdiSetPowerComponentFState@@YAJPEAVDXGADAPTER@@KK@Z @ 0x1C002E4F0 (-DXGADAPTER_DdiSetPowerComponentFState@@YAJPEAVDXGADAPTER@@KK@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00024F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiSetPowerComponentFState(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v13; // ebp
  __int64 v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // cl
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+20h] [rbp-88h] BYREF
  __int64 v25; // [rsp+28h] [rbp-80h]
  _BYTE v26[8]; // [rsp+30h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-70h] BYREF

  v25 = 0LL;
  v3 = a3;
  v24 = 5124;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5124);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 5124);
  _InterlockedIncrement((volatile signed __int32 *)this + 1042);
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_14;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v10 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v10);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v8 = 0LL;
LABEL_14:
      v13 = 0;
      goto LABEL_15;
    }
    v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_14;
  v13 = *(_DWORD *)(v8 + 136);
LABEL_15:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v26, this);
  v14 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))this + 89))(*((_QWORD *)this + 30), a2, v3);
  if ( v26[0] )
    KeUnstackDetachProcess(&ApcState);
  v15 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v15 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15);
    v16[3] = 275LL;
    v16[4] = 16LL;
    v16[5] = this;
    v16[6] = CurrentIrql;
    v17 = KeGetCurrentIrql();
    v16[7] = v17;
    WdLogEvent5_WdCriticalError(v16);
  }
  if ( v8 && *(_DWORD *)(v8 + 136) != v13 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15);
    v18[3] = 275LL;
    v18[4] = 38LL;
    v19 = *(int *)(v8 + 136);
    v18[7] = 0LL;
    v18[5] = v19;
    v18[6] = v13;
    WdLogEvent5_WdCriticalError(v18);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1042);
  if ( (_DWORD)v14 != -1071775466 && (_DWORD)v14 )
  {
    v20 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v20 + 24) = v14;
    WdLogEvent5_WdError(v20);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v24);
  return (unsigned int)v14;
}
