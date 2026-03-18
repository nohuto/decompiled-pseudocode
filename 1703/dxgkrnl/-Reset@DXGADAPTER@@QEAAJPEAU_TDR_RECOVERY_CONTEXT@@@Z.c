/*
 * XREFs of ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C016F098
 * Callers:
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0192D80 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0012C04 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0012C30 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     Template_p @ 0x1C0013458 (Template_p.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C00CD27C (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C016E650 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0172B78 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0173978 (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0173FB4 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0192440 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Reset(DXGADAPTER *this, ULONG_PTR BugCheckParameter1, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  ADAPTER_RENDER *v32; // rcx
  struct _TDR_RECOVERY_CONTEXT *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  ADAPTER_DISPLAY *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v47; // [rsp+20h] [rbp-58h]
  char v48; // [rsp+80h] [rbp+8h] BYREF
  char v49; // [rsp+81h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+88h] [rbp+10h] BYREF
  union _LARGE_INTEGER v51; // [rsp+90h] [rbp+18h] BYREF
  struct _KTHREAD *v52; // [rsp+98h] [rbp+20h]

  if ( !BugCheckParameter1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v6 + 24) = 6939LL;
    WdLogEvent5_WdAssertion(v6);
  }
  CurrentThread = KeGetCurrentThread();
  v52 = CurrentThread;
  if ( !DXGADAPTER::IsDxgmms2(this) )
    KeSetEvent((PRKEVENT)this + 94, 0, 0);
  if ( !*((_QWORD *)this + 286) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 6955LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v49 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v48, v8, v10, v11);
  if ( !DXGADAPTER::IsDxgmms2(this) )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 120, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 286), 4, 0xFFFFFFFF, 0);
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    *((_QWORD *)this + 16) = KeGetCurrentThread();
    if ( !KeResetEvent((PRKEVENT)this + 2) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
      *(_QWORD *)(v29 + 24) = 7076LL;
      WdLogEvent5_WdAssertion(v29);
    }
    if ( bTracingEnabled
      && (qword_1C006E790 & 0x1000000) != 0
      && (qword_1C006E790 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      Template_xq(v26, &EventPreAcquireAdapterLock, v27, this, 1);
    }
    while ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 18), 0) )
    {
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 286), 4, 0xFFFFFFFF, 0);
      v51.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &v51);
    }
    if ( bTracingEnabled
      && (qword_1C006E790 & 0x1000000) != 0
      && (qword_1C006E790 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v47) = 1;
      Template_xq(v30, &EventPostAcquireAdapterLock, v31, this, v47);
    }
    *((_DWORD *)this + 38) = 2;
    goto LABEL_42;
  }
  *((_QWORD *)this + 287) = CurrentThread;
  if ( CurrentThread == *(struct _KTHREAD **)(BugCheckParameter1 + 2896) )
    goto LABEL_24;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 120, 0LL);
  *((_QWORD *)this + 16) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 44) != 1 )
  {
    *((_QWORD *)this + 16) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_56;
  }
  if ( !KeResetEvent((PRKEVENT)this + 2) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    *(_QWORD *)(v20 + 24) = 6990LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( bTracingEnabled
    && (qword_1C006E790 & 0x1000000) != 0
    && (qword_1C006E790 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    Template_xq(v17, &EventPreAcquireAdapterLock, v18, this, 1);
  }
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 18), 1u);
  if ( bTracingEnabled
    && (qword_1C006E790 & 0x1000000) != 0
    && (qword_1C006E790 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    LODWORD(v47) = 1;
    Template_xq(v21, &EventPostAcquireAdapterLock, v22, this, v47);
  }
  *((_DWORD *)this + 38) = 2;
  if ( !*(_QWORD *)(BugCheckParameter1 + 2896) )
  {
LABEL_24:
    KeSetEvent((PRKEVENT)this + 94, 0, 0);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 286) + 408LL) + 8LL) + 504LL))(
      *(_QWORD *)(*((_QWORD *)this + 286) + 416LL),
      *((_QWORD *)this + 287));
    DXGADAPTER::PrepareToReset(this, (struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1, v23, v24);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 286), 4, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::FlushDeferredDestructions(*((ADAPTER_RENDER **)this + 286));
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 286) + 432LL) + 8LL) + 1120LL))(*(_QWORD *)(*((_QWORD *)this + 286) + 440LL));
    ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 286), 0, 0);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 286), 4, 0xFFFFFFFF, 0);
LABEL_42:
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 286), 4, 0xFFFFFFFF, 0);
    TdrCollectDbgInfoStage2((struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
    v32 = (ADAPTER_RENDER *)*((_QWORD *)this + 286);
    *((_BYTE *)this + 2244) = 0;
    if ( (int)ADAPTER_RENDER::Reset(v32, BugCheckParameter1) < 0 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
      *(_QWORD *)(v37 + 24) = 7117LL;
      WdLogEvent5_WdAssertion(v37);
    }
    v38 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 285);
    if ( v38 && (int)ADAPTER_DISPLAY::Reset(v38, v33) < 0 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
      *(_QWORD *)(v43 + 24) = 7125LL;
      WdLogEvent5_WdAssertion(v43);
    }
    *((_QWORD *)this + 287) = 0LL;
    KeResetEvent((PRKEVENT)this + 94);
    CurrentThread = v52;
  }
  if ( !DXGADAPTER::IsDxgmms2(this) || *(struct _KTHREAD **)(BugCheckParameter1 + 2896) != CurrentThread )
  {
    *((_QWORD *)this + 16) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled
      && (qword_1C006E790 & 0x1000000) != 0
      && (qword_1C006E790 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      Template_p(v44, &EventReleaseAdapterLock, v45, this);
    }
    ExReleaseResourceLite(*((PERESOURCE *)this + 18));
    KeSetEvent((PRKEVENT)this + 2, 0, 0);
  }
LABEL_56:
  if ( v49 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v48, v13, v14, v15);
  return 0LL;
}
