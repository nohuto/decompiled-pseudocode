/*
 * XREFs of ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C00F460C
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt @ 0x1C000B320 (DXGADAPTER_DdiControlInterrupt.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C01D6F98 (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C01D7278 (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00024F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0015ACC (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00161C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0016230 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt(DXGADAPTER *this, enum _DXGK_INTERRUPT_TYPE a2, unsigned __int8 a3)
{
  __int64 v4; // r12
  DXGADAPTER *v6; // rcx
  __int64 v7; // r8
  DXGK_INTERRUPT_STATE v8; // ebx
  __int64 v10; // rcx
  __int64 v11; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v13; // rax
  int CurrentProcessSessionId; // r14d
  __int64 ThreadWin32Thread; // rax
  int v16; // r13d
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned __int8 v24; // cl
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _DXGKARG_CONTROLINTERRUPT2 v30; // [rsp+20h] [rbp-60h]
  unsigned __int8 CurrentIrql; // [rsp+28h] [rbp-58h]
  int v32; // [rsp+30h] [rbp-50h] BYREF
  __int64 v33; // [rsp+38h] [rbp-48h]
  _BYTE v34[8]; // [rsp+40h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  v4 = a2;
  v8 = DXGK_INTERRUPT_ENABLE;
  if ( (int)DXGADAPTER::GetDriverVersion(this) >= 1300 && *((_QWORD *)v6 + 96) )
  {
    v30.InterruptType = v4;
    LOBYTE(v8) = (_BYTE)v7 == 0;
    v30.InterruptState = v8;
    return DXGADAPTER::DdiControlInterrupt2(v6, v30, 0LL);
  }
  v32 = 5038;
  v33 = 0LL;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v6, &EventProfilerEnter, v7, 5038);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 5038);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 1042);
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_17;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v13 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v11 = 0LL;
      goto LABEL_17;
    }
    v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v16 = *(_DWORD *)(v11 + 136);
    goto LABEL_18;
  }
LABEL_17:
  v16 = 0;
LABEL_18:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v34, this);
  LOBYTE(v17) = a3;
  v21 = (*((int (__fastcall **)(_QWORD, _QWORD, __int64))this + 70))(*((_QWORD *)this + 30), (unsigned int)v4, v17);
  if ( v34[0] )
    KeUnstackDetachProcess(&ApcState);
  v22 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v22 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22);
    v23[3] = 275LL;
    v23[4] = 16LL;
    v23[5] = this;
    v23[6] = CurrentIrql;
    v24 = KeGetCurrentIrql();
    v23[7] = v24;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v16 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22);
    v25[3] = 275LL;
    v25[4] = 38LL;
    v25[5] = *(int *)(v11 + 136);
    v25[6] = v16;
    v25[7] = 0LL;
    WdLogEvent5_WdCriticalError(v25);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1042);
  if ( (_DWORD)v4 == 3 && (int)v21 >= 0 )
  {
    LOBYTE(v22) = a3;
    PoNotifyVSyncChange(v22);
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v18, v19, v20);
  v26[3] = v21;
  v26[4] = v4;
  v26[5] = a3;
  if ( (unsigned int)(v21 + 0x3FFFFFFF) > 1 && (_DWORD)v21 )
  {
    v27 = WdLogNewEntry5_WdError(a3);
    *(_QWORD *)(v27 + 24) = v21;
    WdLogEvent5_WdError(v27);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v32);
  return (unsigned int)v21;
}
