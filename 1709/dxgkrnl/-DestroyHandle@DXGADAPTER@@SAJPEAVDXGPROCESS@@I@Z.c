/*
 * XREFs of ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00F3984
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E72C0 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E761C (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z @ 0x1C00EF660 (-DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z.c)
 *     ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C017E140 (-DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0191610 (-VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C008A1A4 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C008A250 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

__int64 __fastcall DXGADAPTER::DestroyHandle(struct DXGPROCESS *this, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct ADAPTER_RENDER *v10; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // rax
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !this )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v12 + 24) = 3203LL;
    WdLogEvent5_WdAssertion(v12);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v18, this);
  if ( (*((_BYTE *)this + 307) & 8) != 0 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*((_QWORD *)this + 55) + 200LL));
    v13 = *((_QWORD *)this + 55);
    v14 = (a2 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < *(_DWORD *)(v13 + 240)
      && (v15 = *(_QWORD *)(v13 + 224),
          v16 = *(_DWORD *)(v15 + 16 * v14 + 8),
          ((a2 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60))
      && (v16 & 0x2000) == 0
      && (v16 & 0x1F) != 0
      && (*(_BYTE *)(v15 + 16LL * (unsigned int)v14 + 8) & 0x1F) == 1 )
    {
      v7 = *(_QWORD *)(v15 + 16LL * (unsigned int)v14);
    }
    else
    {
      v7 = 0LL;
    }
    ExReleasePushLockSharedEx(v13 + 200, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v4 = (a2 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v4 < *((_DWORD *)this + 60)
      && (v5 = *((_QWORD *)this + 28),
          v6 = *(_DWORD *)(v5 + 16 * v4 + 8),
          ((a2 >> 25) & 0x60) == (*(_BYTE *)(v5 + 16 * v4 + 8) & 0x60))
      && (v6 & 0x2000) == 0
      && (v6 & 0x1F) != 0
      && (*(_BYTE *)(v5 + 16LL * (unsigned int)v4 + 8) & 0x1F) == 1 )
    {
      v7 = *(_QWORD *)(v5 + 16LL * (unsigned int)v4);
    }
    else
    {
      v7 = 0LL;
    }
  }
  if ( v7 )
  {
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)this + 224), a2);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v7 + 120, 0LL);
    v10 = *(struct ADAPTER_RENDER **)(v7 + 2312);
    if ( v10 )
    {
      if ( *(_DWORD *)(v7 + 200) == -1 )
      {
        v17 = WdLogNewEntry5_WdWarning(v8, v10, v9);
        *(_QWORD *)(v17 + 24) = 3233LL;
        WdLogEvent5_WdWarning(v17);
      }
      else
      {
        DXGPROCESS::CloseAdapter(this, v10);
      }
    }
    ExReleasePushLockSharedEx(v7 + 120, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v7);
    return 0LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
    return 3221225485LL;
  }
}
