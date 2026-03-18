/*
 * XREFs of ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C0084910
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001E28 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0084BB8 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0170C3C (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C0170DFC (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C017811C (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001E250 (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C001E2AC (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     McTemplateK0pt @ 0x1C0020B24 (McTemplateK0pt.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C007FD0C (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C0083CB8 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01B8D0C (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C01B988C (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01B9CAC (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, int a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int8 v9; // r13
  __int64 v10; // r8
  __int64 v11; // r8
  DXGDODPRESENT *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rcx
  struct DXGPROCESS *Current; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  DXGDODPRESENT *v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-48h]
  unsigned __int8 v29; // [rsp+70h] [rbp+8h]
  char v31; // [rsp+88h] [rbp+20h] BYREF

  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
    v13[3] = 275LL;
    v13[4] = 4LL;
    v13[5] = a1;
    v13[6] = 0LL;
    v13[7] = 0LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( a2 == 3 )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      v18 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v18 + 24) = 3913LL;
      WdLogEvent5_WdAssertion(v18);
    }
    KeEnterCriticalRegion();
    DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)&v31, Current);
    DXGPROCESS::AcquireDeviceLockForAllDevices(Current, (struct DXGADAPTER *)a1);
    v19 = *(_QWORD *)(a1 + 2312);
    if ( v19 && *(_QWORD *)(v19 + 512) )
      DXGPROCESS::FlushAllDevice(Current, (const struct DXGADAPTER *)a1);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 96));
    v29 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    if ( bTracingEnabled
      && (qword_1C005F010 & 0x1000000) != 0
      && (qword_1C005F010 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      McTemplateK0pt(&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v20, a1, 1);
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 1u);
    if ( bTracingEnabled
      && (qword_1C005F010 & 0x1000000) != 0
      && (qword_1C005F010 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      LODWORD(v28) = 1;
      McTemplateK0pt(&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v21, a1, v28);
    }
    if ( v29 && *(_DWORD *)(a1 + 176) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 192));
    ExReleasePushLockSharedEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
    v23 = *(_QWORD *)(a1 + 2312);
    if ( v23 && *(_QWORD *)(v23 + 512) )
    {
      if ( *(_BYTE *)(v23 + 520) )
      {
        v24 = WdLogNewEntry5_WdAssertion(v22);
        *(_QWORD *)(v24 + 24) = 3967LL;
        WdLogEvent5_WdAssertion(v24);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler(*(ADAPTER_RENDER **)(a1 + 2312), 0LL, 0LL) < 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v25);
        *(_QWORD *)(v26 + 24) = 3969LL;
        WdLogEvent5_WdAssertion(v26);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 2312) + 520LL) = 1;
    }
    if ( !*(_QWORD *)(a1 + 2312) )
    {
      v27 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2304) + 264LL);
      if ( v27 )
        DXGDODPRESENT::Flush(v27);
    }
    DXGPROCESS::ReleaseDeviceLockForAllDevices(Current, (struct DXGADAPTER *)a1);
    DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)&v31);
    goto LABEL_12;
  }
  if ( a3 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 96));
    v9 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    KeEnterCriticalRegion();
    if ( bTracingEnabled
      && (qword_1C005F010 & 0x1000000) != 0
      && (qword_1C005F010 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      McTemplateK0pt(&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v10, a1, 1);
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 1u);
    if ( bTracingEnabled
      && (qword_1C005F010 & 0x1000000) != 0
      && (qword_1C005F010 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      LODWORD(v28) = 1;
      McTemplateK0pt(&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v11, a1, v28);
    }
    if ( v9 && *(_DWORD *)(a1 + 176) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 192));
    ExReleasePushLockSharedEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
LABEL_11:
    if ( !*(_QWORD *)(a1 + 2312) )
    {
      v12 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2304) + 264LL);
      if ( v12 )
        DXGDODPRESENT::Flush(v12);
    }
LABEL_12:
    *(_DWORD *)(a1 + 152) = a2;
    return;
  }
  KeEnterCriticalRegion();
  if ( bTracingEnabled
    && (qword_1C005F010 & 0x1000000) != 0
    && (qword_1C005F010 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
  {
    McTemplateK0pt(&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v14, a1, 1);
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 0);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    if ( bTracingEnabled
      && (qword_1C005F010 & 0x1000000) != 0
      && (qword_1C005F010 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      LODWORD(v28) = 1;
      McTemplateK0pt(&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v15, a1, v28);
    }
    goto LABEL_11;
  }
  if ( bTracingEnabled
    && (qword_1C005F010 & 0x1000000) != 0
    && (qword_1C005F010 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
  {
    LODWORD(v28) = 0;
    McTemplateK0pt(&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v15, a1, v28);
  }
  KeLeaveCriticalRegion();
}
