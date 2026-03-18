/*
 * XREFs of ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C010EAD8
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CCDE0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100890 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010E280 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@PEAVD.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01B3E20 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01DA37C (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
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
 */

__int64 __fastcall ADAPTER_RENDER::DdiPresent(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_PRESENT *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rbx
  __int64 *ThreadProperty; // rax
  __int64 *v11; // rdi
  int v12; // r12d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v20; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v22; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v25; // ebp
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  _QWORD *v31; // rax
  unsigned __int8 v32; // cl
  _QWORD *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 DmaSize; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  int v42; // [rsp+28h] [rbp-90h] BYREF
  __int64 v43; // [rsp+30h] [rbp-88h]
  char v44[8]; // [rsp+38h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  v43 = 0LL;
  v42 = 5031;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 5031);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v42, 5031);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v11 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v11;
      }
    }
  }
  v12 = 0;
  v13 = (v9 + 120) & -(__int64)(v9 != 0);
  if ( v13 && *(struct _KTHREAD **)(((v9 + 120) & -(__int64)(v9 != 0)) + 8) == KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9 + 120);
    *(_QWORD *)(v14 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( v9 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((v9 + 120) & -(__int64)(v9 != 0), 0LL) )
    {
      if ( bTracingEnabled )
      {
        v17 = *(_DWORD *)(((v9 + 120) & -(__int64)(v9 != 0)) + 0x10);
        if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v15, &EventBlockThread, v16, v17);
      }
      ExAcquirePushLockExclusiveEx((v9 + 120) & -(__int64)(v9 != 0), 0LL);
    }
    v12 = 2;
    *(_QWORD *)(((v9 + 120) & -(__int64)(v9 != 0)) + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
  CurrentIrql = KeGetCurrentIrql();
  v20 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_29;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v22 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v22 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v22);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v20 = 0LL;
LABEL_29:
      v25 = 0;
      goto LABEL_30;
    }
    v20 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v20 )
    goto LABEL_29;
  v25 = *(_DWORD *)(v20 + 136);
LABEL_30:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v44,
    *((struct DXGADAPTER **)this + 2));
  v27 = (*(int (__fastcall **)(void *, struct _DXGKARG_PRESENT *))(*((_QWORD *)this + 2) + 608LL))(a2, a3);
  if ( v44[0] )
    KeUnstackDetachProcess(&ApcState);
  v30 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v30 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30);
    v31[3] = 275LL;
    v31[4] = 16LL;
    v31[5] = this;
    v31[6] = CurrentIrql;
    v32 = KeGetCurrentIrql();
    v31[7] = v32;
    WdLogEvent5_WdCriticalError(v31);
  }
  if ( v20 && *(_DWORD *)(v20 + 136) != v25 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30);
    v33[3] = 275LL;
    v33[4] = 38LL;
    v34 = *(int *)(v20 + 136);
    v33[7] = 0LL;
    v33[5] = v34;
    v33[6] = v25;
    WdLogEvent5_WdCriticalError(v33);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
  v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v26, v28, v29);
  v35[3] = v27;
  v35[4] = a2;
  v35[5] = a3->SubRectCnt;
  v35[6] = a3->pDmaBuffer;
  DmaSize = a3->DmaSize;
  v35[7] = DmaSize;
  if ( (unsigned int)(v27 + 1073741816) > 0x15
    || (DmaSize = 2129921LL, !_bittest((const int *)&DmaSize, v27 + 1073741816)) )
  {
    if ( (_DWORD)v27 != -1073741674
      && (_DWORD)v27 != -1073741670
      && (_DWORD)v27 != -1071775743
      && (_DWORD)v27 != -1071775736
      && (_DWORD)v27 != -1071775232
      && (_DWORD)v27 )
    {
      v37 = WdLogNewEntry5_WdError(DmaSize);
      *(_QWORD *)(v37 + 24) = v27;
      WdLogEvent5_WdError(v37);
    }
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v12 == 2 )
  {
    *(_QWORD *)(v13 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v38, &EventProfilerExit, v39, v42);
  return (unsigned int)v27;
}
