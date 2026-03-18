/*
 * XREFs of ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68
 * Callers:
 *     ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x1C0029664 (--1DXGPROTECTEDSESSION@@QEAA@XZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00A1CA0 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00B03EC (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00B5E80 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkShareObjects @ 0x1C00BEEE0 (DxgkShareObjects.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00EDA00 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00F0AC0 (DxgkOpenResourceFromNtHandle.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C00F9970 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0176FAC (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0177F14 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0191FB0 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192CB0 (-VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateProtectedSession @ 0x1C01BC230 (DxgkCreateProtectedSession.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01C5A48 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01D4FF0 (-DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01D5214 (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C008A250 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C008B2C0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0196474 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1C01BF740 (-FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C01BF8A4 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

void __fastcall DXGGLOBAL::DestroySyncObject(PERESOURCE *this, struct DXGSYNCOBJECT *a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  PERESOURCE *v12; // rbx
  char *v13; // rcx
  int v14; // eax
  struct DXGGLOBAL *v15; // rax
  __int64 v16; // rcx
  __int64 CurrentProcess; // rax
  __int64 v18; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v20; // rcx
  unsigned __int8 v21; // r8
  __int64 v22; // rsi
  _QWORD *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rbx
  volatile signed __int64 *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  struct DXGSYNCOBJECT *v33; // rax
  struct DXGSYNCOBJECT **v34; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  struct DXGSYNCOBJECT *v43; // rax
  char *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v48; // rbx
  __int64 v49; // rcx
  unsigned int HostHandle; // r14d
  unsigned int v51; // ebx
  struct DXGGLOBAL *v52; // rax
  int v53; // r9d
  __int64 v54; // rax
  __int64 *v55; // rax
  __int64 *v56; // rsi
  __int64 v57; // rax
  int v58; // r9d
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  PERESOURCE *v63; // [rsp+40h] [rbp-20h] BYREF
  char v64; // [rsp+48h] [rbp-18h]
  _BYTE v65[16]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v66; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v67; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a3;
  if ( !a2 )
  {
    v38 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v38 + 24) = 2279LL;
    WdLogEvent5_WdAssertion(v38);
  }
  if ( ExIsResourceAcquiredExclusiveLite(this[42]) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v39 + 24) = 2280LL;
    WdLogEvent5_WdAssertion(v39);
  }
  Global = DXGGLOBAL::GetGlobal(v6);
  v63 = (PERESOURCE *)Global;
  v64 = 0;
  if ( !Global )
  {
    v40 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v40 + 24) = 1946LL;
    WdLogEvent5_WdAssertion(v40);
    Global = (struct DXGGLOBAL *)v63;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 42)) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v41 + 24) = 1951LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( v64 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11);
    v42[5] = &v63;
    v42[3] = 275LL;
    v42[4] = 4LL;
    v42[6] = 0LL;
    v42[7] = 0LL;
    WdLogEvent5_WdCriticalError(v42);
  }
  v12 = v63;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v12[42], 1u);
  v14 = *((_DWORD *)a2 + 41) >> 2;
  v64 = 1;
  if ( (v14 & 1) != 0 && (unsigned int)(*((_DWORD *)a2 + 40) - 5) > 1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v65, (struct DXGSYNCOBJECT *)((char *)a2 + 32));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v65);
    v13 = (char *)a2 + 248;
    v43 = (struct DXGSYNCOBJECT *)*((_QWORD *)a2 + 31);
    v44 = (char *)v43 - 40;
    if ( v43 == (struct DXGSYNCOBJECT *)((char *)a2 + 248) )
      v44 = 0LL;
    if ( v44 )
    {
      v67 = *((_QWORD *)v44 + 4);
      if ( v67 )
      {
        v45 = *((_QWORD *)v44 + 2);
        v66 = -1LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v45 + 504)
                                                                                                  + 8LL)
                                                                                      + 544LL))(
          0LL,
          0LL,
          1LL,
          &v67,
          0,
          &v66);
      }
    }
    if ( v65[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v65);
  }
  v15 = DXGGLOBAL::GetGlobal((__int64)v13);
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v15 + 42)) )
  {
    v46 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v46 + 24) = 2015LL;
    WdLogEvent5_WdAssertion(v46);
  }
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v18);
  v22 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v48 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v22 = *v48;
      }
    }
  }
  if ( (_DWORD)v3 )
  {
    if ( *((_BYTE *)a2 + 241) )
    {
      HostHandle = DXGSYNCOBJECT::GetHostHandle(a2, v3, v21);
      if ( HostHandle )
      {
        v51 = *(_DWORD *)(v22 + 424);
        v52 = DXGGLOBAL::GetGlobal(v49);
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(*((DXG_GUEST_GLOBAL_VMBUS **)v52 + 142), v51, HostHandle);
        DXGSYNCOBJECT::FreeHostHandle(a2, v3);
      }
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v22 + 200, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v53 = *(_DWORD *)(v22 + 216);
        if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v36, &EventBlockThread, v37, v53);
      }
      ExAcquirePushLockExclusiveEx(v22 + 200, 0LL);
    }
    *(_QWORD *)(v22 + 208) = KeGetCurrentThread();
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v22 + 224), v3);
    *(_QWORD *)(v22 + 208) = 0LL;
    ExReleasePushLockExclusiveEx(v22 + 200, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !*((_DWORD *)a2 + 6) )
  {
    v54 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v54 + 24) = 2041LL;
    WdLogEvent5_WdAssertion(v54);
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v23[3] = a2;
  v23[4] = v3;
  v24 = PsGetCurrentProcess();
  v26 = PsGetProcessDxgProcess(v24, v25);
  v27 = v26;
  if ( v26 )
  {
    if ( (*(_BYTE *)(v26 + 307) & 4) != 0 )
    {
      v55 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v56 = v55;
      if ( v55 )
      {
        ObfDereferenceObject(v55);
        v27 = *v56;
      }
    }
  }
  v23[5] = v27;
  WdLogEvent5_WdEvent(v23);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 6, 0xFFFFFFFF) == 1 )
  {
    v28 = (volatile signed __int64 *)(this + 35);
    KeEnterCriticalRegion();
    if ( this[36] == (PERESOURCE)KeGetCurrentThread() )
    {
      if ( *((int *)this + 76) <= 0 )
      {
        v57 = WdLogNewEntry5_WdAssertion(v30);
        *(_QWORD *)(v57 + 24) = 362LL;
        WdLogEvent5_WdAssertion(v57);
      }
      ++*((_DWORD *)this + 76);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(this + 37, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v58 = *((_DWORD *)this + 77);
          if ( v58 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v32, &EventBlockThread, v31, v58);
        }
        _InterlockedIncrement64(v28);
        ExAcquirePushLockExclusiveEx(this + 37, 0LL);
      }
      if ( this[36] )
      {
        v59 = WdLogNewEntry5_WdAssertion(v32);
        *(_QWORD *)(v59 + 24) = 386LL;
        WdLogEvent5_WdAssertion(v59);
      }
      if ( *((_DWORD *)this + 76) )
      {
        v60 = WdLogNewEntry5_WdAssertion(v32);
        *(_QWORD *)(v60 + 24) = 387LL;
        WdLogEvent5_WdAssertion(v60);
      }
      this[36] = (PERESOURCE)KeGetCurrentThread();
      *((_DWORD *)this + 76) = 1;
    }
    v33 = *(struct DXGSYNCOBJECT **)a2;
    if ( *(struct DXGSYNCOBJECT **)(*(_QWORD *)a2 + 8LL) != a2
      || (v34 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 1), *v34 != a2) )
    {
      __fastfail(3u);
    }
    *v34 = v33;
    *((_QWORD *)v33 + 1) = v34;
    if ( this[36] != (PERESOURCE)KeGetCurrentThread() )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v29, v31);
      v61[3] = 275LL;
      v61[4] = 4LL;
      v61[5] = v28;
      v61[6] = 0LL;
      v61[7] = 0LL;
      WdLogEvent5_WdCriticalError(v61);
    }
    if ( *((int *)this + 76) <= 0 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v34);
      *(_QWORD *)(v62 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v62);
    }
    if ( (*((_DWORD *)this + 76))-- == 1 )
    {
      this[36] = 0LL;
      ExReleasePushLockExclusiveEx(this + 37, 0LL);
    }
    KeLeaveCriticalRegion();
    DXGSYNCOBJECT::Destroy(a2);
  }
  if ( v64 )
  {
    v64 = 0;
    ExReleaseResourceLite(v63[42]);
    KeLeaveCriticalRegion();
  }
}
