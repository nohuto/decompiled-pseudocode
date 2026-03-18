/*
 * XREFs of ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84
 * Callers:
 *     ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x1C0034728 (--1DXGPROTECTEDSESSION@@QEAA@XZ.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00ACEA0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00BD4FC (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00CFDF0 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00D44B0 (DxgkOpenResourceFromNtHandle.c)
 *     DxgkShareObjectsInternal @ 0x1C00D54D8 (DxgkShareObjectsInternal.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C00DD6F0 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00E5B10 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01594B8 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C015BF48 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C017B3F4 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186740 (-VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01868E0 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateProtectedSession @ 0x1C01BAD20 (DxgkCreateProtectedSession.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01C84D8 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C01DE11C (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C01DE1B0 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C00F962C (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00F9720 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::DestroySyncObject(PERESOURCE *this, struct DXGSYNCOBJECT *a2, unsigned int a3)
{
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  PERESOURCE *v10; // rbx
  int v11; // eax
  struct DXGSYNCOBJECT *v12; // rcx
  struct DXGSYNCOBJECT **v13; // rax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  struct DXGSYNCOBJECT *v21; // rax
  char *v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  PERESOURCE *v26; // [rsp+50h] [rbp-20h] BYREF
  char v27; // [rsp+58h] [rbp-18h]
  _BYTE v28[16]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+38h] BYREF

  if ( !a2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v16 + 24) = 2441LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( ExIsResourceAcquiredExclusiveLite(this[43]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v17 + 24) = 2442LL;
    WdLogEvent5_WdAssertion(v17);
  }
  Global = DXGGLOBAL::GetGlobal(v6);
  v26 = (PERESOURCE *)Global;
  v27 = 0;
  if ( !Global )
  {
    v18 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v18 + 24) = 2138LL;
    WdLogEvent5_WdAssertion(v18);
    Global = (struct DXGGLOBAL *)v26;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v19 + 24) = 2143LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( v27 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9);
    v20[5] = &v26;
    v20[3] = 275LL;
    v20[4] = 4LL;
    v20[6] = 0LL;
    v20[7] = 0LL;
    WdLogEvent5_WdCriticalError(v20);
  }
  v10 = v26;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v10[43], 1u);
  v11 = *((_DWORD *)a2 + 43) >> 2;
  v27 = 1;
  if ( (v11 & 1) != 0 && (unsigned int)(*((_DWORD *)a2 + 42) - 5) > 1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGSYNCOBJECT *)((char *)a2 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
    v21 = (struct DXGSYNCOBJECT *)*((_QWORD *)a2 + 33);
    v22 = (char *)v21 - 40;
    if ( v21 == (struct DXGSYNCOBJECT *)((char *)a2 + 264) )
      v22 = 0LL;
    if ( v22 )
    {
      v30 = *((_QWORD *)v22 + 4);
      if ( v30 )
      {
        v23 = *((_QWORD *)v22 + 2);
        v29 = -1LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v23 + 520) + 8LL)
                                                                                                  + 648LL))(
          0LL,
          0LL,
          0LL,
          0LL,
          1,
          &v30,
          0,
          &v29);
      }
    }
    if ( v28[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
  }
  if ( DXGSYNCOBJECT::Close(a2, a3) )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 36));
    v12 = *(struct DXGSYNCOBJECT **)a2;
    if ( *(struct DXGSYNCOBJECT **)(*(_QWORD *)a2 + 8LL) != a2
      || (v13 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 1), *v13 != a2) )
    {
      __fastfail(3u);
    }
    *v13 = v12;
    *((_QWORD *)v12 + 1) = v13;
    if ( this[37] != (PERESOURCE)KeGetCurrentThread() )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12);
      v24[3] = 275LL;
      v24[4] = 4LL;
      v24[5] = this + 36;
      v24[6] = 0LL;
      v24[7] = 0LL;
      WdLogEvent5_WdCriticalError(v24);
    }
    v14 = *((_DWORD *)this + 78);
    if ( v14 <= 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v25 + 24) = 450LL;
      WdLogEvent5_WdAssertion(v25);
      v14 = *((_DWORD *)this + 78);
    }
    v15 = v14 - 1;
    *((_DWORD *)this + 78) = v15;
    if ( !v15 )
    {
      this[37] = 0LL;
      ExReleasePushLockExclusiveEx(this + 38, 0LL);
    }
    KeLeaveCriticalRegion();
    DXGSYNCOBJECT::Destroy(a2);
  }
  if ( v27 )
  {
    v27 = 0;
    ExReleaseResourceLite(v26[43]);
    KeLeaveCriticalRegion();
  }
}
