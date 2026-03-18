/*
 * XREFs of ?DdiQueryProbedBars@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYPROBEDBARS@@@Z @ 0x1C0176C7C
 * Callers:
 *     ?QueryProbedBars@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_QUERYPROBEDBARS@@@Z @ 0x1C017A190 (-QueryProbedBars@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_QUERYPROBEDBARS@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00024F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00161C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0016230 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiQueryProbedBars(
        ADAPTER_RENDER *this,
        struct _DXGKARG_QUERYPROBEDBARS *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v12; // esi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned __int8 v15; // cl
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+28h] [rbp-60h]
  _BYTE v23[8]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  v22 = 0LL;
  v21 = 5090;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5090);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 5090);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
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
    (DXGVALIDATIONPROCESSATTACH *)v23,
    *((struct DXGADAPTER **)this + 2));
  (*(void (__fastcall **)(_QWORD, struct _DXGKARG_QUERYPROBEDBARS *))(*(_QWORD *)(*((_QWORD *)this + 2) + 920LL) + 64LL))(
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 920LL) + 8LL),
    a2);
  if ( v23[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13);
    v14[3] = 275LL;
    v14[4] = 16LL;
    v14[5] = this;
    v14[6] = CurrentIrql;
    v15 = KeGetCurrentIrql();
    v14[7] = v15;
    WdLogEvent5_WdCriticalError(v14);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v12 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13);
    v16[3] = 275LL;
    v16[4] = 38LL;
    v17 = *(int *)(v7 + 136);
    v16[7] = 0LL;
    v16[5] = v17;
    v16[6] = v12;
    WdLogEvent5_WdCriticalError(v16);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v21);
  return 0LL;
}
