/*
 * XREFs of ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C009FA34
 * Callers:
 *     ?VmBusCloseAdapter@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002BBE0 (-VmBusCloseAdapter@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z @ 0x1C0095FC0 (-DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z.c)
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C0097CB0 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C009800C (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C017A760 (-DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00061C0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00D5E34 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00D7240 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

__int64 __fastcall DXGADAPTER::DestroyHandle(struct DXGPROCESS *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v6; // edx
  __int64 v7; // r9
  int v8; // r8d
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct ADAPTER_RENDER *v13; // rdx
  __int64 v15; // rax
  __int64 v16; // r10
  unsigned int v17; // edx
  __int64 v18; // r9
  int v19; // r8d
  __int64 v20; // rax
  _BYTE v21[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  if ( !this )
  {
    v15 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 3124LL;
    WdLogEvent5_WdAssertion(v15);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v21, this, a3, a4);
  if ( (*((_BYTE *)this + 275) & 4) != 0 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*((_QWORD *)this + 50) + 168LL));
    v16 = *((_QWORD *)this + 50);
    v17 = (v4 >> 6) & 0xFFFFFF;
    if ( v17 < *(_DWORD *)(v16 + 208)
      && (v18 = *(_QWORD *)(v16 + 192),
          v19 = *(_DWORD *)(v18 + 16LL * v17 + 8),
          ((v4 >> 26) & 0x30) == (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x30))
      && (v19 & 0x1000) == 0
      && (v19 & 0xF) != 0
      && (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0xF) == 1 )
    {
      v9 = *(_QWORD *)(v18 + 16LL * v17);
    }
    else
    {
      v9 = 0LL;
    }
    ExReleasePushLockSharedEx(v16 + 168, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v6 = (v4 >> 6) & 0xFFFFFF;
    if ( v6 < *((_DWORD *)this + 52)
      && (v7 = *((_QWORD *)this + 24),
          v8 = *(_DWORD *)(v7 + 16LL * v6 + 8),
          ((v4 >> 26) & 0x30) == (*(_BYTE *)(v7 + 16LL * v6 + 8) & 0x30))
      && (v8 & 0x1000) == 0
      && (v8 & 0xF) != 0
      && (*(_BYTE *)(v7 + 16LL * v6 + 8) & 0xF) == 1 )
    {
      v9 = *(_QWORD *)(v7 + 16LL * v6);
    }
    else
    {
      v9 = 0LL;
    }
  }
  if ( v9 )
  {
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)this + 192), v4);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v9 + 120, 0LL);
    v13 = *(struct ADAPTER_RENDER **)(v9 + 2288);
    if ( v13 )
    {
      if ( *(_DWORD *)(v9 + 200) == -1 )
      {
        v20 = WdLogNewEntry5_WdWarning(v10, v13, v11, v12);
        *(_QWORD *)(v20 + 24) = 3154LL;
        WdLogEvent5_WdWarning(v20);
      }
      else
      {
        DXGPROCESS::CloseAdapter(this, v13);
      }
    }
    ExReleasePushLockSharedEx(v9 + 120, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v9);
    return 0LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    return 3221225485LL;
  }
}
