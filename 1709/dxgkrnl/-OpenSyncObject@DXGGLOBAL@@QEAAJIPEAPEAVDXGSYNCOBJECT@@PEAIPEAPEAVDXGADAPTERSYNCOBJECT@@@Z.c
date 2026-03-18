/*
 * XREFs of ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016F7BC
 * Callers:
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00EDA00 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01944A0 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01D6074 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C00030B4 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C000320C (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C008AB70 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // edx
  DXGSYNCOBJECT *ObjectA; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v25; // rax
  __int64 result; // rax
  _BYTE v27[16]; // [rsp+60h] [rbp-28h] BYREF

  v5 = a2;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 2337LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 2338LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 2339LL;
    WdLogEvent5_WdAssertion(v13);
  }
  *a3 = 0LL;
  *a4 = 0;
  Current = DXGPROCESS::GetCurrent(v12, v11);
  if ( (*((_BYTE *)Current + 307) & 8) != 0 )
  {
    v15 = *((_QWORD *)Current + 55);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 200));
    v16 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v16 < *(_DWORD *)(v15 + 240)
      && (v17 = *(_QWORD *)(v15 + 224),
          v18 = *(_DWORD *)(v17 + 16 * v16 + 8),
          (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60))
      && (v18 & 0x2000) == 0
      && (v18 & 0x1F) != 0
      && (*(_BYTE *)(v17 + 16LL * (unsigned int)v16 + 8) & 0x1F) == 8 )
    {
      ObjectA = *(DXGSYNCOBJECT **)(v17 + 16LL * (unsigned int)v16);
    }
    else
    {
      ObjectA = 0LL;
    }
    ExReleasePushLockSharedEx(v15 + 200, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v27);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    Global = DXGGLOBAL::GetGlobal(v23);
    ObjectA = (DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, v5, 8);
    if ( v27[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
  }
  if ( !ObjectA )
  {
    v25 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v25 + 24) = v5;
LABEL_24:
    WdLogEvent5_WdWarning(v25);
    return 3221225485LL;
  }
  if ( (unsigned int)(*((_DWORD *)ObjectA + 40) - 5) <= 1 )
  {
    v25 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v25 + 24) = 2372LL;
    goto LABEL_24;
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
