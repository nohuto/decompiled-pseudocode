/*
 * XREFs of ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C017286C
 * Callers:
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01A7890 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000E814 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000E840 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C00204D4 (McTemplateK0p.c)
 *     McTemplateK0pt @ 0x1C0020B24 (McTemplateK0pt.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C0083DE0 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0171E20 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01764B0 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C017735C (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0177AA4 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01A6F60 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Reset(DXGADAPTER *this, ULONG_PTR BugCheckParameter1)
{
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  ADAPTER_RENDER *v16; // rcx
  struct _TDR_RECOVERY_CONTEXT *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  ADAPTER_DISPLAY *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v25; // [rsp+20h] [rbp-48h]
  char v26; // [rsp+70h] [rbp+8h] BYREF
  char v27; // [rsp+71h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+78h] [rbp+10h] BYREF
  union _LARGE_INTEGER v29; // [rsp+80h] [rbp+18h] BYREF
  struct _KTHREAD *v30; // [rsp+88h] [rbp+20h]

  if ( !BugCheckParameter1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 7045LL;
    WdLogEvent5_WdAssertion(v4);
  }
  CurrentThread = KeGetCurrentThread();
  v30 = CurrentThread;
  if ( !DXGADAPTER::IsDxgmms2(this) )
    KeSetEvent((PRKEVENT)this + 95, 0, 0);
  if ( !*((_QWORD *)this + 289) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 7061LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v27 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v26);
  if ( !DXGADAPTER::IsDxgmms2(this) )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 120, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 289), 4, 0xFFFFFFFF, 0);
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    *((_QWORD *)this + 16) = KeGetCurrentThread();
    if ( !KeResetEvent((PRKEVENT)this + 2) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v14 + 24) = 7182LL;
      WdLogEvent5_WdAssertion(v14);
    }
    if ( bTracingEnabled
      && (qword_1C005F010 & 0x1000000) != 0
      && (qword_1C005F010 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      McTemplateK0pt(&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v13, this, 1);
    }
    while ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 18), 0) )
    {
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 289), 4, 0xFFFFFFFF, 0);
      v29.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &v29);
    }
    if ( bTracingEnabled
      && (qword_1C005F010 & 0x1000000) != 0
      && (qword_1C005F010 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      LODWORD(v25) = 1;
      McTemplateK0pt(&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v15, this, v25);
    }
    *((_DWORD *)this + 38) = 2;
    goto LABEL_42;
  }
  *((_QWORD *)this + 290) = CurrentThread;
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
    v10 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v10 + 24) = 7096LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( bTracingEnabled
    && (qword_1C005F010 & 0x1000000) != 0
    && (qword_1C005F010 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
  {
    McTemplateK0pt(&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v9, this, 1);
  }
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 18), 1u);
  if ( bTracingEnabled
    && (qword_1C005F010 & 0x1000000) != 0
    && (qword_1C005F010 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
  {
    LODWORD(v25) = 1;
    McTemplateK0pt(&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v11, this, v25);
  }
  *((_DWORD *)this + 38) = 2;
  if ( !*(_QWORD *)(BugCheckParameter1 + 2896) )
  {
LABEL_24:
    KeSetEvent((PRKEVENT)this + 95, 0, 0);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 289) + 504LL) + 8LL) + 504LL))(
      *(_QWORD *)(*((_QWORD *)this + 289) + 512LL),
      *((_QWORD *)this + 290));
    DXGADAPTER::PrepareToReset(this, (struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 289), 4, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::FlushDeferredDestructions(*((ADAPTER_RENDER **)this + 289));
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 289) + 528LL) + 8LL) + 1120LL))(*(_QWORD *)(*((_QWORD *)this + 289) + 536LL));
    ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 289), 0, 0);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 289), 4, 0xFFFFFFFF, 0);
LABEL_42:
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 289), 4, 0xFFFFFFFF, 0);
    TdrCollectDbgInfoStage2((struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
    v16 = (ADAPTER_RENDER *)*((_QWORD *)this + 289);
    *((_BYTE *)this + 2269) = 0;
    if ( (int)ADAPTER_RENDER::Reset(v16, BugCheckParameter1) < 0 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v19 + 24) = 7223LL;
      WdLogEvent5_WdAssertion(v19);
    }
    v20 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 288);
    if ( v20 && (int)ADAPTER_DISPLAY::Reset(v20, v17) < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v22 + 24) = 7231LL;
      WdLogEvent5_WdAssertion(v22);
    }
    *((_QWORD *)this + 290) = 0LL;
    KeResetEvent((PRKEVENT)this + 95);
  }
  if ( !DXGADAPTER::IsDxgmms2(this) || *(struct _KTHREAD **)(BugCheckParameter1 + 2896) != v30 )
  {
    *((_QWORD *)this + 16) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled
      && (qword_1C005F010 & 0x1000000) != 0
      && (qword_1C005F010 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      McTemplateK0p(&DxgkControlGuid_Context, &EventReleaseAdapterLock, v23, this);
    }
    ExReleaseResourceLite(*((PERESOURCE *)this + 18));
    KeSetEvent((PRKEVENT)this + 2, 0, 0);
  }
LABEL_56:
  if ( v27 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v26);
  return 0LL;
}
