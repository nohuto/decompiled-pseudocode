/*
 * XREFs of ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C015D75C
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0211648 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
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
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiCommitVidPn(ADAPTER_DISPLAY *this, const struct _DXGKARG_COMMITVIDPN *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r13
  unsigned __int8 CurrentIrql; // r12
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v11; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v14; // esi
  __int64 v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int8 v18; // cl
  _QWORD *v19; // rax
  ULONG TimeIncrement; // eax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  int v31; // [rsp+20h] [rbp-89h] BYREF
  __int64 v32; // [rsp+28h] [rbp-81h]
  __int64 v33; // [rsp+30h] [rbp-79h]
  __int64 v34; // [rsp+38h] [rbp-71h]
  _QWORD v35[10]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v36[8]; // [rsp+90h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-11h] BYREF

  memset(v35, 0, 0x48uLL);
  v32 = 0LL;
  v31 = 5009;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v4, &EventProfilerEnter, v5, 5009);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 5009);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  v33 = MEMORY[0xFFFFF78000000320];
  v7 = v33 * KeQueryTimeIncrement();
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_14;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v11 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v11);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v9 = 0LL;
LABEL_14:
      v14 = 0;
      goto LABEL_15;
    }
    v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
    goto LABEL_14;
  v14 = *(_DWORD *)(v9 + 136);
LABEL_15:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v36,
    *((struct DXGADAPTER **)this + 2));
  v15 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_COMMITVIDPN *))(*((_QWORD *)this + 2) + 512LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v36[0] )
    KeUnstackDetachProcess(&ApcState);
  v16 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16);
    v17[3] = 275LL;
    v17[4] = 16LL;
    v17[5] = this;
    v17[6] = CurrentIrql;
    v18 = KeGetCurrentIrql();
    v17[7] = v18;
    WdLogEvent5_WdCriticalError(v17);
  }
  if ( v9 && *(_DWORD *)(v9 + 136) != v14 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16);
    v19[3] = 275LL;
    v19[4] = 38LL;
    v19[5] = *(int *)(v9 + 136);
    v19[6] = v14;
    v19[7] = 0LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
  v34 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  if ( (int)v15 < 0 )
    LODWORD(v21) = v15;
  else
    v21 = (v34 * (unsigned __int64)TimeIncrement - v7) / 0x2710;
  v22 = *(_QWORD *)(*((_QWORD *)this + 2) + 268LL);
  memset(&v35[1], 0, 36);
  HIDWORD(v35[6]) = a2->Flags;
  LODWORD(v35[7]) = a2->AffectedVidPnSourceId;
  v35[0] = 0x480000001ELL;
  LODWORD(v35[6]) = 86;
  HIDWORD(v35[7]) = v21;
  v35[8] = v22;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v35);
  v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v24, v23);
  v25[3] = v15;
  v25[4] = a2->hFunctionalVidPn;
  v25[5] = a2->AffectedVidPnSourceId;
  v25[6] = a2->MonitorConnectivityChecks;
  v25[7] = a2->hPrimaryAllocation;
  WdLogEvent5_WdEvent(v25);
  if ( (_DWORD)v15 != -1073741801 && (_DWORD)v15 != -1071774920 && (_DWORD)v15 )
  {
    v27 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v27 + 24) = v15;
    WdLogEvent5_WdError(v27);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v31);
  return (unsigned int)v15;
}
