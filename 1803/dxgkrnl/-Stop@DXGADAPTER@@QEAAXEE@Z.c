/*
 * XREFs of ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C014FAAC
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C01F11D0 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C01F60B0 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C01FAB88 (DpiFdoStopAdapter.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0007C84 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007E1C (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000904C (_TlgCreateWsz.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C0029978 (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0032ED8 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C00A6504 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C00A6564 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F51FC (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C0147DBC (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01489E8 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C0148DE4 (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C0157B18 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C015BF48 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 */

void __fastcall DXGADAPTER::Stop(DXGADAPTER *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // bl
  __int64 v6; // rax
  const WCHAR *v7; // rdx
  unsigned __int16 *v8; // rax
  int v9; // ecx
  int v10; // r10d
  LPCGUID v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  KSPIN_LOCK *Global; // rax
  ADAPTER_DISPLAY *v17; // rcx
  ADAPTER_RENDER *v18; // rcx
  BOOLEAN v19; // bl
  BOOLEAN v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int16 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int16 DriverVersion; // [rsp+42h] [rbp-BEh] BYREF
  unsigned int v26; // [rsp+44h] [rbp-BCh] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v31; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+5Ch] [rbp-A4h] BYREF
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v34[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int16 *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  _DWORD *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int64 v41; // [rsp+C0h] [rbp-40h]
  _DWORD v42[2]; // [rsp+C8h] [rbp-38h] BYREF
  char *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  char *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  char *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  char *v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]
  _DWORD *v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  char *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  __int16 *p_DriverVersion; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  int *v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  int *v60; // [rsp+160h] [rbp+60h]
  __int64 v61; // [rsp+168h] [rbp+68h]
  unsigned int *v62; // [rsp+170h] [rbp+70h]
  __int64 v63; // [rsp+178h] [rbp+78h]
  int *v64; // [rsp+180h] [rbp+80h]
  __int64 v65; // [rsp+188h] [rbp+88h]
  unsigned int *v66; // [rsp+190h] [rbp+90h]
  __int64 v67; // [rsp+198h] [rbp+98h]
  int *v68; // [rsp+1A0h] [rbp+A0h]
  __int64 v69; // [rsp+1A8h] [rbp+A8h]
  unsigned int *v70; // [rsp+1B0h] [rbp+B0h]
  __int64 v71; // [rsp+1B8h] [rbp+B8h]
  int *v72; // [rsp+1C0h] [rbp+C0h]
  __int64 v73; // [rsp+1C8h] [rbp+C8h]

  v4 = a2;
  v6 = WdLogNewEntry5_WdEvent(this, a2);
  *(_QWORD *)(v6 + 24) = this;
  WdLogEvent5_WdEvent(v6);
  DXGADAPTER::GetAdapterType(this, (int *)&v26);
  v34[0] = *((_DWORD *)this + 67);
  v34[1] = *((_DWORD *)this + 68);
  if ( dword_1C0079090 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0079090, 0x400000000800uLL) )
  {
    v7 = (const WCHAR *)*((_QWORD *)this + 177);
    v39 = v42;
    v37 = &v24;
    v8 = (unsigned __int16 *)*((_QWORD *)this + 168);
    v24 = 1;
    v38 = 2LL;
    v40 = 2LL;
    v9 = *v8;
    v41 = *((_QWORD *)v8 + 1);
    v43 = (char *)this + 276;
    v45 = (char *)this + 280;
    v47 = (char *)this + 284;
    v49 = (char *)this + 288;
    v42[0] = v9;
    v51 = v34;
    v42[1] = 0;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 8LL;
    TlgCreateWsz(&pDesc, v7);
    v55 = 8LL;
    v54 = (char *)this + 1424;
    DriverVersion = DXGADAPTER::GetDriverVersion(this);
    p_DriverVersion = &DriverVersion;
    v27 = *((unsigned __int8 *)this + 2311);
    v58 = &v27;
    v28 = *((unsigned __int8 *)this + 2316);
    v60 = &v28;
    v57 = 2LL;
    v29 = (v26 >> 2) & 1;
    v62 = &v29;
    v30 = v26 & 1;
    v31 = (v26 >> 1) & 1;
    v59 = 4LL;
    v66 = &v31;
    v68 = &v32;
    v70 = &v26;
    v33 = v4;
    v72 = &v33;
    v61 = 4LL;
    v63 = 4LL;
    v64 = &v30;
    v65 = 4LL;
    v67 = 4LL;
    v32 = v10;
    v69 = 4LL;
    v71 = 4LL;
    v73 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0079090, &unk_1C0058091, 0LL, v11, 0x15u, &pData);
  }
  KeSetEvent((PRKEVENT)((char *)this + 2432), 0, 0);
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 7932LL;
    WdLogEvent5_WdAssertion(v13);
  }
  *((_DWORD *)this + 44) = 5;
  if ( !*((_BYTE *)this + 185) )
  {
    v14 = *((_QWORD *)this + 308);
    if ( v14 )
    {
      if ( v4 )
      {
        *(_BYTE *)(v14 + 777) = 1;
        ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 308), 1, 1);
      }
    }
  }
  DXGADAPTER::AcquireLocksForStop(this, &v35);
  if ( !*((_BYTE *)this + 185) )
  {
    v15 = *((_QWORD *)this + 308);
    if ( v15 )
    {
      ADAPTER_RENDER::FlushScheduler(v15, 5, 0xFFFFFFFF, 0);
      ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 308), 1u, 0);
      ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 308), 0, 1);
    }
    if ( *((_BYTE *)this + 182) )
    {
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v15);
      DXGGLOBAL::SetSchedulerCrossAdapterData(Global, 0LL);
    }
  }
  v17 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 307);
  if ( v17 )
    ADAPTER_DISPLAY::Stop(v17, a3);
  v18 = (ADAPTER_RENDER *)*((_QWORD *)this + 308);
  if ( v18 )
    ADAPTER_RENDER::Stop(v18, v4, a3);
  if ( *((_QWORD *)this + 372) )
  {
    *((_BYTE *)this + 2934) = 1;
    v19 = KeCancelTimer((PKTIMER)((char *)this + 3048));
    v20 = KeCancelTimer((PKTIMER)((char *)this + 3880));
    if ( !v19 || !v20 )
      KeFlushQueuedDpcs();
    if ( !KeCancelTimer((PKTIMER)((char *)this + 3048)) )
      KeFlushQueuedDpcs();
    PoUnregisterPowerSettingCallback(*((PVOID *)this + 372));
    *((_QWORD *)this + 372) = 0LL;
  }
  if ( a3 )
  {
    *((_DWORD *)this + 44) = 4;
  }
  else
  {
    if ( *((_BYTE *)this + 2937)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED, 0LL, 0LL, 0LL, 0LL, 0LL);
      *((_BYTE *)this + 2937) = 0;
    }
    DXGADAPTER::Destroy(this);
    *((_DWORD *)this + 44) = 2;
    DXGADAPTER::ReleaseReferenceNoTracking(this);
  }
  *((_QWORD *)this + 167) = 0LL;
  *((_QWORD *)this + 177) = 0LL;
  DXGADAPTER::ReleaseCoreResource(this);
  DXGADAPTER::ReleaseReferenceNoTracking(this);
  *((_QWORD *)this + 16) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  v23 = WdLogNewEntry5_WdEvent(v22, v21);
  *(_QWORD *)(v23 + 24) = this;
  WdLogEvent5_WdEvent(v23);
}
