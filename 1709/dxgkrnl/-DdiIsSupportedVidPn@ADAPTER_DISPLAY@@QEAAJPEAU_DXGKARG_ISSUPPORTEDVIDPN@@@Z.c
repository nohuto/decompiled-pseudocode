/*
 * XREFs of ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C00AA720
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00A842C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiIsSupportedVidPn(ADAPTER_DISPLAY *this, struct _DXGKARG_ISSUPPORTEDVIDPN *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  D3DKMDT_HVIDPN hDesiredVidPn; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // edi
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 *ThreadProperty; // rax
  __int64 *v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  __int64 v24; // rcx
  unsigned __int8 CurrentIrql; // r13
  __int64 v26; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v28; // rax
  int CurrentProcessSessionId; // ebp
  __int64 ThreadWin32Thread; // rax
  int v31; // r12d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // r8
  _QWORD *v36; // rax
  unsigned __int8 v37; // cl
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 IsVidPnSupported; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  int v46; // [rsp+24h] [rbp-84h]
  char v47[8]; // [rsp+28h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-78h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 8);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v5, &EventProfilerEnter, v6, 5025);
  hDesiredVidPn = a2->hDesiredVidPn;
  if ( !a2->hDesiredVidPn || *((_DWORD *)hDesiredVidPn + 16) != 1833172997 )
  {
    v42 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v42 + 24) = hDesiredVidPn;
    WdLogEvent5_WdError(v42);
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v43);
    v44[3] = -1071774973LL;
    v44[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
    v44[5] = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v44);
    v11 = -1071774973;
    goto LABEL_50;
  }
  if ( *((D3DKMDT_HVIDPN *)hDesiredVidPn + 15) == hDesiredVidPn + 30 )
  {
    v8 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v8 + 24) = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
    *(_QWORD *)(v8 + 32) = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v8);
    v11 = 0;
    a2->IsVidPnSupported = 1;
LABEL_50:
    LODWORD(v34) = v11;
    goto LABEL_51;
  }
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v13);
  v16 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v18 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v16 = *v18;
      }
    }
  }
  v19 = v16 + 112;
  v46 = 0;
  if ( !v16 )
    v19 = 0LL;
  if ( v19 && *(struct _KTHREAD **)(v19 + 8) == KeGetCurrentThread() )
  {
    v20 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v20 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( v16 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v19, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v23 = *(_DWORD *)(v19 + 16);
        if ( v23 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v21, &EventBlockThread, v22, v23);
      }
      ExAcquirePushLockExclusiveEx(v19, 0LL);
    }
    *(_QWORD *)(v19 + 8) = KeGetCurrentThread();
    v46 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  CurrentIrql = KeGetCurrentIrql();
  v26 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_36;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v28 = WdLogNewEntry5_WdAssertion(v24);
    *(_QWORD *)(v28 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v28);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v24);
  if ( !CurrentProcessSessionId
    || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId
    || IsThreadCrossSessionAttached()
    || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
    || !*(_QWORD *)ThreadWin32Thread )
  {
    v26 = 0LL;
    goto LABEL_36;
  }
  v26 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  if ( !v26 )
  {
LABEL_36:
    v31 = 0;
    goto LABEL_37;
  }
  v31 = *(_DWORD *)(v26 + 136);
LABEL_37:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v47,
    *((struct DXGADAPTER **)this + 2));
  v34 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ISSUPPORTEDVIDPN *))(*((_QWORD *)this + 2) + 472LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v47[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v35);
    v36[3] = 275LL;
    v36[4] = 16LL;
    v36[5] = this;
    v36[6] = CurrentIrql;
    v37 = KeGetCurrentIrql();
    v36[7] = v37;
    WdLogEvent5_WdCriticalError(v36);
  }
  if ( v26 && *(_DWORD *)(v26 + 136) != v31 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v35);
    v38[3] = 275LL;
    v38[4] = 25LL;
    v38[5] = *(int *)(v26 + 136);
    v38[6] = v31;
    v38[7] = 0LL;
    WdLogEvent5_WdCriticalError(v38);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v33, v32);
  v39[3] = v34;
  v39[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
  v39[5] = a2->hDesiredVidPn;
  IsVidPnSupported = a2->IsVidPnSupported;
  v39[6] = IsVidPnSupported;
  if ( (_DWORD)v34 != -1073741801 && (_DWORD)v34 )
  {
    v41 = WdLogNewEntry5_WdError(IsVidPnSupported);
    *(_QWORD *)(v41 + 24) = v34;
    WdLogEvent5_WdError(v41);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v46 == 2 )
  {
    *(_QWORD *)(v19 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v19, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_51:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 5025);
  return (unsigned int)v34;
}
