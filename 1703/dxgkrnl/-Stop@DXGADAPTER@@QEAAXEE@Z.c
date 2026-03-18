/*
 * XREFs of ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C016F704
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 *     DpiPowerArbiterThread @ 0x1C0122680 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C01C4780 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStopAdapter @ 0x1C01C545C (DpiFdoStopAdapter.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C0023D50 (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0038458 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C00CD27C (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C00CD2DC (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C016D678 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C016D848 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C016DBB0 (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C017317C (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0174384 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 */

void __fastcall DXGADAPTER::Stop(DXGADAPTER *this, unsigned __int8 a2, unsigned __int8 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  KSPIN_LOCK *Global; // rax
  ADAPTER_DISPLAY *v18; // rcx
  ADAPTER_RENDER *v19; // rcx
  BOOLEAN v20; // bl
  BOOLEAN v21; // al
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v6 = WdLogNewEntry5_WdEvent(this);
  *(_QWORD *)(v6 + 24) = this;
  WdLogEvent5_WdEvent(v6);
  KeSetEvent((PRKEVENT)this + 94, 0, 0);
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 7403LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *((_DWORD *)this + 44) = 5;
  if ( !*((_BYTE *)this + 186) )
  {
    v12 = *((_QWORD *)this + 286);
    if ( v12 )
    {
      if ( a2 )
      {
        *(_BYTE *)(v12 + 665) = 1;
        ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 286), 1, 1);
      }
    }
  }
  DXGADAPTER::AcquireLocksForStop(this, &v24);
  if ( !*((_BYTE *)this + 186) )
  {
    v16 = *((_QWORD *)this + 286);
    if ( v16 )
    {
      ADAPTER_RENDER::FlushScheduler(v16, 5, 0xFFFFFFFF, 0);
      ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 286), 1u, 0);
      ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 286), 0, 1);
    }
    if ( *((_BYTE *)this + 183) )
    {
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v16, v13, v14, v15);
      DXGGLOBAL::SetSchedulerCrossAdapterData(Global, 0LL);
    }
  }
  v18 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 285);
  if ( v18 )
    ADAPTER_DISPLAY::Stop(v18, a3);
  v19 = (ADAPTER_RENDER *)*((_QWORD *)this + 286);
  if ( v19 )
    ADAPTER_RENDER::Stop(v19, a2, a3);
  if ( *((_QWORD *)this + 350) )
  {
    *((_BYTE *)this + 2758) = 1;
    v20 = KeCancelTimer((PKTIMER)((char *)this + 2872));
    v21 = KeCancelTimer((PKTIMER)((char *)this + 3704));
    if ( !v20 || !v21 )
      KeFlushQueuedDpcs();
    if ( !KeCancelTimer((PKTIMER)((char *)this + 2872)) )
      KeFlushQueuedDpcs();
    PoUnregisterPowerSettingCallback(*((PVOID *)this + 350));
    *((_QWORD *)this + 350) = 0LL;
  }
  if ( a3 )
  {
    *((_DWORD *)this + 44) = 4;
  }
  else
  {
    if ( *((_BYTE *)this + 2761)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED, 0LL, 0LL, 0LL, 0LL, 0LL);
      *((_BYTE *)this + 2761) = 0;
    }
    DXGADAPTER::Destroy(this);
    *((_DWORD *)this + 44) = 2;
    DXGADAPTER::ReleaseReference(this);
  }
  *((_QWORD *)this + 152) = 0LL;
  *((_QWORD *)this + 162) = 0LL;
  DXGADAPTER::ReleaseCoreResource((PERESOURCE *)this);
  DXGADAPTER::ReleaseReference(this);
  if ( *((_QWORD *)this + 286) )
  {
    *((_QWORD *)this + 16) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  v23 = WdLogNewEntry5_WdEvent(v22);
  *(_QWORD *)(v23 + 24) = this;
  WdLogEvent5_WdEvent(v23);
}
