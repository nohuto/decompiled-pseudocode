/*
 * XREFs of ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00F4DB0
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0015818 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00F5048 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0147BFC (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C0147DBC (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C015998C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C015C1B4 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025104 (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C0025160 (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     McTemplateK0pt @ 0x1C0027C94 (McTemplateK0pt.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00A63DC (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00D936C (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01B6060 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C01B6D3C (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01B75B0 (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, int a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int8 v8; // r13
  __int64 v9; // r8
  __int64 v10; // r8
  DXGDODPRESENT *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rcx
  struct DXGPROCESS *Current; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int8 v20; // r13
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  DXGDODPRESENT *v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-48h]
  char v29; // [rsp+70h] [rbp+8h] BYREF
  int v30; // [rsp+78h] [rbp+10h]

  v30 = a2;
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7);
    v12[3] = 275LL;
    v12[4] = 4LL;
    v12[5] = a1;
    v12[6] = 0LL;
    v12[7] = 0LL;
    WdLogEvent5_WdCriticalError(v12);
  }
  if ( a2 == 3 )
  {
    Current = DXGPROCESS::GetCurrent(v7, v6);
    if ( !Current )
    {
      v17 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v17 + 24) = 3938LL;
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)&v29, Current);
    DXGPROCESS::AcquireDeviceLockForAllDevices(Current, (struct DXGADAPTER *)a1);
    v18 = *(_QWORD *)(a1 + 2464);
    if ( v18 && *(_QWORD *)(v18 + 528) )
      DXGPROCESS::FlushAllDevice(Current, (const struct DXGADAPTER *)a1);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 96));
    v20 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    if ( bTracingEnabled
      && (qword_1C0079010 & 0x1000000) != 0
      && (qword_1C0079010 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      McTemplateK0pt(&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v19, a1, 1);
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 1u);
    if ( bTracingEnabled
      && (qword_1C0079010 & 0x1000000) != 0
      && (qword_1C0079010 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      LODWORD(v28) = 1;
      McTemplateK0pt(&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v21, a1, v28);
    }
    if ( v20 && *(_DWORD *)(a1 + 176) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 192));
    ExReleasePushLockSharedEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
    v22 = *(_QWORD *)(a1 + 2464);
    v23 = v22;
    if ( v22 && *(_QWORD *)(v22 + 528) )
    {
      if ( *(_BYTE *)(v22 + 536) )
      {
        v24 = WdLogNewEntry5_WdAssertion(v22);
        *(_QWORD *)(v24 + 24) = 3992LL;
        WdLogEvent5_WdAssertion(v24);
        v22 = *(_QWORD *)(a1 + 2464);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)v22, 0, 0LL) < 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v25);
        *(_QWORD *)(v26 + 24) = 3994LL;
        WdLogEvent5_WdAssertion(v26);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 2464) + 536LL) = 1;
      v23 = *(_QWORD *)(a1 + 2464);
    }
    if ( !v23 )
    {
      v27 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2456) + 264LL);
      if ( v27 )
        DXGDODPRESENT::Flush(v27);
    }
    DXGPROCESS::ReleaseDeviceLockForAllDevices(Current, (struct DXGADAPTER *)a1);
    DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)&v29);
    goto LABEL_12;
  }
  if ( a3 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 96));
    v8 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    KeEnterCriticalRegion();
    if ( bTracingEnabled
      && (qword_1C0079010 & 0x1000000) != 0
      && (qword_1C0079010 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      McTemplateK0pt(&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v9, a1, 1);
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 1u);
    if ( bTracingEnabled
      && (qword_1C0079010 & 0x1000000) != 0
      && (qword_1C0079010 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      LODWORD(v28) = 1;
      McTemplateK0pt(&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v10, a1, v28);
    }
    if ( v8 && *(_DWORD *)(a1 + 176) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 192));
    ExReleasePushLockSharedEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
LABEL_11:
    if ( !*(_QWORD *)(a1 + 2464) )
    {
      v11 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2456) + 264LL);
      if ( v11 )
        DXGDODPRESENT::Flush(v11);
    }
LABEL_12:
    *(_DWORD *)(a1 + 152) = v30;
    return;
  }
  KeEnterCriticalRegion();
  if ( bTracingEnabled
    && (qword_1C0079010 & 0x1000000) != 0
    && (qword_1C0079010 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
  {
    McTemplateK0pt(&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v13, a1, 1);
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 0);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    if ( bTracingEnabled
      && (qword_1C0079010 & 0x1000000) != 0
      && (qword_1C0079010 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      LODWORD(v28) = 1;
      McTemplateK0pt(&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v14, a1, v28);
    }
    goto LABEL_11;
  }
  if ( bTracingEnabled
    && (qword_1C0079010 & 0x1000000) != 0
    && (qword_1C0079010 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
  {
    LODWORD(v28) = 0;
    McTemplateK0pt(&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v14, a1, v28);
  }
  KeLeaveCriticalRegion();
}
