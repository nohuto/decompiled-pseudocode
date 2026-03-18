/*
 * XREFs of ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0145FF8
 * Callers:
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00CFDF0 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01808D0 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C01DEDF4 (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C01DF0B0 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001694C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C0016A9C (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00F8E90 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DXGGLOBAL::OpenSyncObject(
        PERESOURCE *this,
        unsigned int a2,
        struct DXGSYNCOBJECT **a3,
        unsigned int *a4,
        struct DXGADAPTERSYNCOBJECT **a5)
{
  __int64 v5; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct DXGPROCESS *Current; // rax
  char v15; // cl
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // edx
  DXGSYNCOBJECT *ObjectA; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v27; // rax
  __int64 result; // rax
  _BYTE v29[16]; // [rsp+60h] [rbp-18h] BYREF

  v5 = a2;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 2499LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 2500LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 2501LL;
    WdLogEvent5_WdAssertion(v13);
  }
  *a3 = 0LL;
  *a4 = 0;
  Current = DXGPROCESS::GetCurrent(v12, v11);
  v15 = *((_BYTE *)Current + 323);
  if ( (v15 & 0xC) != 0 )
  {
    if ( (v15 & 8) != 0 )
      v16 = *((_QWORD *)Current + 57);
    else
      v16 = (unsigned __int64)Current & -(__int64)((v15 & 4) != 0);
    v17 = v16 + 208;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v16 + 208));
    v18 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v18 < *(_DWORD *)(v16 + 248)
      && (v19 = *(_QWORD *)(v16 + 232),
          v20 = *(_DWORD *)(v19 + 16 * v18 + 8),
          (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60))
      && (v20 & 0x2000) == 0
      && (v20 & 0x1F) == 8 )
    {
      ObjectA = *(DXGSYNCOBJECT **)(v19 + 16LL * (unsigned int)v18);
    }
    else
    {
      ObjectA = 0LL;
    }
    ExReleasePushLockSharedEx(v17, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v29);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
    Global = DXGGLOBAL::GetGlobal(v25);
    ObjectA = (DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, v5, 8);
    if ( v29[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
  }
  if ( !ObjectA )
  {
    v27 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v27 + 24) = v5;
LABEL_26:
    WdLogEvent5_WdWarning(v27);
    return 3221225485LL;
  }
  if ( (unsigned int)(*((_DWORD *)ObjectA + 42) - 5) <= 1 )
  {
    v27 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v27 + 24) = 2534LL;
    goto LABEL_26;
  }
  result = DXGSYNCOBJECT::Open(
             ObjectA,
             0LL,
             0LL,
             0LL,
             a4,
             0LL,
             0LL,
             0,
             a5,
             0,
             (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
  if ( (int)result >= 0 )
    *a3 = ObjectA;
  return result;
}
