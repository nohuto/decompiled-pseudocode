/*
 * XREFs of ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C00A5290
 * Callers:
 *     ?ADAPTER_RENDER_DdiCreateDevice@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C002E1F0 (-ADAPTER_RENDER_DdiCreateDevice@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00F0990 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiCreateDevice(ADAPTER_RENDER *this, struct _DXGKARG_CREATEDEVICE *a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // cl
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // [rsp+20h] [rbp-98h] BYREF
  __int64 v27; // [rsp+28h] [rbp-90h]
  _BYTE v28[24]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v29[8]; // [rsp+48h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  v27 = 0LL;
  v26 = 5001;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5001);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 5001);
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v28, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
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
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v29,
    *((struct DXGADAPTER **)this + 2));
  v14 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_CREATEDEVICE *))(*((_QWORD *)this + 2) + 320LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v29[0] )
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
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
  v20 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v20 + 24) = v14;
  *(_QWORD *)(v20 + 32) = a2->hDevice;
  WdLogEvent5_WdEvent(v20);
  if ( (_DWORD)v14 != -1073741801 && (_DWORD)v14 )
  {
    v22 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v22 + 24) = v14;
    WdLogEvent5_WdError(v22);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v26);
  return (unsigned int)v14;
}
