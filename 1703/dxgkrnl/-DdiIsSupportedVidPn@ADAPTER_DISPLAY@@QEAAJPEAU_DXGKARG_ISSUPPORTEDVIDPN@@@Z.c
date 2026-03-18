/*
 * XREFs of ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C00E5700
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4658 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C00F2800 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00F6860 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01D2F08 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01D3250 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiIsSupportedVidPn(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_ISSUPPORTEDVIDPN *a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int32 *v4; // rax
  D3DKMDT_HVIDPN hDesiredVidPn; // rbx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rdi
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v28; // r13d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 IsVidPnSupported; // rcx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // r15d
  __int64 *ThreadProperty; // rax
  __int64 v44; // rax
  int v45; // r9d
  __int64 v46; // rax
  _QWORD *v47; // rax
  unsigned __int8 v48; // cl
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  _QWORD *v54; // rax
  unsigned __int8 CurrentIrql; // [rsp+28h] [rbp-80h]
  char v56[8]; // [rsp+30h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-70h] BYREF

  v4 = (volatile signed __int32 *)DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v40 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v40 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v40);
    v4 = (volatile signed __int32 *)DXGGLOBAL::m_pGlobal;
  }
  _InterlockedIncrement(v4 + 8);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5025);
  hDesiredVidPn = a2->hDesiredVidPn;
  if ( !a2->hDesiredVidPn || *((_DWORD *)hDesiredVidPn + 16) != 1833172997 )
  {
    v51 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v51 + 24) = hDesiredVidPn;
    WdLogEvent5_WdError(v51);
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52);
    v54[3] = -1071774973LL;
    v54[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
    v54[5] = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v54);
    v42 = -1071774973;
    goto LABEL_54;
  }
  if ( *((D3DKMDT_HVIDPN *)hDesiredVidPn + 15) == hDesiredVidPn + 30 )
  {
    v41 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v41 + 24) = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
    *(_QWORD *)(v41 + 32) = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v41);
    v42 = 0;
    a2->IsVidPnSupported = 1;
LABEL_54:
    LODWORD(v31) = v42;
    goto LABEL_38;
  }
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v9);
  v15 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v15 = *ThreadProperty;
    }
  }
  if ( v15 )
    v16 = v15 + 88;
  else
    v16 = 0LL;
  v17 = 0;
  if ( v16 && *(struct _KTHREAD **)(v16 + 8) == KeGetCurrentThread() )
  {
    v44 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v44 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( v15 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v45 = *(_DWORD *)(v16 + 16);
        if ( v45 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v18, &EventBlockThread, v19, v45);
      }
      ExAcquirePushLockExclusiveEx(v16, 0LL);
    }
    v17 = 2;
    *(_QWORD *)(v16 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v24 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_41;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v46 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
    *(_QWORD *)(v46 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v46);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v21, v20, v22, v23);
  if ( !CurrentProcessSessionId
    || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId
    || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
    || !*(_QWORD *)ThreadWin32Thread )
  {
    v24 = 0LL;
    goto LABEL_41;
  }
  v24 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  if ( !v24 )
  {
LABEL_41:
    v28 = 0;
    goto LABEL_26;
  }
  v28 = *(_DWORD *)(v24 + 136);
LABEL_26:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v56,
    *((struct DXGADAPTER **)this + 2));
  v31 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ISSUPPORTEDVIDPN *))(*((_QWORD *)this + 2) + 472LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v56[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v32);
    v47[3] = 275LL;
    v47[4] = 16LL;
    v47[5] = this;
    v47[6] = CurrentIrql;
    v48 = KeGetCurrentIrql();
    v47[7] = v48;
    WdLogEvent5_WdCriticalError(v47);
  }
  if ( v24 && *(_DWORD *)(v24 + 136) != v28 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v32);
    v49[3] = 275LL;
    v49[4] = 25LL;
    v49[5] = *(int *)(v24 + 136);
    v49[6] = v28;
    v49[7] = 0LL;
    WdLogEvent5_WdCriticalError(v49);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v29, v32, v33);
  v34[3] = v31;
  v35 = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
  v34[4] = v35;
  v34[5] = a2->hDesiredVidPn;
  IsVidPnSupported = a2->IsVidPnSupported;
  v34[6] = IsVidPnSupported;
  if ( (_DWORD)v31 != -1073741801 && (_DWORD)v31 )
  {
    v50 = WdLogNewEntry5_WdError(IsVidPnSupported, v35);
    *(_QWORD *)(v50 + 24) = v31;
    WdLogEvent5_WdError(v50);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v17 == 2 )
  {
    *(_QWORD *)(v16 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_38:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v37, &EventProfilerExit, v38, 5025);
  return (unsigned int)v31;
}
