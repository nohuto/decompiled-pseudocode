/*
 * XREFs of ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C00E5D70
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00E399C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiCommitVidPn(ADAPTER_DISPLAY *this, const struct _DXGKARG_COMMITVIDPN *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  unsigned __int8 CurrentIrql; // r12
  __int64 v12; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // rcx
  ULONG TimeIncrement; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rax
  _QWORD *v32; // rax
  unsigned __int8 v33; // cl
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+20h] [rbp-79h]
  __int64 v37; // [rsp+28h] [rbp-71h]
  _QWORD v38[10]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v39[8]; // [rsp+80h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF

  memset(v38, 0, 0x48uLL);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerEnter, v5, 5009);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  v36 = MEMORY[0xFFFFF78000000320];
  v10 = v36 * KeQueryTimeIncrement();
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v12 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_28;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v31 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v31 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v31);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6, v8, v9);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v12 = 0LL;
      goto LABEL_28;
    }
    v12 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    v16 = *(_DWORD *)(v12 + 136);
    goto LABEL_12;
  }
LABEL_28:
  v16 = 0;
LABEL_12:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v39,
    *((struct DXGADAPTER **)this + 2));
  v18 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_COMMITVIDPN *))(*((_QWORD *)this + 2) + 512LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v39[0] )
    KeUnstackDetachProcess(&ApcState);
  v20 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v20 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v17, v19);
    v32[3] = 275LL;
    v32[4] = 16LL;
    v32[5] = this;
    v32[6] = CurrentIrql;
    v33 = KeGetCurrentIrql();
    v32[7] = v33;
    WdLogEvent5_WdCriticalError(v32);
  }
  if ( v12 && *(_DWORD *)(v12 + 136) != v16 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v17, v19);
    v34[3] = 275LL;
    v34[4] = 25LL;
    v34[5] = *(int *)(v12 + 136);
    v34[6] = v16;
    v34[7] = 0LL;
    WdLogEvent5_WdCriticalError(v34);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v37 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  if ( (int)v18 < 0 )
    LODWORD(v22) = v18;
  else
    v22 = (v37 * (unsigned __int64)TimeIncrement - v10) / 0x2710;
  v23 = *(_QWORD *)(*((_QWORD *)this + 2) + 268LL);
  memset(&v38[1], 0, 36);
  HIDWORD(v38[6]) = a2->Flags;
  LODWORD(v38[7]) = a2->AffectedVidPnSourceId;
  v38[0] = 0x480000001ELL;
  LODWORD(v38[6]) = 86;
  HIDWORD(v38[7]) = v22;
  v38[8] = v23;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v38);
  v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v24);
  v25[3] = v18;
  v25[4] = a2->hFunctionalVidPn;
  v25[5] = a2->AffectedVidPnSourceId;
  v25[6] = a2->MonitorConnectivityChecks;
  v25[7] = a2->hPrimaryAllocation;
  WdLogEvent5_WdEvent(v25);
  if ( (_DWORD)v18 != -1073741801 && (_DWORD)v18 != -1071774920 && (_DWORD)v18 )
  {
    v35 = WdLogNewEntry5_WdError(v27, v26);
    *(_QWORD *)(v35 + 24) = v18;
    WdLogEvent5_WdError(v35);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v28, &EventProfilerExit, v29, 5009);
  return (unsigned int)v18;
}
