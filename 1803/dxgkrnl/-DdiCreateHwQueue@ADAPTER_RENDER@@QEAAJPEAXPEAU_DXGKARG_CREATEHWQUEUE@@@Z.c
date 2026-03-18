/*
 * XREFs of ?DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x1C015E03C
 * Callers:
 *     ?ADAPTER_RENDER_DdiCreateHwQueue@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x1C002E210 (-ADAPTER_RENDER_DdiCreateHwQueue@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C01A30D4 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiCreateHwQueue(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_CREATEHWQUEUE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v16; // ebp
  __int64 (__fastcall *v17)(void *, struct _DXGKARG_CREATEHWQUEUE *); // rax
  int v18; // ebx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int8 v21; // cl
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v28; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-A0h]
  _BYTE v30[24]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v31[8]; // [rsp+48h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  v29 = 0LL;
  v28 = 5110;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 5110);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 5110);
  Current = DXGPROCESS::GetCurrent(v7, v6);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v30, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_14;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v13 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v11 = 0LL;
LABEL_14:
      v16 = 0;
      goto LABEL_15;
    }
    v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    goto LABEL_14;
  v16 = *(_DWORD *)(v11 + 136);
LABEL_15:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v31,
    *((struct DXGADAPTER **)this + 2));
  v17 = *(__int64 (__fastcall **)(void *, struct _DXGKARG_CREATEHWQUEUE *))(*((_QWORD *)this + 2) + 984LL);
  if ( v17 )
    v18 = v17(a2, a3);
  else
    v18 = -1073741822;
  if ( v31[0] )
    KeUnstackDetachProcess(&ApcState);
  v19 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v19 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19);
    v20[3] = 275LL;
    v20[4] = 16LL;
    v20[5] = this;
    v20[6] = CurrentIrql;
    v21 = KeGetCurrentIrql();
    v20[7] = v21;
    WdLogEvent5_WdCriticalError(v20);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v16 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19);
    v22[3] = 275LL;
    v22[4] = 38LL;
    v23 = *(int *)(v11 + 136);
    v22[7] = 0LL;
    v22[5] = v23;
    v22[6] = v16;
    WdLogEvent5_WdCriticalError(v22);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
  if ( v18 != -1073741822 && v18 != -1073741801 && v18 )
  {
    v24 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v24 + 24) = v18;
    WdLogEvent5_WdError(v24);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v28);
  return (unsigned int)v18;
}
