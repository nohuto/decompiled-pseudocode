/*
 * XREFs of ?DdiSubmitCommandToHwQueue@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C002B428
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommandToHwQueue@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C002E490 (-ADAPTER_RENDER_DdiSubmitCommandToHwQueue@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDTOHW.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00024F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommandToHwQueue(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v12; // esi
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *); // rax
  int v15; // edi
  _QWORD *v16; // rax
  unsigned __int8 v17; // cl
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+20h] [rbp-78h] BYREF
  __int64 v25; // [rsp+28h] [rbp-70h]
  _BYTE v26[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-60h] BYREF

  v25 = 0LL;
  v24 = 5112;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5112);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 5112);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_14;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v9 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v9);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v7 = 0LL;
LABEL_14:
      v12 = 0;
      goto LABEL_15;
    }
    v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    goto LABEL_14;
  v12 = *(_DWORD *)(v7 + 136);
LABEL_15:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v26,
    *((struct DXGADAPTER **)this + 2));
  v13 = *((_QWORD *)this + 2);
  v14 = *(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *))(v13 + 1000);
  if ( v14 )
    v15 = v14(*(_QWORD *)(v13 + 240), a2);
  else
    v15 = -1073741822;
  if ( v26[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13);
    v16[3] = 275LL;
    v16[4] = 16LL;
    v16[5] = this;
    v16[6] = CurrentIrql;
    v17 = KeGetCurrentIrql();
    v16[7] = v17;
    WdLogEvent5_WdCriticalError(v16);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v12 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13);
    v18[3] = 275LL;
    v18[4] = 38LL;
    v19 = *(int *)(v7 + 136);
    v18[7] = 0LL;
    v18[5] = v19;
    v18[6] = v12;
    WdLogEvent5_WdCriticalError(v18);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
  if ( v15 != -1073741822 && v15 != -1073741811 && v15 )
  {
    v20 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v20 + 24) = v15;
    WdLogEvent5_WdError(v20);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v24);
  return (unsigned int)v15;
}
