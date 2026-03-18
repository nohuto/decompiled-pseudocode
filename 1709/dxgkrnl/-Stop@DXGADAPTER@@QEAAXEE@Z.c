/*
 * XREFs of ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0172EE4
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 *     DpiPowerArbiterThread @ 0x1C0121B80 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C01DE1E0 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStopAdapter @ 0x1C01DEF64 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C0022104 (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0028464 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C0083DE0 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C0083E40 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C0170DFC (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0170FCC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C0171380 (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C0176AD4 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0177F14 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 */

void __fastcall DXGADAPTER::Stop(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // si
  unsigned __int8 v5; // bl
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  KSPIN_LOCK *Global; // rax
  ADAPTER_DISPLAY *v13; // rcx
  ADAPTER_RENDER *v14; // rcx
  BOOLEAN v15; // bl
  BOOLEAN v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a2;
  v7 = WdLogNewEntry5_WdEvent(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = this;
  WdLogEvent5_WdEvent(v7);
  KeSetEvent((PRKEVENT)this + 95, 0, 0);
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 7502LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *((_DWORD *)this + 44) = 5;
  if ( !*((_BYTE *)this + 185) )
  {
    v10 = *((_QWORD *)this + 289);
    if ( v10 )
    {
      if ( v5 )
      {
        *(_BYTE *)(v10 + 761) = 1;
        ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 289), 1, 1);
      }
    }
  }
  DXGADAPTER::AcquireLocksForStop(this, &v22);
  if ( !*((_BYTE *)this + 185) )
  {
    v11 = *((_QWORD *)this + 289);
    if ( v11 )
    {
      ADAPTER_RENDER::FlushScheduler(v11, 5, 0xFFFFFFFF, 0);
      ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 289), 1u, 0);
      ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 289), 0, 1);
    }
    if ( *((_BYTE *)this + 182) )
    {
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v11);
      DXGGLOBAL::SetSchedulerCrossAdapterData(Global, 0LL);
    }
  }
  v13 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 288);
  if ( v13 )
    ADAPTER_DISPLAY::Stop(v13, v4);
  v14 = (ADAPTER_RENDER *)*((_QWORD *)this + 289);
  if ( v14 )
    ADAPTER_RENDER::Stop(v14, v5, v4);
  if ( *((_QWORD *)this + 353) )
  {
    *((_BYTE *)this + 2782) = 1;
    v15 = KeCancelTimer((PKTIMER)((char *)this + 2896));
    v16 = KeCancelTimer((PKTIMER)((char *)this + 3720));
    if ( !v15 || !v16 )
      KeFlushQueuedDpcs();
    if ( !KeCancelTimer((PKTIMER)((char *)this + 2896)) )
      KeFlushQueuedDpcs();
    PoUnregisterPowerSettingCallback(*((PVOID *)this + 353));
    *((_QWORD *)this + 353) = 0LL;
  }
  if ( v4 )
  {
    *((_DWORD *)this + 44) = 4;
  }
  else
  {
    if ( *((_BYTE *)this + 2785)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED, 0LL, 0LL, 0LL, 0LL, 0LL);
      *((_BYTE *)this + 2785) = 0;
    }
    DXGADAPTER::Destroy(this);
    *((_DWORD *)this + 44) = 2;
    DXGADAPTER::ReleaseReferenceNoTracking(this);
  }
  *((_QWORD *)this + 155) = 0LL;
  *((_QWORD *)this + 165) = 0LL;
  DXGADAPTER::ReleaseCoreResource((PERESOURCE *)this);
  DXGADAPTER::ReleaseReferenceNoTracking(this);
  if ( *((_QWORD *)this + 289) )
  {
    *((_QWORD *)this + 16) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  v21 = WdLogNewEntry5_WdEvent(v18, v17, v19, v20);
  *(_QWORD *)(v21 + 24) = this;
  WdLogEvent5_WdEvent(v21);
}
