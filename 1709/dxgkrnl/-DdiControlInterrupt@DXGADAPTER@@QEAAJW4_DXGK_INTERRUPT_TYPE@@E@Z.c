/*
 * XREFs of ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C0084210
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt @ 0x1C000EBB0 (DXGADAPTER_DdiControlInterrupt.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C01CEB5C (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C01CEBFC (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0002190 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt(DXGADAPTER *this, enum _DXGK_INTERRUPT_TYPE a2, unsigned __int8 a3)
{
  __int64 v4; // r15
  DXGADAPTER *v6; // rcx
  __int64 v7; // r8
  DXGK_INTERRUPT_STATE v8; // ebx
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // r13
  __int64 v12; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v14; // rax
  int CurrentProcessSessionId; // ebp
  __int64 ThreadWin32Thread; // rax
  int v17; // r12d
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned __int8 v24; // cl
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _DXGKARG_CONTROLINTERRUPT2 v30; // [rsp+20h] [rbp-88h]
  _BYTE v31[8]; // [rsp+28h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-78h] BYREF

  v4 = a2;
  v8 = DXGK_INTERRUPT_ENABLE;
  if ( (int)DXGADAPTER::GetDriverVersion(this) >= 1300 && *((_QWORD *)v6 + 96) )
  {
    v30.InterruptType = v4;
    LOBYTE(v8) = (_BYTE)v7 == 0;
    v30.InterruptState = v8;
    return DXGADAPTER::DdiControlInterrupt2(v6, v30, 0);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v6, &EventProfilerEnter, v7, 5038);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 981);
  CurrentIrql = KeGetCurrentIrql();
  v12 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_17;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v14 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v14);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v12 = 0LL;
      goto LABEL_17;
    }
    v12 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    v17 = *(_DWORD *)(v12 + 136);
    goto LABEL_18;
  }
LABEL_17:
  v17 = 0;
LABEL_18:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v31, this);
  LOBYTE(v18) = a3;
  v20 = (*((int (__fastcall **)(_QWORD, _QWORD, __int64))this + 70))(*((_QWORD *)this + 30), (unsigned int)v4, v18);
  if ( v31[0] )
    KeUnstackDetachProcess(&ApcState);
  v22 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v22 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v19, v21);
    v23[3] = 275LL;
    v23[4] = 16LL;
    v23[5] = this;
    v23[6] = CurrentIrql;
    v24 = KeGetCurrentIrql();
    v23[7] = v24;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( v12 && *(_DWORD *)(v12 + 136) != v17 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v19, v21);
    v25[3] = 275LL;
    v25[4] = 25LL;
    v25[5] = *(int *)(v12 + 136);
    v25[6] = v17;
    v25[7] = 0LL;
    WdLogEvent5_WdCriticalError(v25);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 981);
  if ( (_DWORD)v4 == 3 && (int)v20 >= 0 )
  {
    LOBYTE(v22) = a3;
    PoNotifyVSyncChange(v22);
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v19);
  v26[3] = v20;
  v26[4] = v4;
  v26[5] = a3;
  if ( (unsigned int)(v20 + 0x3FFFFFFF) > 1 && (_DWORD)v20 )
  {
    v27 = WdLogNewEntry5_WdError(a3);
    *(_QWORD *)(v27 + 24) = v20;
    WdLogEvent5_WdError(v27);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, 5038);
  return (unsigned int)v20;
}
