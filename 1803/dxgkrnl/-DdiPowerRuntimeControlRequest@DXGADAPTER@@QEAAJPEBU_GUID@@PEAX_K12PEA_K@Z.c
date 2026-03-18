/*
 * XREFs of ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C0029978
 * Callers:
 *     ?DxgkPowerRuntimeControlCallback@@YAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C002BA60 (-DxgkPowerRuntimeControlCallback@@YAJPEAXPEBU_GUID@@0_K02PEA_K@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C014D9CC (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C014F97C (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C014FAAC (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00024F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiPowerRuntimeControlRequest(
        DXGADAPTER *this,
        const struct _GUID *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v13; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v15; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v18; // ebp
  __int64 v19; // rdi
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int8 v22; // cl
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v29; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-A0h]
  unsigned __int64 *v31; // [rsp+50h] [rbp-98h]
  void *v32; // [rsp+58h] [rbp-90h]
  _BYTE v33[8]; // [rsp+60h] [rbp-88h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-80h] BYREF

  v30 = 0LL;
  v32 = a5;
  v31 = a7;
  v29 = 5126;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5126);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 5126);
  _InterlockedIncrement((volatile signed __int32 *)this + 1042);
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_14;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v15 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v13 = 0LL;
LABEL_14:
      v18 = 0;
      goto LABEL_15;
    }
    v13 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
    goto LABEL_14;
  v18 = *(_DWORD *)(v13 + 136);
LABEL_15:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v33, this);
  v19 = (*((int (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64, void *, unsigned __int64, unsigned __int64 *))this
         + 90))(
          *((_QWORD *)this + 30),
          a2,
          a3,
          a4,
          v32,
          a6,
          v31);
  if ( v33[0] )
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
  if ( v13 && *(_DWORD *)(v13 + 136) != v18 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20);
    v23[3] = 275LL;
    v23[4] = 38LL;
    v24 = *(int *)(v13 + 136);
    v23[7] = 0LL;
    v23[5] = v24;
    v23[6] = v18;
    WdLogEvent5_WdCriticalError(v23);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1042);
  if ( (_DWORD)v19 != -1073741811 && (_DWORD)v19 )
  {
    v25 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v25 + 24) = v19;
    WdLogEvent5_WdError(v25);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v29);
  return (unsigned int)v19;
}
