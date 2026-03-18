/*
 * XREFs of ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C00D37EC
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt @ 0x1C0002930 (DXGADAPTER_DdiControlInterrupt.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C01B67F8 (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C01B6898 (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0005DC0 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt(DXGADAPTER *this, enum _DXGK_INTERRUPT_TYPE a2, unsigned __int8 a3)
{
  __int64 v4; // r15
  DXGADAPTER *v6; // rcx
  __int64 v7; // r8
  DXGK_INTERRUPT_STATE v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 CurrentIrql; // r13
  __int64 v15; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v17; // rax
  int CurrentProcessSessionId; // ebp
  __int64 ThreadWin32Thread; // rax
  int v20; // r12d
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  _QWORD *v27; // rax
  unsigned __int8 v28; // cl
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  struct _DXGKARG_CONTROLINTERRUPT2 v35; // [rsp+20h] [rbp-88h]
  _BYTE v36[8]; // [rsp+28h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-78h] BYREF

  v4 = a2;
  v8 = DXGK_INTERRUPT_ENABLE;
  if ( (int)DXGADAPTER::GetDriverVersion(this) >= 1300 && *((_QWORD *)v6 + 96) )
  {
    v35.InterruptType = v4;
    LOBYTE(v8) = (_BYTE)v7 == 0;
    v35.InterruptState = v8;
    return DXGADAPTER::DdiControlInterrupt2(v6, v35, 0LL);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v6, &EventProfilerEnter, v7, 5038);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 973);
  CurrentIrql = KeGetCurrentIrql();
  v15 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_16;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v17 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v17 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v17);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10, v12, v13);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v15 = 0LL;
      goto LABEL_16;
    }
    v15 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
  {
    v20 = *(_DWORD *)(v15 + 136);
    goto LABEL_17;
  }
LABEL_16:
  v20 = 0;
LABEL_17:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v36, this);
  LOBYTE(v21) = a3;
  v23 = (*((int (__fastcall **)(_QWORD, _QWORD, __int64))this + 70))(*((_QWORD *)this + 30), (unsigned int)v4, v21);
  if ( v36[0] )
    KeUnstackDetachProcess(&ApcState);
  v26 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v26 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v22, v24);
    v27[3] = 275LL;
    v27[4] = 16LL;
    v27[5] = this;
    v27[6] = CurrentIrql;
    v28 = KeGetCurrentIrql();
    v27[7] = v28;
    WdLogEvent5_WdCriticalError(v27);
  }
  if ( v15 && *(_DWORD *)(v15 + 136) != v20 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v22, v24);
    v29[3] = 275LL;
    v29[4] = 25LL;
    v29[5] = *(int *)(v15 + 136);
    v29[6] = v20;
    v29[7] = 0LL;
    WdLogEvent5_WdCriticalError(v29);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 973);
  if ( (_DWORD)v4 == 3 && (int)v23 >= 0 )
  {
    LOBYTE(v26) = a3;
    PoNotifyVSyncChange(v26);
  }
  v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v22, v24, v25);
  v30[3] = v23;
  v30[4] = v4;
  v30[5] = a3;
  if ( (_DWORD)v23 != -1073741823 && (_DWORD)v23 != -1073741822 && (_DWORD)v23 )
  {
    v32 = WdLogNewEntry5_WdError(a3, v31);
    *(_QWORD *)(v32 + 24) = v23;
    WdLogEvent5_WdError(v32);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v33, &EventProfilerExit, v34, 5038);
  return (unsigned int)v23;
}
