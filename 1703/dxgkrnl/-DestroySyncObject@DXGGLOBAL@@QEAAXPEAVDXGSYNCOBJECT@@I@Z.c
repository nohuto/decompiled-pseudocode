/*
 * XREFs of ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D81F0
 * Callers:
 *     ?VmBusDestroyNtSharedObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002CFC0 (-VmBusDestroyNtSharedObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C008B780 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0095510 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     DxgkShareObjects @ 0x1C009D2D0 (DxgkShareObjects.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00D73B0 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00FF678 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C0100890 (DxgkOpenResourceFromNtHandle.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C0100E40 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01735BC (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0174384 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01ABFE8 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01BC984 (-DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01BCB60 (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00D7240 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00D8724 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::DestroySyncObject(PERESOURCE *this, struct DXGSYNCOBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  PERESOURCE *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  PERESOURCE *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  PERESOURCE *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 CurrentProcess; // rax
  __int64 v27; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rsi
  _QWORD *v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rbp
  volatile signed __int64 *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  struct DXGSYNCOBJECT *v46; // rcx
  struct DXGSYNCOBJECT **v47; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  struct DXGSYNCOBJECT *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 *ThreadProperty; // rax
  int v63; // r9d
  __int64 v64; // rax
  __int64 *v65; // rax
  __int64 v66; // rax
  int v67; // r9d
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rax
  PERESOURCE *v72; // [rsp+40h] [rbp-48h] BYREF
  char v73; // [rsp+48h] [rbp-40h]
  _BYTE v74[56]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v75; // [rsp+90h] [rbp+8h] BYREF
  __int64 v76; // [rsp+98h] [rbp+10h] BYREF

  v5 = (unsigned int)a3;
  if ( !a2 )
  {
    v52 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v52 + 24) = 2184LL;
    WdLogEvent5_WdAssertion(v52);
  }
  if ( ExIsResourceAcquiredExclusiveLite(this[42]) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v53 + 24) = 2185LL;
    WdLogEvent5_WdAssertion(v53);
  }
  v11 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v54 = WdLogNewEntry5_WdAssertion(0LL, v7, v9, v10);
    *(_QWORD *)(v54 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v54);
    v11 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
  }
  v72 = v11;
  v73 = 0;
  if ( !v11 )
  {
    v55 = WdLogNewEntry5_WdAssertion(0LL, v7, v9, v10);
    *(_QWORD *)(v55 + 24) = 1823LL;
    WdLogEvent5_WdAssertion(v55);
    v11 = v72;
  }
  if ( ExIsResourceAcquiredSharedLite(v11[42]) )
  {
    v56 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v56 + 24) = 1828LL;
    WdLogEvent5_WdAssertion(v56);
  }
  if ( v73 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v14);
    v57[5] = &v72;
    v57[3] = 275LL;
    v57[4] = 4LL;
    v57[6] = 0LL;
    v57[7] = 0LL;
    WdLogEvent5_WdCriticalError(v57);
  }
  v16 = v72;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v16[42], 1u);
  v20 = *((_DWORD *)a2 + 37) >> 2;
  v73 = 1;
  if ( (v20 & 1) != 0 && (unsigned int)(*((_DWORD *)a2 + 36) - 5) > 1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v74, (struct DXGSYNCOBJECT *)((char *)a2 + 32), v18, v19);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v74);
    v58 = (struct DXGSYNCOBJECT *)*((_QWORD *)a2 + 29);
    v17 = (__int64)v58 - 40;
    if ( v58 == (struct DXGSYNCOBJECT *)((char *)a2 + 232) )
      v17 = 0LL;
    if ( v17 )
    {
      v76 = *(_QWORD *)(v17 + 32);
      if ( v76 )
      {
        v59 = *(_QWORD *)(v17 + 16);
        v75 = -1LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v59 + 408)
                                                                                                  + 8LL)
                                                                                      + 544LL))(
          0LL,
          0LL,
          1LL,
          &v76,
          0,
          &v75);
      }
    }
    if ( v74[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v74, v17, v18, v19);
  }
  v21 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v60 = WdLogNewEntry5_WdAssertion(0LL, v17, v18, v19);
    *(_QWORD *)(v60 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v60);
    v21 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
  }
  if ( !ExIsResourceAcquiredExclusiveLite(v21[42]) )
  {
    v61 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
    *(_QWORD *)(v61 + 24) = 1945LL;
    WdLogEvent5_WdAssertion(v61);
  }
  CurrentProcess = PsGetCurrentProcess(v23);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v27);
  v33 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v33 = *ThreadProperty;
    }
  }
  if ( (_DWORD)v5 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v33 + 168, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v63 = *(_DWORD *)(v33 + 184);
        if ( v63 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v49, &EventBlockThread, v50, v63);
      }
      ExAcquirePushLockExclusiveEx(v33 + 168, 0LL);
    }
    *(_QWORD *)(v33 + 176) = KeGetCurrentThread();
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v33 + 192), (unsigned int)v5, v50, v51);
    *(_QWORD *)(v33 + 176) = 0LL;
    ExReleasePushLockExclusiveEx(v33 + 168, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !*((_DWORD *)a2 + 6) )
  {
    v64 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
    *(_QWORD *)(v64 + 24) = 1961LL;
    WdLogEvent5_WdAssertion(v64);
  }
  v34 = (_QWORD *)WdLogNewEntry5_WdEvent(v30);
  v34[3] = a2;
  v34[4] = v5;
  v36 = PsGetCurrentProcess(v35);
  v38 = PsGetProcessDxgProcess(v36, v37);
  v39 = v38;
  if ( v38 )
  {
    if ( (*(_BYTE *)(v38 + 275) & 2) != 0 )
    {
      v65 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( v65 )
        v39 = *v65;
    }
  }
  v34[5] = v39;
  WdLogEvent5_WdEvent(v34);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 6, 0xFFFFFFFF) == 1 )
  {
    v40 = (volatile signed __int64 *)(this + 35);
    KeEnterCriticalRegion();
    if ( this[36] == (PERESOURCE)KeGetCurrentThread() )
    {
      if ( *((int *)this + 76) <= 0 )
      {
        v66 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
        *(_QWORD *)(v66 + 24) = 351LL;
        WdLogEvent5_WdAssertion(v66);
      }
      ++*((_DWORD *)this + 76);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(this + 37, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v67 = *((_DWORD *)this + 77);
          if ( v67 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v45, &EventBlockThread, v43, v67);
        }
        _InterlockedIncrement64(v40);
        ExAcquirePushLockExclusiveEx(this + 37, 0LL);
      }
      if ( this[36] )
      {
        v68 = WdLogNewEntry5_WdAssertion(v45, v41, v43, v44);
        *(_QWORD *)(v68 + 24) = 375LL;
        WdLogEvent5_WdAssertion(v68);
      }
      if ( *((_DWORD *)this + 76) )
      {
        v69 = WdLogNewEntry5_WdAssertion(v45, v41, v43, v44);
        *(_QWORD *)(v69 + 24) = 376LL;
        WdLogEvent5_WdAssertion(v69);
      }
      this[36] = (PERESOURCE)KeGetCurrentThread();
      *((_DWORD *)this + 76) = 1;
    }
    v46 = *(struct DXGSYNCOBJECT **)a2;
    v47 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 1);
    if ( *(struct DXGSYNCOBJECT **)(*(_QWORD *)a2 + 8LL) != a2 || *v47 != a2 )
      __fastfail(3u);
    *v47 = v46;
    *((_QWORD *)v46 + 1) = v47;
    if ( this[36] != (PERESOURCE)KeGetCurrentThread() )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v41, v43);
      v70[3] = 275LL;
      v70[4] = 4LL;
      v70[5] = v40;
      v70[6] = 0LL;
      v70[7] = 0LL;
      WdLogEvent5_WdCriticalError(v70);
    }
    if ( *((int *)this + 76) <= 0 )
    {
      v71 = WdLogNewEntry5_WdAssertion(v46, v41, v43, v44);
      *(_QWORD *)(v71 + 24) = 395LL;
      WdLogEvent5_WdAssertion(v71);
    }
    if ( (*((_DWORD *)this + 76))-- == 1 )
    {
      this[36] = 0LL;
      ExReleasePushLockExclusiveEx(this + 37, 0LL);
    }
    KeLeaveCriticalRegion();
    DXGSYNCOBJECT::Destroy(a2);
  }
  if ( v73 )
  {
    v73 = 0;
    ExReleaseResourceLite(v72[42]);
    KeLeaveCriticalRegion();
  }
}
