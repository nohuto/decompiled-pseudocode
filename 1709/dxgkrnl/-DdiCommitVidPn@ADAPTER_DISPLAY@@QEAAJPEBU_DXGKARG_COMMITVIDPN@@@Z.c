/*
 * XREFs of ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C00AB084
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00A790C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
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
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int8 v20; // cl
  _QWORD *v21; // rax
  ULONG TimeIncrement; // eax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // [rsp+20h] [rbp-79h]
  __int64 v32; // [rsp+28h] [rbp-71h]
  _QWORD v33[10]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v34[8]; // [rsp+80h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF

  memset(v33, 0, 0x48uLL);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v4, &EventProfilerEnter, v5, 5009);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  v31 = MEMORY[0xFFFFF78000000320];
  v7 = v31 * KeQueryTimeIncrement();
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
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
    (DXGVALIDATIONPROCESSATTACH *)v34,
    *((struct DXGADAPTER **)this + 2));
  v16 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_COMMITVIDPN *))(*((_QWORD *)this + 2) + 512LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v34[0] )
    KeUnstackDetachProcess(&ApcState);
  v18 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v18 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v15, v17);
    v19[3] = 275LL;
    v19[4] = 16LL;
    v19[5] = this;
    v19[6] = CurrentIrql;
    v20 = KeGetCurrentIrql();
    v19[7] = v20;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( v9 && *(_DWORD *)(v9 + 136) != v14 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v15, v17);
    v21[3] = 275LL;
    v21[4] = 25LL;
    v21[5] = *(int *)(v9 + 136);
    v21[6] = v14;
    v21[7] = 0LL;
    WdLogEvent5_WdCriticalError(v21);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  v32 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  if ( (int)v16 < 0 )
    LODWORD(v23) = v16;
  else
    v23 = (v32 * (unsigned __int64)TimeIncrement - v7) / 0x2710;
  v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 268LL);
  memset(&v33[1], 0, 36);
  HIDWORD(v33[6]) = a2->Flags;
  LODWORD(v33[7]) = a2->AffectedVidPnSourceId;
  v33[0] = 0x480000001ELL;
  LODWORD(v33[6]) = 86;
  HIDWORD(v33[7]) = v23;
  v33[8] = v24;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v33);
  v25 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v25[3] = v16;
  v25[4] = a2->hFunctionalVidPn;
  v25[5] = a2->AffectedVidPnSourceId;
  v25[6] = a2->MonitorConnectivityChecks;
  v25[7] = a2->hPrimaryAllocation;
  WdLogEvent5_WdEvent(v25);
  if ( (_DWORD)v16 != -1073741801 && (_DWORD)v16 != -1071774920 && (_DWORD)v16 )
  {
    v27 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v27 + 24) = v16;
    WdLogEvent5_WdError(v27);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, 5009);
  return (unsigned int)v16;
}
