/*
 * XREFs of ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00D3304
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0005C88 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D357C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C016D4B4 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C016D678 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C017458C (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002144C (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C00214A8 (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00A0370 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00CD184 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A15A8 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C01A1CEC (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A1F4C (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, int a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int8 v9; // r12
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGDODPRESENT *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct DXGPROCESS *Current; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned __int8 v27; // r12
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  DXGDODPRESENT *v41; // rcx
  __int64 v42; // [rsp+20h] [rbp-48h]
  char v43; // [rsp+70h] [rbp+8h] BYREF
  int v44; // [rsp+78h] [rbp+10h]

  v44 = a2;
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
    v14[3] = 275LL;
    v14[4] = 4LL;
    v14[5] = a1;
    v14[6] = 0LL;
    v14[7] = 0LL;
    WdLogEvent5_WdCriticalError(v14);
  }
  if ( a2 == 3 )
  {
    Current = DXGPROCESS::GetCurrent(v7);
    if ( !Current )
    {
      v24 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
      *(_QWORD *)(v24 + 24) = 3826LL;
      WdLogEvent5_WdAssertion(v24);
    }
    KeEnterCriticalRegion();
    DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)&v43, Current);
    DXGPROCESS::AcquireDeviceLockForAllDevices(Current, (struct DXGADAPTER *)a1);
    v25 = *(_QWORD *)(a1 + 2288);
    if ( v25 && *(_QWORD *)(v25 + 416) )
      DXGPROCESS::FlushAllDevice(Current, (const struct DXGADAPTER *)a1);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 96));
    v27 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    if ( bTracingEnabled
      && (qword_1C006E790 & 0x1000000) != 0
      && (qword_1C006E790 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      Template_xq(qword_1C006E790, &EventPreAcquireAdapterLock, v26, a1, 1);
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 1u);
    if ( bTracingEnabled
      && (qword_1C006E790 & 0x1000000) != 0
      && (qword_1C006E790 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v42) = 1;
      Template_xq(v28, &EventPostAcquireAdapterLock, v29, a1, v42);
    }
    if ( v27 && *(_DWORD *)(a1 + 176) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 192));
    ExReleasePushLockSharedEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
    v34 = *(_QWORD *)(a1 + 2288);
    if ( v34 && *(_QWORD *)(v34 + 416) )
    {
      if ( *(_BYTE *)(v34 + 424) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
        *(_QWORD *)(v35 + 24) = 3880LL;
        WdLogEvent5_WdAssertion(v35);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler(*(ADAPTER_RENDER **)(a1 + 2288), 0, 0LL) < 0 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
        *(_QWORD *)(v40 + 24) = 3882LL;
        WdLogEvent5_WdAssertion(v40);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 2288) + 424LL) = 1;
    }
    if ( !*(_QWORD *)(a1 + 2288) )
    {
      v41 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2280) + 264LL);
      if ( v41 )
        DXGDODPRESENT::Flush(v41);
    }
    DXGPROCESS::ReleaseDeviceLockForAllDevices(Current, (struct DXGADAPTER *)a1);
    DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)&v43);
    goto LABEL_10;
  }
  if ( a3 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 96));
    v9 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    KeEnterCriticalRegion();
    if ( bTracingEnabled
      && (qword_1C006E790 & 0x1000000) != 0
      && (qword_1C006E790 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      Template_xq(qword_1C006E790, &EventPreAcquireAdapterLock, v10, a1, 1);
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 1u);
    if ( bTracingEnabled
      && (qword_1C006E790 & 0x1000000) != 0
      && (qword_1C006E790 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v42) = 1;
      Template_xq(v11, &EventPostAcquireAdapterLock, v12, a1, v42);
    }
    if ( v9 && *(_DWORD *)(a1 + 176) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 192));
    ExReleasePushLockSharedEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
LABEL_9:
    if ( !*(_QWORD *)(a1 + 2288) )
    {
      v13 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2280) + 264LL);
      if ( v13 )
        DXGDODPRESENT::Flush(v13);
    }
LABEL_10:
    *(_DWORD *)(a1 + 152) = v44;
    return;
  }
  KeEnterCriticalRegion();
  if ( bTracingEnabled
    && (qword_1C006E790 & 0x1000000) != 0
    && (qword_1C006E790 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    Template_xq(v15, &EventPreAcquireAdapterLock, v16, a1, 1);
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 0);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    if ( bTracingEnabled
      && (qword_1C006E790 & 0x1000000) != 0
      && (qword_1C006E790 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v42) = 1;
      Template_xq(v17, &EventPostAcquireAdapterLock, v18, a1, v42);
    }
    goto LABEL_9;
  }
  if ( bTracingEnabled
    && (qword_1C006E790 & 0x1000000) != 0
    && (qword_1C006E790 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    LODWORD(v42) = 0;
    Template_xq(v17, &EventPostAcquireAdapterLock, v18, a1, v42);
  }
  KeLeaveCriticalRegion();
}
