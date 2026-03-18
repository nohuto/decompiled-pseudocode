/*
 * XREFs of ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1C015DD6C
 * Callers:
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C014F834 (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     ?SendColorimetricControlToDriverCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01C6FC0 (-SendColorimetricControlToDriverCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00024F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000254C (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00161C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0016230 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlModeBehavior(
        DXGADAPTER *this,
        struct _DXGKARG_CONTROLMODEBEHAVIOR *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int8 v22; // cl
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 Value; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v33; // [rsp+20h] [rbp-98h] BYREF
  __int64 v34; // [rsp+28h] [rbp-90h]
  _BYTE v35[24]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v36[8]; // [rsp+48h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  v34 = 0LL;
  v33 = 5071;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5071);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 5071);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v35, Current);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 1042);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_14;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v12 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
LABEL_14:
      v15 = 0;
      goto LABEL_15;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
    goto LABEL_14;
  v15 = *(_DWORD *)(v10 + 136);
LABEL_15:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v36, this);
  v17 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLMODEBEHAVIOR *))this + 118))(*((_QWORD *)this + 30), a2);
  if ( v36[0] )
    KeUnstackDetachProcess(&ApcState);
  v20 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20);
    v21[3] = 275LL;
    v21[4] = 16LL;
    v21[5] = this;
    v21[6] = CurrentIrql;
    v22 = KeGetCurrentIrql();
    v21[7] = v22;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v15 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20);
    v23[3] = 275LL;
    v23[4] = 38LL;
    v24 = *(int *)(v10 + 136);
    v23[7] = 0LL;
    v23[5] = v24;
    v23[6] = v15;
    WdLogEvent5_WdCriticalError(v23);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1042);
  v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v16, v18, v19);
  v25[3] = v17;
  v25[4] = *((_QWORD *)this + 30);
  v25[5] = a2->Request.Value;
  v25[6] = a2->Satisfied.Value;
  Value = a2->NotSatisfied.Value;
  v25[7] = Value;
  if ( (_DWORD)v17 != -1073741801 && (_DWORD)v17 != -1073741637 && (_DWORD)v17 )
  {
    v27 = WdLogNewEntry5_WdError(Value);
    *(_QWORD *)(v27 + 24) = v17;
    WdLogEvent5_WdError(v27);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  if ( (a2->Satisfied.Value & a2->NotSatisfied.Value) != 0 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v29 + 24) = 172LL;
    WdLogEvent5_WdAssertion(v29);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v33);
  return (unsigned int)v17;
}
