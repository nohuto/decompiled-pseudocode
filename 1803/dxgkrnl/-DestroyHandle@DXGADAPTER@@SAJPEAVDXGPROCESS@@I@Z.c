/*
 * XREFs of ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00D2540
 * Callers:
 *     ?DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z @ 0x1C00D2460 (-DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z.c)
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00D3F50 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00D4274 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C0164C30 (-DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017D200 (-VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00F7FF0 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00F8670 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DestroyHandle(struct _KTHREAD **a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  bool v7; // zf
  struct _KTHREAD *v8; // r8
  int v9; // edx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct ADAPTER_RENDER *v14; // rdx
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rax
  struct _KTHREAD *v19; // rbp
  __int64 v20; // r8
  int v21; // edx
  __int64 v22; // rbx
  __int64 v23; // rax
  _BYTE v24[8]; // [rsp+20h] [rbp-38h] BYREF
  char *v25; // [rsp+28h] [rbp-30h]
  int v26; // [rsp+30h] [rbp-28h]

  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v17 + 24) = 3215LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v25 = (char *)(a1 + 26);
  if ( a1 != (struct _KTHREAD **)-208LL && a1[27] == KeGetCurrentThread() )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v18 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v18);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(a1 + 26, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v16 = *((_DWORD *)a1 + 56);
      if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v4, &EventBlockThread, v5, v16);
    }
    ExAcquirePushLockExclusiveEx(a1 + 26, 0LL);
  }
  v6 = (a2 >> 6) & 0xFFFFFF;
  a1[27] = KeGetCurrentThread();
  v7 = (*((_BYTE *)a1 + 323) & 8) == 0;
  v26 = 2;
  if ( v7 )
  {
    if ( (unsigned int)v6 < *((_DWORD *)a1 + 62)
      && (v8 = a1[29],
          v9 = *((_DWORD *)v8 + 4 * (unsigned int)v6 + 2),
          ((a2 >> 25) & 0x60) == (*((_BYTE *)v8 + 16 * (unsigned int)v6 + 8) & 0x60))
      && (v9 & 0x2000) == 0
      && (v9 & 0x1F) != 0
      && (v10 = 2 * v6, (v9 & 0x1F) == 1) )
    {
      v11 = *((_QWORD *)v8 + v10);
    }
    else
    {
      v11 = 0LL;
    }
  }
  else
  {
    v19 = a1[57];
    DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v19 + 208));
    if ( (unsigned int)v6 < *((_DWORD *)v19 + 62)
      && (v20 = *((_QWORD *)v19 + 29),
          v21 = *(_DWORD *)(v20 + 16 * v6 + 8),
          ((a2 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v6 + 8) & 0x60))
      && (v21 & 0x2000) == 0
      && (v21 & 0x1F) != 0
      && (v22 = 2 * v6, (v21 & 0x1F) == 1) )
    {
      v11 = *(_QWORD *)(v20 + 8 * v22);
    }
    else
    {
      v11 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)v19 + 208, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v11 )
  {
    HMGRTABLE::FreeHandle((HMGRTABLE *)(a1 + 29), a2);
    a1[27] = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 26, 0LL);
    KeLeaveCriticalRegion();
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v11 + 120, 0LL);
    v14 = *(struct ADAPTER_RENDER **)(v11 + 2464);
    if ( v14 )
    {
      if ( *(_DWORD *)(v11 + 200) == -1 )
      {
        v23 = WdLogNewEntry5_WdWarning(v12, v14, v13);
        *(_QWORD *)(v23 + 24) = 3245LL;
        WdLogEvent5_WdWarning(v23);
      }
      else
      {
        DXGPROCESS::CloseAdapter((DXGPROCESS *)a1, v14);
      }
    }
    ExReleasePushLockSharedEx(v11 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v11 + 16), (struct DXGADAPTER *)v11);
    return 0LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
    return 3221225485LL;
  }
}
